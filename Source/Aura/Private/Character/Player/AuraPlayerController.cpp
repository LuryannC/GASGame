// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/AuraPlayerController.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "EnhancedInputSubsystems.h"
#include "GameplayTagContainer.h"
#include "InputActionValue.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "Camera/CameraComponent.h"
#include "Character/AuraCharacter.h"
#include "Input/AuraInputComponent.h"
#include "Interactions/EnemyInterface.h"
#include "UI/Widget/DamageTextComponent.h"


AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
}

void AAuraPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CursorTrace();	
}

void AAuraPlayerController::Client_ShowDamageNumber_Implementation(float DamageAmount, bool bIsCriticalHit, bool bIsBlockedHit, ACharacter* TargetCharacter)
{
	if (IsValid(TargetCharacter) && DamageTextComponentClass && IsLocalController())
	{
		UDamageTextComponent* DamageTextComponent = NewObject<UDamageTextComponent>(TargetCharacter, DamageTextComponentClass);
		DamageTextComponent->RegisterComponent();
		DamageTextComponent->AttachToComponent(TargetCharacter->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		DamageTextComponent->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		DamageTextComponent->SetDamageText(DamageAmount, bIsCriticalHit, bIsBlockedHit);
	}
}

void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(AuraContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if(Subsystem)
	{
		Subsystem->AddMappingContext(AuraContext, 0);
	}	

	// bShowMouseCursor = true;
	// DefaultMouseCursor = EMouseCursor::Default;
	//
	// FInputModeGameAndUI InputModeData;
	// InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	// InputModeData.SetHideCursorDuringCapture(false);
	// SetInputMode(InputModeData);
}

void AAuraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UAuraInputComponent* AuraInputComponent = CastChecked<UAuraInputComponent>(InputComponent);

	// Move
	AuraInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAuraPlayerController::Move);

	// Rotate Camera
	AuraInputComponent->BindAction(RotateAction,ETriggerEvent::Triggered, this, &AAuraPlayerController::RotateCamera);

	// Menus
	AuraInputComponent->BindAction(OpenAttributeMenuAction, ETriggerEvent::Triggered, this,&AAuraPlayerController::OpenAttributeMenu);

	// Abilities
	AuraInputComponent->BindAbilityActions(InputConfig, this, &ThisClass::AbilityInputTagPressed, &ThisClass::AbilityInputTagReleased, &ThisClass::AbilityInputTagHeld);
}

void AAuraPlayerController::BeginPlayingState()
{
	Super::BeginPlayingState();

	// Problem, it makes the pickup message appears twice for some reason
	// Init ability actor info for the client
	// if(AAuraCharacter* AuraCharacter = Cast<AAuraCharacter>(GetPawn()))
	// {
	// 	AuraCharacter->InitAbilityActorInfo();
	// }
}

void AAuraPlayerController::Move(const FInputActionValue& ActionValue)
{
	const FVector2d InputAxisVector = ActionValue.Get<FVector2d>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if (AAuraCharacter* ControlledPawn = GetPawn<AAuraCharacter>())
	{
		ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
		ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);
	}
}

void AAuraPlayerController::RotateCamera(const FInputActionValue& ActionValue)
{
	const FVector2d InputValue = ActionValue.Get<FVector2d>();

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddControllerYawInput(InputValue.X);
		ControlledPawn->AddControllerPitchInput(InputValue.Y*-1.0f);
	}
}

void AAuraPlayerController::OpenAttributeMenu_Implementation(const FInputActionValue& ActionValue)
{
}

void AAuraPlayerController::CursorTrace()
{	
	if (AAuraCharacter* ControlledPawn = GetPawn<AAuraCharacter>())
	{
		FHitResult HitResult;
		const FVector StartLocation = ControlledPawn->FollowCamera->K2_GetComponentLocation();
		const FVector FinalLocation = ControlledPawn->FollowCamera->K2_GetComponentLocation() + (ControlledPawn->FollowCamera->GetForwardVector() * TraceDistance);
		
		HitResult.TraceStart = StartLocation;
		HitResult.TraceEnd = FinalLocation;
		FCollisionQueryParams CollisionQueryParams;
		
		CollisionQueryParams.AddIgnoredActor(this);
		CollisionQueryParams.AddIgnoredActor(ControlledPawn);

		//DrawDebugLine(ControlledPawn->GetWorld(), StartLocation, FinalLocation, FColor::Red, false, 0.1f);
		if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, FinalLocation, ECC_Visibility, CollisionQueryParams))
		{
			// The line trace hit something
			AActor* HitActor = HitResult.GetActor();
			FVector HitLocation = HitResult.ImpactPoint;

			LastTargetActorInterface = CurrentTargetActorInterface;
			CurrentTargetActorInterface = Cast<IEnemyInterface>(HitActor);

			if (LastTargetActorInterface == nullptr)
			{
				if (CurrentTargetActorInterface != nullptr)
				{
					CurrentTargetActorInterface->HighlightActor();
				}
			}
			else
			{
				if (CurrentTargetActorInterface == nullptr)
				{
					LastTargetActorInterface->UnHighlightActor();
				}
				else
				{
					if (LastTargetActorInterface != CurrentTargetActorInterface)
					{
						LastTargetActorInterface->UnHighlightActor();
						CurrentTargetActorInterface->HighlightActor();
					}
				}
			}

			// if (LastActor != nullptr) {
			// 	LastActor->UnHighlightActor();
			// }
			//
			// if (ThisActor != nullptr && LastActor != ThisActor) {
			// 	ThisActor->HighlightActor();
			// }		

			// Do something with the hit actor and location
			// For example, print information to the console
			//UE_LOG(LogTemp, Warning, TEXT("Hit Actor: %s"), *HitActor->GetName());
			//UE_LOG(LogTemp, Warning, TEXT("Hit Location: %s"), *HitLocation.ToString());
		}
	}
}

void AAuraPlayerController::AbilityInputTagPressed(FGameplayTag InputTag)
{
	GEngine->AddOnScreenDebugMessage(1, 3.f, FColor::Red, *InputTag.ToString());
}

void AAuraPlayerController::AbilityInputTagReleased(FGameplayTag InputTag)
{
	if (GetASC() == nullptr) return;
	GetASC()->AbilityInputTagReleased(InputTag);
}

void AAuraPlayerController::AbilityInputTagHeld(FGameplayTag InputTag)
{
	if (GetASC() == nullptr) return;
	GetASC()->AbilityInputTagHeld(InputTag);
}

UAuraAbilitySystemComponent* AAuraPlayerController::GetASC()
{
	if (AuraAbilitySystemComponent == nullptr)
	{
		AuraAbilitySystemComponent = Cast<UAuraAbilitySystemComponent>(
			UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn<APawn>()));
	}
	return AuraAbilitySystemComponent;
}
