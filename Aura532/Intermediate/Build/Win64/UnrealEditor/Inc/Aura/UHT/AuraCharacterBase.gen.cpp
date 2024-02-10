// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Character/AuraCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraCharacterBase() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase();
	AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(AAuraCharacterBase::execGetCombatSocketLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCombatSocketLocation();
		P_NATIVE_END;
	}
	void AAuraCharacterBase::StaticRegisterNativesAAuraCharacterBase()
	{
		UClass* Class = AAuraCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCombatSocketLocation", &AAuraCharacterBase::execGetCombatSocketLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics
	{
		struct AuraCharacterBase_eventGetCombatSocketLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraCharacterBase_eventGetCombatSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraCharacterBase, nullptr, "GetCombatSocketLocation", nullptr, nullptr, Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::AuraCharacterBase_eventGetCombatSocketLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::AuraCharacterBase_eventGetCombatSocketLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraCharacterBase);
	UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister()
	{
		return AAuraCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AAuraCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTipSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponTipSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributesSet;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAttributesArray;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartupAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAuraCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraCharacterBase_GetCombatSocketLocation, "GetCombatSocketLocation" }, // 2228180388
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AuraCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponTipSocketName = { "WeaponTipSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, WeaponTipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponTipSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttributesSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttributesSet = { "AttributesSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, AttributesSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttributesSet_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttributesSet_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultAttributesArray_Inner = { "DefaultAttributesArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultAttributesArray_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(BlueprintReadOnly, EditAnywhere, Category=\"Attributes\")\n// TSubclassOf<UGameplayEffect> DefaultPrimaryAttributes;\n//\n// UPROPERTY(BlueprintReadOnly, EditAnywhere, Category=\"Attributes\")\n// TSubclassOf<UGameplayEffect> DefaultSecondaryAttributes;\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly, EditAnywhere, Category=\"Attributes\")\nTSubclassOf<UGameplayEffect> DefaultPrimaryAttributes;\n\nUPROPERTY(BlueprintReadOnly, EditAnywhere, Category=\"Attributes\")\nTSubclassOf<UGameplayEffect> DefaultSecondaryAttributes;" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultAttributesArray = { "DefaultAttributesArray", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, DefaultAttributesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultAttributesArray_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultAttributesArray_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities_Inner = { "StartupAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Character/AuraCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities = { "StartupAbilities", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, StartupAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities_MetaData), Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_WeaponTipSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_AttributesSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultAttributesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_DefaultAttributesArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_StartupAbilities,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAuraCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraCharacterBase, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraCharacterBase, ICombatInterface), false },  // 2652761050
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams = {
		&AAuraCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraCharacterBase()
	{
		if (!Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton, Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraCharacterBase>()
	{
		return AAuraCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraCharacterBase);
	AAuraCharacterBase::~AAuraCharacterBase() {}
	struct Z_CompiledInDeferFile_FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraCharacterBase, AAuraCharacterBase::StaticClass, TEXT("AAuraCharacterBase"), &Z_Registration_Info_UClass_AAuraCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraCharacterBase), 1600180207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_1906290058(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura532_Source_Aura_Public_Character_AuraCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
