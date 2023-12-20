// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class IEnemyInterface;

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AAuraPlayerController();

	virtual void PlayerTick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;
	
	UFUNCTION(BlueprintNativeEvent)
	void OpenAttributeMenu(const FInputActionValue& ActionValue);


private:
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputMappingContext> AuraContext;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> RotateAction;
	
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> OpenAttributeMenuAction;

	void Move(const FInputActionValue& ActionValue);
	void RotateCamera(const FInputActionValue& ActionValue);

	void CursorTrace();
	IEnemyInterface* LastTargetActorInterface;
	IEnemyInterface* CurrentTargetActorInterface;

	UPROPERTY(EditAnywhere)
	float TraceDistance = 200.0;
	
};
