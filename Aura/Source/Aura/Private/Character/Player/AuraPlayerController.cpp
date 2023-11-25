// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/AuraPlayerController.h"

#include "../../../../../../../../EpicGames/UE_5.3/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "../../../../../../../../EpicGames/UE_5.3/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h"
#include "../../../../../../../../EpicGames/UE_5.3/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputActionValue.h"
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

	if (APawn* ControlledPawn = GetPawn<APawn>())
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
		ControlledPawn->AddControllerPitchInput(InputValue.Y);
	}
}

void AAuraPlayerController::CursorTrace()
{	
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		FHitResult CursorHit;		
		
		GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
		if (!CursorHit.bBlockingHit) return;

		LastActor = ThisActor;
		ThisActor =	Cast<IEnemyInterface>(CursorHit.GetActor());

		if (ThisActor != LastActor)
		{
			if (LastActor != nullptr)
			{
				LastActor->UnHighlightActor();
			}
 
			if (ThisActor != nullptr)
			{
				ThisActor->HighlightActor();
			}
		}
	}
}
