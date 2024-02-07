// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AuraAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef AURA_AuraAttributeSet_generated_h
#error "AuraAttributeSet.generated.h already included, missing '#pragma once' in AuraAttributeSet.h"
#endif
#define AURA_AuraAttributeSet_generated_h

#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectProperties_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


template<> AURA_API UScriptStruct* StaticStruct<struct FEffectProperties>();

#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertiesOwners_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


template<> AURA_API UScriptStruct* StaticStruct<struct FPropertiesOwners>();

#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_SPARSE_DATA
#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_ManaRegeneration); \
	DECLARE_FUNCTION(execOnRep_HealthRegeneration); \
	DECLARE_FUNCTION(execOnRep_CriticalHitResistance); \
	DECLARE_FUNCTION(execOnRep_CriticalHitDamage); \
	DECLARE_FUNCTION(execOnRep_CriticalHitChance); \
	DECLARE_FUNCTION(execOnRep_BlockChance); \
	DECLARE_FUNCTION(execOnRep_ArmorPenetration); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_Vigor); \
	DECLARE_FUNCTION(execOnRep_Resilience); \
	DECLARE_FUNCTION(execOnRep_Intelligence); \
	DECLARE_FUNCTION(execOnRep_Strength);


#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_ACCESSORS
#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraAttributeSet(); \
	friend struct Z_Construct_UClass_UAuraAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UAuraAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UAuraAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Strength=NETFIELD_REP_START, \
		Intelligence, \
		Resilience, \
		Vigor, \
		Armor, \
		ArmorPenetration, \
		BlockChance, \
		CriticalHitChance, \
		CriticalHitDamage, \
		CriticalHitResistance, \
		HealthRegeneration, \
		ManaRegeneration, \
		MaxHealth, \
		MaxMana, \
		Health, \
		Mana, \
		NETFIELD_REP_END=Mana	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAuraAttributeSet) \
public:


#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuraAttributeSet(UAuraAttributeSet&&); \
	NO_API UAuraAttributeSet(const UAuraAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAuraAttributeSet) \
	NO_API virtual ~UAuraAttributeSet();


#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_59_PROLOG
#define FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_SPARSE_DATA \
	FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_ACCESSORS \
	FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_INCLASS_NO_PURE_DECLS \
	FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UAuraAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aura532_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
