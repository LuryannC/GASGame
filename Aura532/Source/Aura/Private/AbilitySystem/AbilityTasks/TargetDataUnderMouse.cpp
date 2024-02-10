// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityTasks/TargetDataUnderMouse.h"

#include "Kismet/KismetMathLibrary.h"

UTargetDataUnderMouse* UTargetDataUnderMouse::CreateTargetDataUnderMouse(UGameplayAbility* OwningAbility)
{
	UTargetDataUnderMouse* MyObj = NewAbilityTask<UTargetDataUnderMouse>(OwningAbility);
	return MyObj;
}

void UTargetDataUnderMouse::Activate()
{
	const APlayerController* PC = Ability->GetCurrentActorInfo()->PlayerController.Get();
	FHitResult CursorHit;
	int32 SizeX;
	int32 SizeY;
	PC->GetViewportSize(SizeX, SizeY);
	FVector2D ViewportSize = {FMath::RoundToDouble(SizeX), FMath::RoundToDouble(SizeY)};
	//GEngine->GameViewport->GetViewportSize(ViewportSize);
	
	PC->GetHitResultAtScreenPosition(ViewportSize * 0.5f, ECC_Visibility, false, CursorHit);
	ValidDataDelegate.Broadcast(CursorHit.ImpactPoint);

	/*
	if (IsValid(PC))
	{
		if (!PC->HasAuthority())
		{
			FHitResult CursorHit;
			FVector2D ViewportSize;
			GEngine->GameViewport->GetViewportSize(ViewportSize);
	
			PC->GetHitResultAtScreenPosition(ViewportSize * 0.5f, ECC_Visibility, false, CursorHit);
			ValidDataDelegate.Broadcast(CursorHit.ImpactPoint);
		}
	}*/
}
