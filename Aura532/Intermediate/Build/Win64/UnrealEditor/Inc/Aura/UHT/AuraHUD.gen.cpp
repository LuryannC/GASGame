// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/HUD/AuraHUD.h"
#include "Aura/Public/UI/WidgetController/AuraWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraHUD() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraHUD();
	AURA_API UClass* Z_Construct_UClass_AAuraHUD_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(AAuraHUD::execGetOverlayWidgetController)
	{
		P_GET_STRUCT_REF(FWidgetControllerParams,Z_Param_Out_WCParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOverlayWidgetController**)Z_Param__Result=P_THIS->GetOverlayWidgetController(Z_Param_Out_WCParams);
		P_NATIVE_END;
	}
	void AAuraHUD::StaticRegisterNativesAAuraHUD()
	{
		UClass* Class = AAuraHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOverlayWidgetController", &AAuraHUD::execGetOverlayWidgetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics
	{
		struct AuraHUD_eventGetOverlayWidgetController_Parms
		{
			FWidgetControllerParams WCParams;
			UOverlayWidgetController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WCParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WCParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::NewProp_WCParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::NewProp_WCParams = { "WCParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraHUD_eventGetOverlayWidgetController_Parms, WCParams), Z_Construct_UScriptStruct_FWidgetControllerParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::NewProp_WCParams_MetaData), Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::NewProp_WCParams_MetaData) }; // 2159357387
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraHUD_eventGetOverlayWidgetController_Parms, ReturnValue), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::NewProp_WCParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/HUD/AuraHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraHUD, nullptr, "GetOverlayWidgetController", nullptr, nullptr, Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::AuraHUD_eventGetOverlayWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::AuraHUD_eventGetOverlayWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraHUD);
	UClass* Z_Construct_UClass_AAuraHUD_NoRegister()
	{
		return AAuraHUD::StaticClass();
	}
	struct Z_Construct_UClass_AAuraHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayWidgetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidgetControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayWidgetControllerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAuraHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraHUD_GetOverlayWidgetController, "GetOverlayWidgetController" }, // 402606708
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/HUD/AuraHUD.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/AuraHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidget_MetaData[] = {
		{ "Category", "AuraHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/AuraHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidget = { "OverlayWidget", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraHUD, OverlayWidget), Z_Construct_UClass_UAuraUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidget_MetaData), Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetClass_MetaData[] = {
		{ "Category", "AuraHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/AuraHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetClass = { "OverlayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraHUD, OverlayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAuraUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetClass_MetaData), Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/HUD/AuraHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetController = { "OverlayWidgetController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraHUD, OverlayWidgetController), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetController_MetaData), Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData[] = {
		{ "Category", "AuraHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/AuraHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetControllerClass = { "OverlayWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraHUD, OverlayWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData), Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetControllerClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraHUD_Statics::NewProp_OverlayWidgetControllerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraHUD_Statics::ClassParams = {
		&AAuraHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAuraHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraHUD()
	{
		if (!Z_Registration_Info_UClass_AAuraHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraHUD.OuterSingleton, Z_Construct_UClass_AAuraHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraHUD.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraHUD>()
	{
		return AAuraHUD::StaticClass();
	}
	AAuraHUD::AAuraHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraHUD);
	AAuraHUD::~AAuraHUD() {}
	struct Z_CompiledInDeferFile_FID_Repositories_GASGame_Aura532_Source_Aura_Public_UI_HUD_AuraHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repositories_GASGame_Aura532_Source_Aura_Public_UI_HUD_AuraHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraHUD, AAuraHUD::StaticClass, TEXT("AAuraHUD"), &Z_Registration_Info_UClass_AAuraHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraHUD), 3692794122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repositories_GASGame_Aura532_Source_Aura_Public_UI_HUD_AuraHUD_h_3162573354(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Repositories_GASGame_Aura532_Source_Aura_Public_UI_HUD_AuraHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repositories_GASGame_Aura532_Source_Aura_Public_UI_HUD_AuraHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
