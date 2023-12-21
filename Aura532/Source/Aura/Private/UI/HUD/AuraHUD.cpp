// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/AuraHUD.h"
#include "UI/Widget/AuraUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "UI/WidgetController/AttributeMenuWidgetController.h"
#include "UI/WidgetController/OverlayWidgetController.h"

// UOverlayWidgetController* AAuraHUD::GetOverlayWidgetController(const FWidgetControllerParams& WCParams)
// {
// 	if (OverlayWidgetController == nullptr)
// 	{
// 		OverlayWidgetController = NewObject<UOverlayWidgetController>(this, OverlayWidgetControllerClass);
// 		OverlayWidgetController->SetWidgetControllerParams(WCParams);
// 		OverlayWidgetController->BindCallbacksToDependencies();
//
// 		return OverlayWidgetController;
// 	}
// 	return OverlayWidgetController;
// }

UAuraWidgetController* AAuraHUD::GetWidgetController(UAuraWidgetController* WidgetController, TSubclassOf<UAuraWidgetController> WidgetControllerClass,
	const FWidgetControllerParams& WCParams)
{
	if (WidgetController == nullptr)
	{
		WidgetController = NewObject<UAuraWidgetController>(this, WidgetControllerClass);
		WidgetController->SetWidgetControllerParams(WCParams);
		WidgetController->BindCallbacksToDependencies();

		return WidgetController;
	}
	return WidgetController;
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

void AAuraHUD::InitAttributeMenu(APlayerController* PlayerController, APlayerState* PlayerState,
	UAbilitySystemComponent* AbilitySystemComponent, UAttributeSet* AttributeSet)
{
	checkf(AttributeMenuWidgetControllerClass, TEXT("Attribute Menu Widget Controller Class unitialized, please fill out BP_AuraHUD"));
	
	const FWidgetControllerParams WidgetControllerParams(PlayerController, PlayerState, AbilitySystemComponent, AttributeSet);
	UAttributeMenuWidgetController* AMWidgetController = Cast<UAttributeMenuWidgetController>(GetWidgetController(AttributeMenuWidgetController, AttributeMenuWidgetControllerClass, WidgetControllerParams));

	AttributeMenuWidget->SetWidgetController(AMWidgetController);
	AMWidgetController->BroadcastInitialValues();
}

// void AAuraHUD::InitWidget(const FWidgetControllerParams& WidgetControllerParams,
//                               FWidgetControllerRefs& WidgetControllerRefs, const bool bAddToViewport)
// {
// 	checkf(WidgetControllerRefs.WidgetClass, TEXT("[%s] Widget Class unitialized, please fill out BP_AuraHUD"), *WidgetControllerRefs.WidgetClass->GetName());
// 	checkf(WidgetControllerRefs.WidgetControllerClass, TEXT("[%s] Widget Controller Class unitialized, please fill out BP_AuraHUD"), *WidgetControllerRefs.WidgetControllerClass->GetName());
//
// 	// Create Widget
// 	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), WidgetControllerRefs.WidgetClass);
// 	WidgetControllerRefs.Widget = Cast<UAuraUserWidget>(Widget);
// 	
// 	UOverlayWidgetController* WidgetController = Cast<UOverlayWidgetController>(GetWidgetController(WidgetControllerRefs.WidgetController, WidgetControllerRefs.WidgetControllerClass, WidgetControllerParams));
//
// 	// After this happens we can tell the delegates to init the initial values
// 	WidgetControllerRefs.Widget->SetWidgetController(WidgetController);
// 	WidgetController->BroadcastInitialValues();
// 	
// 	if (bAddToViewport)
// 	{
// 		Widget->AddToViewport();	
// 	}	
// }

