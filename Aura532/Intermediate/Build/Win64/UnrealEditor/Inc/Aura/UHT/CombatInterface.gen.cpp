// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interactions/CombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UCombatInterface();
	AURA_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(ICombatInterface::execGetCombatSocketLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCombatSocketLocation();
		P_NATIVE_END;
	}
	struct CombatInterface_eventUpdateFacingTarget_Parms
	{
		FVector Target;
	};
	void ICombatInterface::UpdateFacingTarget(FVector const& Target)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateFacingTarget instead.");
	}
	void UCombatInterface::StaticRegisterNativesUCombatInterface()
	{
		UClass* Class = UCombatInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCombatSocketLocation", &ICombatInterface::execGetCombatSocketLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics
	{
		struct CombatInterface_eventGetCombatSocketLocation_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventGetCombatSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactions/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetCombatSocketLocation", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::CombatInterface_eventGetCombatSocketLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::CombatInterface_eventGetCombatSocketLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatInterface_eventUpdateFacingTarget_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::NewProp_Target_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactions/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "UpdateFacingTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::PropPointers), sizeof(CombatInterface_eventUpdateFacingTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(CombatInterface_eventUpdateFacingTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatInterface);
	UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
	{
		return UCombatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCombatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_GetCombatSocketLocation, "GetCombatSocketLocation" }, // 3430259597
		{ &Z_Construct_UFunction_UCombatInterface_UpdateFacingTarget, "UpdateFacingTarget" }, // 2016126147
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interactions/CombatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
		&UCombatInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCombatInterface()
	{
		if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UCombatInterface>()
	{
		return UCombatInterface::StaticClass();
	}
	UCombatInterface::UCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
	UCombatInterface::~UCombatInterface() {}
	static FName NAME_UCombatInterface_UpdateFacingTarget = FName(TEXT("UpdateFacingTarget"));
	void ICombatInterface::Execute_UpdateFacingTarget(UObject* O, FVector const& Target)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCombatInterface::StaticClass()));
		CombatInterface_eventUpdateFacingTarget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCombatInterface_UpdateFacingTarget);
		if (Func)
		{
			Parms.Target=Target;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Aura532_Source_Aura_Public_Interactions_CombatInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura532_Source_Aura_Public_Interactions_CombatInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 2572233819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura532_Source_Aura_Public_Interactions_CombatInterface_h_2090737216(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Aura532_Source_Aura_Public_Interactions_CombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura532_Source_Aura_Public_Interactions_CombatInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
