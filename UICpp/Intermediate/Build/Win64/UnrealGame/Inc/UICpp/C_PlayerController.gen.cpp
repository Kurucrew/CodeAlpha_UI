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
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
// End Cross Module References
	void AC_PlayerController::StaticRegisterNativesAC_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_PlayerController);
	UClass* Z_Construct_UClass_AC_PlayerController_NoRegister()
	{
		return AC_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AC_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LS_Intro_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LS_Intro;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LS_Title_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LS_Title;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UICpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "C_PlayerController.h" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_PlayerController_Statics::NewProp_LS_Intro_MetaData[] = {
		{ "Category", "KControl" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_PlayerController_Statics::NewProp_LS_Intro = { "LS_Intro", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_PlayerController, LS_Intro), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_PlayerController_Statics::NewProp_LS_Intro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_PlayerController_Statics::NewProp_LS_Intro_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_PlayerController_Statics::NewProp_LS_Title_MetaData[] = {
		{ "Category", "KControl" },
		{ "ModuleRelativePath", "Public/C_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_PlayerController_Statics::NewProp_LS_Title = { "LS_Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_PlayerController, LS_Title), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_PlayerController_Statics::NewProp_LS_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_PlayerController_Statics::NewProp_LS_Title_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_PlayerController_Statics::NewProp_LS_Intro,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_PlayerController_Statics::NewProp_LS_Title,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_PlayerController_Statics::ClassParams = {
		&AC_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AC_PlayerController, AC_PlayerController::StaticClass, TEXT("AC_PlayerController"), &Z_Registration_Info_UClass_AC_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_PlayerController), 2631414684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_PlayerController_h_3336125442(TEXT("/Script/UICpp"),
		Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
