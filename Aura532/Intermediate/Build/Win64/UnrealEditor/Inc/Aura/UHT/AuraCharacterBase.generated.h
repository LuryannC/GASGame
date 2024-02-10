// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AuraCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_AuraCharacterBase_generated_h
#error "AuraCharacterBase.generated.h already included, missing '#pragma once' in AuraCharacterBase.h"
#endif
#define AURA_AuraCharacterBase_generated_h

#define FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_SPARSE_DATA
#define FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCombatSocketLocation);


#define FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_ACCESSORS
#define FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraCharacterBase(); \
	friend struct Z_Construct_UClass_AAuraCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AAuraCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraCharacterBase*>(this); }


#define FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuraCharacterBase(AAuraCharacterBase&&); \
	NO_API AAuraCharacterBase(const AAuraCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraCharacterBase) \
	NO_API virtual ~AAuraCharacterBase();


#define FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_18_PROLOG
#define FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_SPARSE_DATA \
	FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_ACCESSORS \
	FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
