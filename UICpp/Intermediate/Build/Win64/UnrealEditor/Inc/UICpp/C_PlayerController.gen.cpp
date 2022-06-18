// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UICpp/Public/C_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_PlayerController() {}
// Cross Module References
	UICPP_API UClass* Z_Construct_UClass_AC_PlayerController_NoRegister();
	UICPP_API UClass* Z_Construct_UClass_AC_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UICpp();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UICPP_API UClass* Z_Construct_UClass_UWC_Intro_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC_PlayerController::execWidgetInit)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->WidgetInit(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_PlayerController::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_PlayerController::execShowMouse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMouse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_PlayerController::execHideMouse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideMouse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_PlayerController::execCloseUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_PlayerController::execOpenUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenUI();
		P_NATIVE_END;
	}
	void AC_PlayerController::StaticRegisterNativesAC_PlayerController()
	{
		UClass* Class = AC_PlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &AC_PlayerController::execBeginPlay },
			{ "CloseUI", &AC_PlayerController::execCloseUI },
			{ "HideMouse", &AC_PlayerController::execHideMouse },
			{ "OpenUI", &AC_PlayerController::execOpenUI },
			{ "ShowMouse", &AC_PlayerController::execShowMouse },
			{ "WidgetInit", &AC_PlayerController::execWidgetInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_PlayerController_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_PlayerController_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_PlayerController_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_PlayerController, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_PlayerController_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_PlayerController_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_PlayerController_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_PlayerController_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_PlayerController_CloseUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_PlayerController_CloseUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "KUICon" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_PlayerController_CloseUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_PlayerController, nullptr, "CloseUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_PlayerController_CloseUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_PlayerController_CloseUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_PlayerController_CloseUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_PlayerController_CloseUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_PlayerController_HideMouse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_PlayerController_HideMouse_Statics::Function_MetaDataParams[] = {
		{ "Category", "KUICon" },
		{ "Comment", "//???\xec\xbd\xba \xc4\xbf???? \xc7\xa5??\n" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
		{ "ToolTip", "???\xec\xbd\xba \xc4\xbf???? \xc7\xa5??" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_PlayerController_HideMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_PlayerController, nullptr, "HideMouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_PlayerController_HideMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_PlayerController_HideMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_PlayerController_HideMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_PlayerController_HideMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_PlayerController_OpenUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_PlayerController_OpenUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "KUICon" },
		{ "Comment", "//UI?? \xc7\xa5??\n" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
		{ "ToolTip", "UI?? \xc7\xa5??" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_PlayerController_OpenUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_PlayerController, nullptr, "OpenUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_PlayerController_OpenUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_PlayerController_OpenUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_PlayerController_OpenUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_PlayerController_OpenUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_PlayerController_ShowMouse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_PlayerController_ShowMouse_Statics::Function_MetaDataParams[] = {
		{ "Category", "KUICon" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_PlayerController_ShowMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_PlayerController, nullptr, "ShowMouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_PlayerController_ShowMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_PlayerController_ShowMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_PlayerController_ShowMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_PlayerController_ShowMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics
	{
		struct C_PlayerController_eventWidgetInit_Parms
		{
			FString path;
			UUserWidget* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_PlayerController_eventWidgetInit_Parms, path), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C_PlayerController_eventWidgetInit_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "KUICon" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_PlayerController, nullptr, "WidgetInit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::C_PlayerController_eventWidgetInit_Parms), Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_PlayerController_WidgetInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_PlayerController_WidgetInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_PlayerController);
	UClass* Z_Construct_UClass_AC_PlayerController_NoRegister()
	{
		return AC_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AC_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntroClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_IntroClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntroRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UICpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_PlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_PlayerController_BeginPlay, "BeginPlay" }, // 335171123
		{ &Z_Construct_UFunction_AC_PlayerController_CloseUI, "CloseUI" }, // 3608417890
		{ &Z_Construct_UFunction_AC_PlayerController_HideMouse, "HideMouse" }, // 2980008665
		{ &Z_Construct_UFunction_AC_PlayerController_OpenUI, "OpenUI" }, // 1227320801
		{ &Z_Construct_UFunction_AC_PlayerController_ShowMouse, "ShowMouse" }, // 3154176325
		{ &Z_Construct_UFunction_AC_PlayerController_WidgetInit, "WidgetInit" }, // 3801543136
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "C_PlayerController.h" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_PlayerController_Statics::NewProp_UIRef_MetaData[] = {
		{ "Category", "KUICon" },
		{ "Comment", "//UI???\xdb\xb7???\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
		{ "ToolTip", "UI???\xdb\xb7???" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_PlayerController_Statics::NewProp_UIRef = { "UIRef", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_PlayerController, UIRef), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_PlayerController_Statics::NewProp_UIRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_PlayerController_Statics::NewProp_UIRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_PlayerController_Statics::NewProp_IntroClass_MetaData[] = {
		{ "Category", "KUICon" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC_PlayerController_Statics::NewProp_IntroClass = { "IntroClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_PlayerController, IntroClass), Z_Construct_UClass_UWC_Intro_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AC_PlayerController_Statics::NewProp_IntroClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_PlayerController_Statics::NewProp_IntroClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_PlayerController_Statics::NewProp_IntroRef_MetaData[] = {
		{ "Category", "KUICon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_PlayerController_Statics::NewProp_IntroRef = { "IntroRef", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_PlayerController, IntroRef), Z_Construct_UClass_UWC_Intro_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_PlayerController_Statics::NewProp_IntroRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_PlayerController_Statics::NewProp_IntroRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_PlayerController_Statics::NewProp_UIRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_PlayerController_Statics::NewProp_IntroClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_PlayerController_Statics::NewProp_IntroRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_PlayerController_Statics::ClassParams = {
		&AC_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_PlayerController()
	{
		if (!Z_Registration_Info_UClass_AC_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_PlayerController.OuterSingleton, Z_Construct_UClass_AC_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_PlayerController.OuterSingleton;
	}
	template<> UICPP_API UClass* StaticClass<AC_PlayerController>()
	{
		return AC_PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_PlayerController);
	struct Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_PlayerController, AC_PlayerController::StaticClass, TEXT("AC_PlayerController"), &Z_Registration_Info_UClass_AC_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_PlayerController), 832278649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_PlayerController_h_2837834899(TEXT("/Script/UICpp"),
		Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
