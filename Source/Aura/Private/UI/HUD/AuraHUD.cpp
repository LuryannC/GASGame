// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/AuraHUD.h"
#include "UI/Widget/AuraUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "UI/WidgetController/AttributeMenuWidgetController.h"
#include "UI/WidgetController/OverlayWidgetController.h"


UAuraWidgetController* AAuraHUD::GetWidgetController(UAuraWidgetController* WidgetController, TSubclassOf<UAuraWidgetController> WidgetControllerClass,
	const FWidgetControllerParams& WCParams)
{
	if (WidgetController == nullptr)
	{
		WidgetController = NewObject<UAuraWidgetController>(this, WidgetControllerClass);
		WidgetController->SetWidgetControllerParams(WCParams);
		WidgetController->BindCallbacksToDependencies();
	}
	return WidgetController;
}


UOverlayWidgetController* AAuraHUD::GetOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (OverlayWidgetController == nullptr)
	{
		OverlayWidgetController = NewObject<UOverlayWidgetController>(this, OverlayWidgetControllerClass);
		OverlayWidgetController->SetWidgetControllerParams(WCParams);
		OverlayWidgetController->BindCallbacksToDependencies();
	}
	return OverlayWidgetController;
}

UAttributeMenuWidgetController* AAuraHUD::GetAttributeMenuWidgetController(const FWidgetControllerParams& WCParams)
{
	if (AttributeMenuWidgetController == nullptr)
	{
		AttributeMenuWidgetController = NewObject<UAttributeMenuWidgetController>(this, AttributeMenuWidgetControllerClass);
		AttributeMenuWidgetController->SetWidgetControllerParams(WCParams);
		AttributeMenuWidgetController->BindCallbacksToDependencies();
	}
	return AttributeMenuWidgetController;
}

void AAuraHUD::InitOverlay(APlayerController* PlayerController, APlayerState* PlayerState,
                           UAbilitySystemComponent* AbilitySystemComponent, UAttributeSet* AttributeSet)
{
	checkf(OverlayWidgetClass, TEXT("Overlay Widget Class unitialized, please fill out BP_AuraHUD"));
	checkf(OverlayWidgetControllerClass, TEXT("Overlay Widget Controller Class unitialized, please fill out BP_AuraHUD"))

	// Overlay Widget
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	OverlayWidget = Cast<UAuraUserWidget>(Widget);

	const FWidgetControllerParams WidgetControllerParams(PlayerController, PlayerState, AbilitySystemComponent, AttributeSet);
	UOverlayWidgetController* OWidgetController = Cast<UOverlayWidgetController>(GetWidgetController(OverlayWidgetController, OverlayWidgetControllerClass, WidgetControllerParams));

	// After this happens we can tell the delegates to init the initial values
	OverlayWidget->SetWidgetController(OWidgetController);
	OWidgetController->BroadcastInitialValues();
	Widget->AddToViewport();
}

// void AAuraHUD::InitAttributeMenu(APlayerController* PlayerController, APlayerState* PlayerState,
// 	UAbilitySystemComponent* AbilitySystemComponent, UAttributeSet* AttributeSet)
// {
// 	checkf(AttributeMenuWidgetControllerClass, TEXT("Attribute Menu Widget Controller Class unitialized, please fill out BP_AuraHUD"));
// 	
// 	const FWidgetControllerParams WidgetControllerParams(PlayerController, PlayerState, AbilitySystemComponent, AttributeSet);
//
// 	if (UAttributeMenuWidgetController* AMWidgetController = Cast<UAttributeMenuWidgetController>(GetWidgetController(AttributeMenuWidgetController, AttributeMenuWidgetControllerClass, WidgetControllerParams)))
// 	{
// 		AttributeMenuWidget->SetWidgetController(AMWidgetController);
// 		AMWidgetController->BroadcastInitialValues();
// 	}
// }


