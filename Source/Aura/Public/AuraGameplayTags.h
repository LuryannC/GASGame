// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * AuraGameplayTags
 *
 * Singleton containing native Gameplay Tags
 */

struct FAuraGameplayTags
{
public:
 static const FAuraGameplayTags& Get() {return GameplayTags;}
 static void InitializeNativeGameplayTags();

 // Primary Attributes 
 FGameplayTag Attributes_Primary_Strength;
 FGameplayTag Attributes_Primary_Intelligence;
 FGameplayTag Attributes_Primary_Resilience;
 FGameplayTag Attributes_Primary_Vigor;
 
 
 // Secondary Attributes
 FGameplayTag Attributes_Secondary_Armour;
 FGameplayTag Attributes_Secondary_ArmorPenetration;
 FGameplayTag Attributes_Secondary_BlockChance;
 FGameplayTag Attributes_Secondary_CriticalHitChance;
 FGameplayTag Attributes_Secondary_CriticalHitDamage;
 FGameplayTag Attributes_Secondary_CriticalHitResistance;
 FGameplayTag Attributes_Secondary_HealthRegeneration;
 FGameplayTag Attributes_Secondary_ManaRegeneration;
 FGameplayTag Attributes_Secondary_MaxHealth;
 FGameplayTag Attributes_Secondary_MaxMana;

// Inputs
 FGameplayTag InputTag_LMB;
 FGameplayTag InputTag_RMB;
 FGameplayTag InputTag_Ability1;
 FGameplayTag InputTag_Ability2;
 FGameplayTag InputTag_Ability3;
 FGameplayTag InputTag_Ability4;

 // Data tags
 FGameplayTag DataTag_Damage;

 // Combat
 FGameplayTag Effects_HitReaction;
private:
 static FAuraGameplayTags GameplayTags;
};
