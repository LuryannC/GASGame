// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AuraAttributeSet.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "GameplayEffectExtension.h"
#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"

UAuraAttributeSet::UAuraAttributeSet()
{
	InitHealth(50.0f);
	InitMaxHealth(100.0f);
	InitMana(50.0f);
	InitMaxMana(100.0f);
}

void UAuraAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Strength, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Intelligence, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Resilience, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Vigor, COND_None, REPNOTIFY_Always);
	
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAuraAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
}

void UAuraAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
	if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxMana());
	}
}


void UAuraAttributeSet::SetEffectProperties(const FGameplayEffectModCallbackData& Data,
	FPropertiesOwners& PropertiesOwners) const
{
	// Soource = Causer of the effect, Target = Target of the effect (owner of this attribute set)	

	PropertiesOwners.GameplayEffectContextHandle = Data.EffectSpec.GetContext();		
	PropertiesOwners.Source.AbilitySystemComponent = PropertiesOwners.GameplayEffectContextHandle.GetOriginalInstigatorAbilitySystemComponent();
	
	if (IsValid(PropertiesOwners.Source.AbilitySystemComponent)
		&& PropertiesOwners.Source.AbilitySystemComponent->AbilityActorInfo.IsValid()
		&& PropertiesOwners.Source.AbilitySystemComponent->AbilityActorInfo->AvatarActor.IsValid())
	{
		PropertiesOwners.Source.AvatarActor = PropertiesOwners.Source.AbilitySystemComponent->AbilityActorInfo->AvatarActor.Get();
		PropertiesOwners.Source.Controller =  PropertiesOwners.Source.AbilitySystemComponent->AbilityActorInfo->PlayerController.Get();
		
		if (PropertiesOwners.Source.Controller == nullptr && PropertiesOwners.Source.AvatarActor != nullptr)
		{
			if (const APawn* Pawn = Cast<APawn>(PropertiesOwners.Source.AvatarActor))
			{
				PropertiesOwners.Source.Controller = Pawn->GetController();
			}
		}
		if (PropertiesOwners.Source.Controller)
		{
			PropertiesOwners.Source.Character = Cast<ACharacter>(PropertiesOwners.Source.Controller->GetPawn());
		}
	}
		
	// Get Target ASC

	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		PropertiesOwners.Target.AvatarActor = Data.Target.AbilityActorInfo->AvatarActor.Get();	
		PropertiesOwners.Target.Controller = Data.Target.AbilityActorInfo->PlayerController.Get();
		PropertiesOwners.Target.Character = Cast<ACharacter>(PropertiesOwners.Target.AvatarActor);
		PropertiesOwners.Target.AbilitySystemComponent = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(PropertiesOwners.Target.AvatarActor);
	}
}

void UAuraAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FPropertiesOwners PropertiesOwners;
	SetEffectProperties(Data, PropertiesOwners);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
	}
	if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetMana(FMath::Clamp(GetMana(), 0.f, GetMaxMana()));
	}
}

void UAuraAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Health, OldHealth);
}

void UAuraAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, MaxHealth, OldMaxHealth);
}

void UAuraAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Mana, OldMana);
}

void UAuraAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, MaxMana, OldMaxMana);
}

void UAuraAttributeSet::OnRep_Strength(const FGameplayAttributeData& OldStrength) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Strength, OldStrength);
}

void UAuraAttributeSet::OnRep_Intelligence(const FGameplayAttributeData& OldIntelligence) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Intelligence, OldIntelligence);
}

void UAuraAttributeSet::OnRep_Resilience(const FGameplayAttributeData& OldResilience) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Resilience, OldResilience);
}

void UAuraAttributeSet::OnRep_Vigor(const FGameplayAttributeData& OldVigor) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAuraAttributeSet, Vigor, OldVigor);
}
