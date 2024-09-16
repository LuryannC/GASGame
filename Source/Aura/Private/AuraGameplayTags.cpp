// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{

	//Primary Attributes
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Strength"), FString("Increases physical damage"));
	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Intelligence"), FString("Increases magical damage"));
	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Resilience"), FString("Increases Armor and Armor Penetration"));
	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Vigor"), FString("Reduces damage taken, improves block chance"));
	

	// Secondary Attributes
	GameplayTags.Attributes_Secondary_Armour = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.Armour"), FString("Reduces damage taken, improves block chance"));
	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ArmorPenetration"), FString("Ignores Percentage of enemy Armor, increases Critical Hit Chance"));
	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.BlockChance"), FString("Chance to cut incoming damage in half"));
	GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitChance"), FString("Chance to double damage plus critical hit bonus"));
	GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitDamage"), FString("Bonus damage added when a critical hit is scored"));
	GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitResistance"), FString("Reduces Critical Hit Chance of attacking enemies"));
	GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.HealthRegeneration"), FString("Amount of Health regenerated every 1 second"));
	GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ManaRegeneration"), FString("Amount of Mana regenerated every 1 second"));
	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxHealth"), FString("Maximum amount of Health obtainable"));
	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxMana"), FString("Maximum amount of Mana obtainable"));


	// Input Tags
	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.LMB"), FString("Input Tag for Left Mouse Button"));
	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.RMB"), FString("Input Tag for Left Mouse Button"));
	GameplayTags.InputTag_Ability1 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.Ability1"), FString("Input Tag for Ability 1"));
	GameplayTags.InputTag_Ability2 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.Ability2"), FString("Input Tag for Ability 2"));
	GameplayTags.InputTag_Ability3 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.Ability3"), FString("Input Tag for Ability 3"));
	GameplayTags.InputTag_Ability4 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.Ability4"), FString("Input Tag for Ability 4"));

	// Data
	GameplayTags.DataTag_Damage = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("DataTag.Damage"), FString("Damage data tag"));
	
	/*
	 *  Damage Types
	 */
	GameplayTags.DamageType_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("DamageType.Fire"), FString("Fire damage type"));
	GameplayTags.DamageType_Lightning = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("DamageType.Lightning"), FString("Lightning damage type"));
	GameplayTags.DamageType_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("DamageType.Arcane"), FString("Arcane damage type"));
	GameplayTags.DamageType_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("DamageType.Physical"), FString("Physical damage type"));

	/*
	* Resistances
	*/
	GameplayTags.Attributes_Resistances_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Resistance.Fire"), FString("Resistance to fire damage"));
	GameplayTags.Attributes_Resistances_Lightning = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Resistance.Lightning"), FString("Resistance to Lightning damage"));
	GameplayTags.Attributes_Resistances_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Resistance.Arcane"), FString("Resistance to Arcane damage"));
	GameplayTags.Attributes_Resistances_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Resistance.Physical"), FString("Resistance to Physical damage"));

	/*
	* Map of Damage Types to Resistance
	*/
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.DamageType_Fire, GameplayTags.Attributes_Resistances_Fire);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.DamageType_Lightning, GameplayTags.Attributes_Resistances_Lightning);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.DamageType_Arcane, GameplayTags.Attributes_Resistances_Arcane);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.DamageType_Physical, GameplayTags.Attributes_Resistances_Physical);

	// Combat
	GameplayTags.Effects_HitReaction = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Effects.HitReaction"), FString("Effect Hit Reaction"));

}
