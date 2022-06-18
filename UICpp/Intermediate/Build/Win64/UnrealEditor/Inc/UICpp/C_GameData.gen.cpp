// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UICpp/Public/C_GameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_GameData() {}
// Cross Module References
	UICPP_API UClass* Z_Construct_UClass_UC_GameData_NoRegister();
	UICPP_API UClass* Z_Construct_UClass_UC_GameData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_UICpp();
// End Cross Module References
	void UC_GameData::StaticRegisterNativesUC_GameData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_GameData);
	UClass* Z_Construct_UClass_UC_GameData_NoRegister()
	{
		return UC_GameData::StaticClass();
	}
	struct Z_Construct_UClass_UC_GameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Restart_MetaData[];
#endif
		static void NewProp_Restart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Restart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Switch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstStart_MetaData[];
#endif
		static void NewProp_FirstStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_GameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_UICpp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_GameData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "C_GameData.h" },
		{ "ModuleRelativePath", "Public/C_GameData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_Name_Inner = { "Name", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_GameData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "KGameData" },
		{ "ModuleRelativePath", "Public/C_GameData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_GameData, Name), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UC_GameData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_Time_Inner = { "Time", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_GameData_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "KGameData" },
		{ "ModuleRelativePath", "Public/C_GameData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_GameData, Time), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UC_GameData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_GameData_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "KGameData" },
		{ "ModuleRelativePath", "Public/C_GameData.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_GameData, Resolution), METADATA_PARAMS(Z_Construct_UClass_UC_GameData_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_GameData_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "KGameData" },
		{ "ModuleRelativePath", "Public/C_GameData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_GameData, Volume), METADATA_PARAMS(Z_Construct_UClass_UC_GameData_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_GameData_Statics::NewProp_Restart_MetaData[] = {
		{ "Category", "KGameData" },
		{ "ModuleRelativePath", "Public/C_GameData.h" },
	};
#endif
	void Z_Construct_UClass_UC_GameData_Statics::NewProp_Restart_SetBit(void* Obj)
	{
		((UC_GameData*)Obj)->Restart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UC_GameData), &Z_Construct_UClass_UC_GameData_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UC_GameData_Statics::NewProp_Restart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::NewProp_Restart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_GameData_Statics::NewProp_Slot_MetaData[] = {
		{ "Category", "KGameData" },
		{ "ModuleRelativePath", "Public/C_GameData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_GameData, Slot), METADATA_PARAMS(Z_Construct_UClass_UC_GameData_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_GameData_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "KGameData" },
		{ "ModuleRelativePath", "Public/C_GameData.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_GameData, Index), METADATA_PARAMS(Z_Construct_UClass_UC_GameData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_GameData_Statics::NewProp_Switch_MetaData[] = {
		{ "Category", "KGameData" },
		{ "ModuleRelativePath", "Public/C_GameData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_GameData, Switch), METADATA_PARAMS(Z_Construct_UClass_UC_GameData_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::NewProp_Switch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_GameData_Statics::NewProp_FirstStart_MetaData[] = {
		{ "Category", "KGameData" },
		{ "ModuleRelativePath", "Public/C_GameData.h" },
	};
#endif
	void Z_Construct_UClass_UC_GameData_Statics::NewProp_FirstStart_SetBit(void* Obj)
	{
		((UC_GameData*)Obj)->FirstStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UC_GameData_Statics::NewProp_FirstStart = { "FirstStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UC_GameData), &Z_Construct_UClass_UC_GameData_Statics::NewProp_FirstStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UC_GameData_Statics::NewProp_FirstStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::NewProp_FirstStart_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_GameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_Name_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_Time_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_Restart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_Switch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_GameData_Statics::NewProp_FirstStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_GameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_GameData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_GameData_Statics::ClassParams = {
		&UC_GameData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UC_GameData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UC_GameData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UC_GameData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_GameData()
	{
		if (!Z_Registration_Info_UClass_UC_GameData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_GameData.OuterSingleton, Z_Construct_UClass_UC_GameData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UC_GameData.OuterSingleton;
	}
	template<> UICPP_API UClass* StaticClass<UC_GameData>()
	{
		return UC_GameData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_GameData);
	struct Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_GameData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_GameData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UC_GameData, UC_GameData::StaticClass, TEXT("UC_GameData"), &Z_Registration_Info_UClass_UC_GameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_GameData), 3394167264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_GameData_h_205987289(TEXT("/Script/UICpp"),
		Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_GameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_C_GameData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
