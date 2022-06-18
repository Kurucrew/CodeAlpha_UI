// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UICpp/Public/WC_Intro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWC_Intro() {}
// Cross Module References
	UICPP_API UClass* Z_Construct_UClass_UWC_Intro_NoRegister();
	UICPP_API UClass* Z_Construct_UClass_UWC_Intro();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UICpp();
	UICPP_API UClass* Z_Construct_UClass_UWPC_Button_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWC_Intro::execBindStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWC_Intro::execSetBT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBT();
		P_NATIVE_END;
	}
	void UWC_Intro::StaticRegisterNativesUWC_Intro()
	{
		UClass* Class = UWC_Intro::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindStart", &UWC_Intro::execBindStart },
			{ "SetBT", &UWC_Intro::execSetBT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWC_Intro_BindStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Intro_BindStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "KIntro" },
		{ "ModuleRelativePath", "Public/WC_Intro.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Intro_BindStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Intro, nullptr, "BindStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWC_Intro_BindStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Intro_BindStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWC_Intro_BindStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Intro_BindStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWC_Intro_SetBT_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWC_Intro_SetBT_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WC_Intro.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWC_Intro_SetBT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWC_Intro, nullptr, "SetBT", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWC_Intro_SetBT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWC_Intro_SetBT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWC_Intro_SetBT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWC_Intro_SetBT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWC_Intro);
	UClass* Z_Construct_UClass_UWC_Intro_NoRegister()
	{
		return UWC_Intro::StaticClass();
	}
	struct Z_Construct_UClass_UWC_Intro_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WP_Button_1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WP_Button_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WP_Button_2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WP_Button_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WP_Button_3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WP_Button_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WP_Button_4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WP_Button_4;
		static const UECodeGen_Private::FTextPropertyParams NewProp_BTextArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BTextArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BTextArr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Loop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intro_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Intro;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWC_Intro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UICpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWC_Intro_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWC_Intro_BindStart, "BindStart" }, // 2503255854
		{ &Z_Construct_UFunction_UWC_Intro_SetBT, "SetBT" }, // 2367061117
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Intro_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WC_Intro.h" },
		{ "ModuleRelativePath", "Public/WC_Intro.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KIntro" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WC_Intro.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_1 = { "WP_Button_1", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWC_Intro, WP_Button_1), Z_Construct_UClass_UWPC_Button_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KIntro" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WC_Intro.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_2 = { "WP_Button_2", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWC_Intro, WP_Button_2), Z_Construct_UClass_UWPC_Button_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KIntro" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WC_Intro.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_3 = { "WP_Button_3", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWC_Intro, WP_Button_3), Z_Construct_UClass_UWPC_Button_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_4_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KIntro" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WC_Intro.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_4 = { "WP_Button_4", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWC_Intro, WP_Button_4), Z_Construct_UClass_UWPC_Button_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_4_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UWC_Intro_Statics::NewProp_BTextArr_Inner = { "BTextArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Intro_Statics::NewProp_BTextArr_MetaData[] = {
		{ "Category", "KIntro" },
		{ "ModuleRelativePath", "Public/WC_Intro.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWC_Intro_Statics::NewProp_BTextArr = { "BTextArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWC_Intro, BTextArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWC_Intro_Statics::NewProp_BTextArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Intro_Statics::NewProp_BTextArr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Intro_Statics::NewProp_Loop_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "KIntro" },
		{ "ModuleRelativePath", "Public/WC_Intro.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWC_Intro_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWC_Intro, Loop), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWC_Intro_Statics::NewProp_Loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Intro_Statics::NewProp_Loop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWC_Intro_Statics::NewProp_Intro_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "KIntro" },
		{ "ModuleRelativePath", "Public/WC_Intro.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWC_Intro_Statics::NewProp_Intro = { "Intro", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWC_Intro, Intro), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWC_Intro_Statics::NewProp_Intro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Intro_Statics::NewProp_Intro_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWC_Intro_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Intro_Statics::NewProp_WP_Button_4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Intro_Statics::NewProp_BTextArr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Intro_Statics::NewProp_BTextArr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Intro_Statics::NewProp_Loop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWC_Intro_Statics::NewProp_Intro,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWC_Intro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWC_Intro>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWC_Intro_Statics::ClassParams = {
		&UWC_Intro::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWC_Intro_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Intro_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWC_Intro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWC_Intro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWC_Intro()
	{
		if (!Z_Registration_Info_UClass_UWC_Intro.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWC_Intro.OuterSingleton, Z_Construct_UClass_UWC_Intro_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWC_Intro.OuterSingleton;
	}
	template<> UICPP_API UClass* StaticClass<UWC_Intro>()
	{
		return UWC_Intro::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWC_Intro);
	struct Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WC_Intro_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WC_Intro_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWC_Intro, UWC_Intro::StaticClass, TEXT("UWC_Intro"), &Z_Registration_Info_UClass_UWC_Intro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWC_Intro), 4034965956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WC_Intro_h_4271097319(TEXT("/Script/UICpp"),
		Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WC_Intro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WC_Intro_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
