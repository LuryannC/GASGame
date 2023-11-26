// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/AuraPlayerController.h"

#include "../../../../../../../../EpicGames/UE_5.3/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "../../../../../../../../EpicGames/UE_5.3/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h"
#include "../../../../../../../../EpicGames/UE_5.3/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputActionValue.h"
#include "Camera/CameraComponent.h"
#include "Character/AuraCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Interactions/EnemyInterface.h"


AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
}

void AAuraPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CursorTrace();	
}

void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(AuraContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(AuraContext, 0);

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

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

	// Move
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAuraPlayerController::Move);

	// Rotate Camera
	EnhancedInputComponent->BindAction(RotateAction,ETriggerEvent::Triggered, this, &AAuraPlayerController::RotateCamera);	
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
