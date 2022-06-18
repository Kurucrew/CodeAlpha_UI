// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UICpp/Public/C_Level.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Level() {}
// Cross Module References
	UICPP_API UClass* Z_Construct_UClass_AC_Level_NoRegister();
	UICPP_API UClass* Z_Construct_UClass_AC_Level();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_UICpp();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC_Level::execIntroPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntroPlay();
		P_NATIVE_END;
	}
	void AC_Level::StaticRegisterNativesAC_Level()
	{
		UClass* Class = AC_Level::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IntroPlay", &AC_Level::execIntroPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_Level_IntroPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Level_IntroPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/C_Level.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Level_IntroPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Level, nullptr, "IntroPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Level_IntroPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Level_IntroPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Level_IntroPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Level_IntroPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_Level);
	UClass* Z_Construct_UClass_AC_Level_NoRegister()
	{
		return AC_Level::StaticClass();
	}
	struct Z_Construct_UClass_AC_Level_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intro_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Intro;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntroLS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroLS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleLS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleLS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Level_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UICpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_Level_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_Level_IntroPlay, "IntroPlay" }, // 1407881312
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Level_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "C_Level.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/C_Level.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Level_Statics::NewProp_Intro_MetaData[] = {
		{ "Category", "KLevel" },
		{ "ModuleRelativePath", "Public/C_Level.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Level_Statics::NewProp_Intro = { "Intro", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Level, Intro), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Level_Statics::NewProp_Intro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Level_Statics::NewProp_Intro_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Level_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "KLevel" },
		{ "ModuleRelativePath", "Public/C_Level.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Level_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Level, Title), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Level_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Level_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Level_Statics::NewProp_IntroLS_MetaData[] = {
		{ "Category", "KLevel" },
		{ "ModuleRelativePath", "Public/C_Level.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Level_Statics::NewProp_IntroLS = { "IntroLS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Level, IntroLS), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Level_Statics::NewProp_IntroLS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Level_Statics::NewProp_IntroLS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Level_Statics::NewProp_TitleLS_MetaData[] = {
		{ "Category", "KLevel" },
		{ "ModuleRelativePath", "Public/C_Level.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Level_Statics::NewProp_TitleLS = { "TitleLS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Level, TitleLS), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Level_Statics::NewProp_TitleLS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Level_Statics::NewProp_TitleLS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Level_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Level_Statics::NewProp_Intro,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Level_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Level_Statics::NewProp_IntroLS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Level_Statics::NewProp_TitleLS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Level_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Level>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_Level_Statics::ClassParams = {
		&AC_Level::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC_Level_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_Level_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_Level_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Level_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Level()
	{
		if (!Z_Registration_Info_UClass_AC_Level.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_Level.OuterSingleton, Z_Construct_UClass_AC_Level_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_Level.OuterSingleton;
	}
	template<> UICPP_API UClass* StaticClass<AC_Level>()
	{
		return AC_Level::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Level);
	struct Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_Level_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_Level_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_Level, AC_Level::StaticClass, TEXT("AC_Level"), &Z_Registration_Info_UClass_AC_Level, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_Level), 3000309545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_Level_h_4040526939(TEXT("/Script/UICpp"),
		Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_Level_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_Level_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
