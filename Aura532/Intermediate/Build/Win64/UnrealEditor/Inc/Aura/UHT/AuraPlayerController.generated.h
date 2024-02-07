// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Player/AuraPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef AURA_AuraPlayerController_generated_h
#error "AuraPlayerController.generated.h already included, missing '#pragma once' in AuraPlayerController.h"
#endif
#define AURA_AuraPlayerController_generated_h

#define FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_SPARSE_DATA
#define FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OpenAttributeMenu_Implementation(FInputActionValue const& ActionValue); \
 \
	DECLARE_FUNCTION(execOpenAttributeMenu);


#define FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_ACCESSORS
#define FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_CALLBACK_WRAPPERS
#define FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraPlayerController(); \
	friend struct Z_Construct_UClass_AAuraPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAuraPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraPlayerController)


#define FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuraPlayerController(AAuraPlayerController&&); \
	NO_API AAuraPlayerController(const AAuraPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraPlayerController) \
	NO_API virtual ~AAuraPlayerController();


#define FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_21_PROLOG
#define FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_SPARSE_DATA \
	FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_ACCESSORS \
	FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_CALLBACK_WRAPPERS \
	FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_INCLASS_NO_PURE_DECLS \
	FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Aura532_Source_Aura_Public_Character_Player_AuraPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
