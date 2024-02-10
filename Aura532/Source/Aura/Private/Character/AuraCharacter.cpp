// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraCharacter.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Character/Player/AuraPlayerController.h"
#include "Character/Player/AuraPlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UI/HUD/AuraHUD.h"
#include "UI/WidgetController/OverlayWidgetController.h"

AAuraCharacter::AAuraCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, RotationRate, 0.0f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;


	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraArm->SetupAttachment(RootComponent);
	CameraArm->bEnableCameraLag = true;
	CameraArm->bInheritYaw = false;
 
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraArm, USpringArmComponent::SocketName);
}

void AAuraCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if(GIsServer)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Orange, TEXT("PossessedBy - Server"));
	}
	// Init ability actor info for the server
	InitAbilityActorInfo();

	// Abilities should only be initialized on server
	InitializeCharacterAbilities();
}

void AAuraCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	/* Notes: So doesn't seems very good to initialize stuff as it depends on time it gets initialize.
	 * If the game starts to fast it gets nullptr for PlayerState. Moved to the controller where it has a
	 * "BeginPlayingState" function.
	*/
	// Init ability actor info for the client
	//InitAbilityActorInfo();
	
}

int32 AAuraCharacter::GetPlayerLevel()
{
	const AAuraPlayerState* AuraPlayerState = GetPlayerState<AAuraPlayerState>();
	check(AuraPlayerState);
	return AuraPlayerState->GetPlayerLevel();
}

void AAuraCharacter::InitAbilityActorInfo()
{
	if(AAuraPlayerState* AuraPlayerState = GetPlayerState<AAuraPlayerState>())
	{
		AuraPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(AuraPlayerState, this);

		// AbilitySystem is valid by now
		AbilitySystemComponent = AuraPlayerState->GetAbilitySystemComponent();
		AttributesSet = AuraPlayerState->GetAttributeSet();

		Cast<UAuraAbilitySystemComponent>(AuraPlayerState->GetAbilitySystemComponent())->AbilityActorInfoSet();
		
		if(AAuraPlayerController * AuraPlayerController = Cast<AAuraPlayerController>(GetController()))
		{
			if (AAuraHUD* AuraHUD = Cast<AAuraHUD>(AuraPlayerController->GetHUD()))
			{
				AuraHUD->InitOverlay(AuraPlayerController, AuraPlayerState, AbilitySystemComponent, AttributesSet);
				//AuraHUD->InitAttributeMenu(AuraPlayerController, AuraPlayerState, AbilitySystemComponent, AttributesSet);
			}
			InitializeDefaultAttributes();
		}		
	}
}
