// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UICpp/Public/WPC_HitPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPC_HitPoint() {}
// Cross Module References
	UICPP_API UClass* Z_Construct_UClass_UWPC_HitPoint_NoRegister();
	UICPP_API UClass* Z_Construct_UClass_UWPC_HitPoint();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UICpp();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWPC_HitPoint::execEnergyFillChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnergyFillChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWPC_HitPoint::execHPFillChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HPFillChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWPC_HitPoint::execHitDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWPC_HitPoint::execHitLAM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitLAM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWPC_HitPoint::execBindHPNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->BindHPNow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWPC_HitPoint::execBindHPMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->BindHPMax();
		P_NATIVE_END;
	}
	void UWPC_HitPoint::StaticRegisterNativesUWPC_HitPoint()
	{
		UClass* Class = UWPC_HitPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindHPMax", &UWPC_HitPoint::execBindHPMax },
			{ "BindHPNow", &UWPC_HitPoint::execBindHPNow },
			{ "EnergyFillChange", &UWPC_HitPoint::execEnergyFillChange },
			{ "HitDelay", &UWPC_HitPoint::execHitDelay },
			{ "HitLAM", &UWPC_HitPoint::execHitLAM },
			{ "HPFillChange", &UWPC_HitPoint::execHPFillChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics
	{
		struct WPC_HitPoint_eventBindHPMax_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPC_HitPoint_eventBindHPMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xc3\xbc?? ?????? HUD?? ?\xd8\xbd?\xc6\xae ???? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
		{ "ToolTip", "\xc3\xbc?? ?????? HUD?? ?\xd8\xbd?\xc6\xae ???? ?\xd4\xbc?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPC_HitPoint, nullptr, "BindHPMax", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::WPC_HitPoint_eventBindHPMax_Parms), Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWPC_HitPoint_BindHPMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPC_HitPoint_BindHPMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics
	{
		struct WPC_HitPoint_eventBindHPNow_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPC_HitPoint_eventBindHPNow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPC_HitPoint, nullptr, "BindHPNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::WPC_HitPoint_eventBindHPNow_Parms), Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWPC_HitPoint_BindHPNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPC_HitPoint_BindHPNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWPC_HitPoint_EnergyFillChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWPC_HitPoint_EnergyFillChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "KButton" },
		{ "Comment", "//???????? ???\xd2\xb6? \xc8\xa3????\n" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
		{ "ToolTip", "???????? ???\xd2\xb6? \xc8\xa3????" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPC_HitPoint_EnergyFillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPC_HitPoint, nullptr, "EnergyFillChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWPC_HitPoint_EnergyFillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_HitPoint_EnergyFillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWPC_HitPoint_EnergyFillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPC_HitPoint_EnergyFillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWPC_HitPoint_HitDelay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWPC_HitPoint_HitDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPC_HitPoint_HitDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPC_HitPoint, nullptr, "HitDelay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWPC_HitPoint_HitDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_HitPoint_HitDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWPC_HitPoint_HitDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPC_HitPoint_HitDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWPC_HitPoint_HitLAM_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWPC_HitPoint_HitLAM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPC_HitPoint_HitLAM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPC_HitPoint, nullptr, "HitLAM", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWPC_HitPoint_HitLAM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_HitPoint_HitLAM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWPC_HitPoint_HitLAM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPC_HitPoint_HitLAM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics
	{
		struct WPC_HitPoint_eventHPFillChange_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WPC_HitPoint_eventHPFillChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WPC_HitPoint_eventHPFillChange_Parms), &Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "KButton" },
		{ "Comment", "//\xc3\xbc???? ???\xd2\xb6? \xc8\xa3????\n" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
		{ "ToolTip", "\xc3\xbc???? ???\xd2\xb6? \xc8\xa3????" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPC_HitPoint, nullptr, "HPFillChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::WPC_HitPoint_eventHPFillChange_Parms), Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWPC_HitPoint_HPFillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPC_HitPoint_HPFillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWPC_HitPoint);
	UClass* Z_Construct_UClass_UWPC_HitPoint_NoRegister()
	{
		return UWPC_HitPoint::StaticClass();
	}
	struct Z_Construct_UClass_UWPC_HitPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillBack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FillBack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillFront_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FillFront;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FillEnergy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPMax_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HPMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPNow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HPNow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HMaxVal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HMaxVal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HNowVal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HNowVal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HOldVal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HOldVal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMaxVal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EMaxVal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ENowVal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ENowVal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static void NewProp_Hit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWPC_HitPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UICpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWPC_HitPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWPC_HitPoint_BindHPMax, "BindHPMax" }, // 3039060035
		{ &Z_Construct_UFunction_UWPC_HitPoint_BindHPNow, "BindHPNow" }, // 497457838
		{ &Z_Construct_UFunction_UWPC_HitPoint_EnergyFillChange, "EnergyFillChange" }, // 2633665333
		{ &Z_Construct_UFunction_UWPC_HitPoint_HitDelay, "HitDelay" }, // 3424063077
		{ &Z_Construct_UFunction_UWPC_HitPoint_HitLAM, "HitLAM" }, // 4202926469
		{ &Z_Construct_UFunction_UWPC_HitPoint_HPFillChange, "HPFillChange" }, // 18333604
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WPC_HitPoint.h" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillBack_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KHitPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillBack = { "FillBack", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, FillBack), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillBack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillFront_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KHitPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillFront = { "FillFront", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, FillFront), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillFront_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillEnergy_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KHitPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillEnergy = { "FillEnergy", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, FillEnergy), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillEnergy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HPMax_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KHitPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HPMax = { "HPMax", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, HPMax), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HPMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HPNow_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KHitPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HPNow = { "HPNow", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, HPNow), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HPNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HPNow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HP_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "KHitPoint" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, HP), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HMaxVal_MetaData[] = {
		{ "Category", "KHitPoint" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HMaxVal = { "HMaxVal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, HMaxVal), METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HMaxVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HMaxVal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HNowVal_MetaData[] = {
		{ "Category", "KHitPoint" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HNowVal = { "HNowVal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, HNowVal), METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HNowVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HNowVal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HOldVal_MetaData[] = {
		{ "Category", "KHitPoint" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HOldVal = { "HOldVal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, HOldVal), METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HOldVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HOldVal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_EMaxVal_MetaData[] = {
		{ "Category", "KHitPoint" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_EMaxVal = { "EMaxVal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, EMaxVal), METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_EMaxVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_EMaxVal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_ENowVal_MetaData[] = {
		{ "Category", "KHitPoint" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_ENowVal = { "ENowVal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_HitPoint, ENowVal), METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_ENowVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_ENowVal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_Hit_MetaData[] = {
		{ "Category", "KHitPoint" },
		{ "ModuleRelativePath", "Public/WPC_HitPoint.h" },
	};
#endif
	void Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_Hit_SetBit(void* Obj)
	{
		((UWPC_HitPoint*)Obj)->Hit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWPC_HitPoint), &Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_Hit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_Hit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWPC_HitPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillBack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillFront,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_FillEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HPMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HPNow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HMaxVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HNowVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_HOldVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_EMaxVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_ENowVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_HitPoint_Statics::NewProp_Hit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWPC_HitPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWPC_HitPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWPC_HitPoint_Statics::ClassParams = {
		&UWPC_HitPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWPC_HitPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWPC_HitPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_HitPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWPC_HitPoint()
	{
		if (!Z_Registration_Info_UClass_UWPC_HitPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWPC_HitPoint.OuterSingleton, Z_Construct_UClass_UWPC_HitPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWPC_HitPoint.OuterSingleton;
	}
	template<> UICPP_API UClass* StaticClass<UWPC_HitPoint>()
	{
		return UWPC_HitPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWPC_HitPoint);
	struct Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WPC_HitPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WPC_HitPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWPC_HitPoint, UWPC_HitPoint::StaticClass, TEXT("UWPC_HitPoint"), &Z_Registration_Info_UClass_UWPC_HitPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWPC_HitPoint), 4042616595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WPC_HitPoint_h_617595702(TEXT("/Script/UICpp"),
		Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WPC_HitPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WPC_HitPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
