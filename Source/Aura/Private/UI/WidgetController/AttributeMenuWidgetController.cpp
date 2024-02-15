// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetController/AttributeMenuWidgetController.h"

#include "AuraGameplayTags.h"
#include "AbilitySystem/AuraAttributeSet.h"

void UAttributeMenuWidgetController::BindCallbacksToDependencies()
{
	const UAuraAttributeSet* AS = CastChecked<UAuraAttributeSet>(AttributeSet);
	check(AttributeInfo);
	for (auto& Tag : AttributeInfo.Get()->AttributeInfos)
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Tag.AttributeGetter).AddLambda
		(
			[this, Tag](const FOnAttributeChangeData& Data)
			{
				BroadcastAttributeInfo(Tag.AttributeTag);
			}
		);
	}
	
}

void UAttributeMenuWidgetController::BroadcastInitialValues()
{
	const UAuraAttributeSet* AS = CastChecked<UAuraAttributeSet>(AttributeSet);

	check(AttributeInfo);

	for (auto& Tag : AttributeInfo.Get()->AttributeInfos)
	{
		BroadcastAttributeInfo(Tag.AttributeTag);
	}
}

void UAttributeMenuWidgetController::BroadcastAttributeInfo(const FGameplayTag& Tag) const
{
	const UAuraAttributeSet* AS = CastChecked<UAuraAttributeSet>(AttributeSet);
	// Getting info from DataAsset based on the Gameplay tag match.
	FAuraAttributeInfo Info = AttributeInfo->FindAttributeInfoForTag(Tag);
	// Set the hidden attribute value in the dataset.
	Info.AttributeValue = Info.AttributeGetter.GetNumericValue(AS);
	// Broadcast for those who subscribe. IE the attribute menu widget in blueprint
	AttributeInfoDelegate.Broadcast(Info);
}
