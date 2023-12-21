// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "AuraHUD.generated.h"

class UAttributeMenuWidgetController;
class UAttributeSet;
class UAbilitySystemComponent;
struct FWidgetControllerParams;
class UAuraUserWidget;
class UOverlayWidgetController;

// USTRUCT(BlueprintType)
// struct FWidgetControllerRefs
// {
// 	GENERATED_BODY()
//
// 	FWidgetControllerRefs(){}
//
// 	FWidgetControllerRefs(UAuraUserWidget& Widget, TSubclassOf<UAuraUserWidget> WidgetClass, UAuraWidgetController* WidgetController, TSubclassOf<UAuraWidgetController> WidgetControllerClass) :
// 	Widget(Widget), WidgetClass(WidgetClass), WidgetController(WidgetController), WidgetControllerClass(WidgetControllerClass){}
// 	
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	TObjectPtr<UAuraUserWidget> Widget = nullptr;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	TSubclassOf<UAuraUserWidget> WidgetClass = nullptr;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	TObjectPtr<UAuraWidgetController> WidgetController = nullptr;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	TSubclassOf<UAuraWidgetController> WidgetControllerClass = nullptr;
// };

/**
 * 
 */
UCLASS()
class AURA_API AAuraHUD : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UAuraUserWidget> OverlayWidget;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UAuraUserWidget> AttributeMenuWidget;	

	//UFUNCTION(BlueprintCallable)
	//UOverlayWidgetController* GetOverlayWidgetController(const FWidgetControllerParams& WCParams);

	UAuraWidgetController* GetWidgetController(UAuraWidgetController* WidgetController, TSubclassOf<UAuraWidgetController> WidgetControllerClass, const FWidgetControllerParams& WCParams);

	void InitOverlay(APlayerController* PlayerController, APlayerState* PlayerState, UAbilitySystemComponent* AbilitySystemComponent, UAttributeSet* AttributeSet);

	void InitAttributeMenu(APlayerController* PlayerController, APlayerState* PlayerState, UAbilitySystemComponent* AbilitySystemComponent, UAttributeSet* AttributeSet);

	//void InitWidget(const FWidgetControllerParams& WidgetControllerParams, FWidgetControllerRefs& WidgetControllerRefs, bool bAddToViewport);

protected:

private:

	// Overlay widget
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAuraUserWidget> OverlayWidgetClass;

	UPROPERTY()
	TObjectPtr<UOverlayWidgetController> OverlayWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UOverlayWidgetController> OverlayWidgetControllerClass;

	// Attribute Widget
	UPROPERTY()
	TObjectPtr<UAttributeMenuWidgetController> AttributeMenuWidgetController;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UAttributeMenuWidgetController> AttributeMenuWidgetControllerClass;

	// Getters
public:
	
	[[nodiscard]] TObjectPtr<UAuraUserWidget> GetOverlayWidget() const
	{
		return OverlayWidget;
	}

	[[nodiscard]] TObjectPtr<UAuraUserWidget> GetAttributeMenuWidget() const
	{
		return AttributeMenuWidget;
	}

	[[nodiscard]] TSubclassOf<UAuraUserWidget> GetOverlayWidgetClass() const
	{
		return OverlayWidgetClass;
	}

	[[nodiscard]] TObjectPtr<UOverlayWidgetController> GetOverlayWidgetController() const
	{
		return OverlayWidgetController;
	}

	[[nodiscard]] TSubclassOf<UOverlayWidgetController> GetOverlayWidgetControllerClass() const
	{
		return OverlayWidgetControllerClass;
	}

	[[nodiscard]] TObjectPtr<UAttributeMenuWidgetController> GetAttributeMenuWidgetController() const
	{
		return AttributeMenuWidgetController;
	}

	[[nodiscard]] TSubclassOf<UAttributeMenuWidgetController> GetAttributeMenuWidgetControllerClass() const
	{
		return AttributeMenuWidgetControllerClass;
	}
};
