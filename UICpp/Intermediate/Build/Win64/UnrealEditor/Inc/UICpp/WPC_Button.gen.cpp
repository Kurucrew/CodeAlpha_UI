// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UICpp/Public/WPC_Button.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPC_Button() {}
// Cross Module References
	UICPP_API UClass* Z_Construct_UClass_UWPC_Button_NoRegister();
	UICPP_API UClass* Z_Construct_UClass_UWPC_Button();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UICpp();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWPC_Button::execBindButtonText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->BindButtonText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWPC_Button::execUnhoverDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnhoverDelegate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWPC_Button::execHoverDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoverDelegate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWPC_Button::execChangeBTextColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBTextColor(Z_Param_Color);
		P_NATIVE_END;
	}
	void UWPC_Button::StaticRegisterNativesUWPC_Button()
	{
		UClass* Class = UWPC_Button::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindButtonText", &UWPC_Button::execBindButtonText },
			{ "ChangeBTextColor", &UWPC_Button::execChangeBTextColor },
			{ "HoverDelegate", &UWPC_Button::execHoverDelegate },
			{ "UnhoverDelegate", &UWPC_Button::execUnhoverDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics
	{
		struct WPC_Button_eventBindButtonText_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPC_Button_eventBindButtonText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPC_Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPC_Button, nullptr, "BindButtonText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::WPC_Button_eventBindButtonText_Parms), Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWPC_Button_BindButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPC_Button_BindButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics
	{
		struct WPC_Button_eventChangeBTextColor_Parms
		{
			FLinearColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WPC_Button_eventChangeBTextColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "KButton" },
		{ "ModuleRelativePath", "Public/WPC_Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPC_Button, nullptr, "ChangeBTextColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::WPC_Button_eventChangeBTextColor_Parms), Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWPC_Button_ChangeBTextColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPC_Button_ChangeBTextColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWPC_Button_HoverDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWPC_Button_HoverDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPC_Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPC_Button_HoverDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPC_Button, nullptr, "HoverDelegate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWPC_Button_HoverDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_Button_HoverDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWPC_Button_HoverDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPC_Button_HoverDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWPC_Button_UnhoverDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWPC_Button_UnhoverDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPC_Button.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPC_Button_UnhoverDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPC_Button, nullptr, "UnhoverDelegate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWPC_Button_UnhoverDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPC_Button_UnhoverDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWPC_Button_UnhoverDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPC_Button_UnhoverDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWPC_Button);
	UClass* Z_Construct_UClass_UWPC_Button_NoRegister()
	{
		return UWPC_Button::StaticClass();
	}
	struct Z_Construct_UClass_UWPC_Button_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RetText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWPC_Button_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UICpp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWPC_Button_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWPC_Button_BindButtonText, "BindButtonText" }, // 610653627
		{ &Z_Construct_UFunction_UWPC_Button_ChangeBTextColor, "ChangeBTextColor" }, // 4107699919
		{ &Z_Construct_UFunction_UWPC_Button_HoverDelegate, "HoverDelegate" }, // 893004988
		{ &Z_Construct_UFunction_UWPC_Button_UnhoverDelegate, "UnhoverDelegate" }, // 1895595062
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_Button_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WPC_Button.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WPC_Button.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_Button_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KButton" },
		{ "Comment", "//UMG ?????? ????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPC_Button.h" },
		{ "ToolTip", "UMG ?????? ????" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPC_Button_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_Button, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWPC_Button_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_Button_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_Button_Statics::NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "KButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPC_Button.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPC_Button_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_Button, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWPC_Button_Statics::NewProp_ButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_Button_Statics::NewProp_ButtonText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_Button_Statics::NewProp_RetText_MetaData[] = {
		{ "Category", "KButton" },
		{ "Comment", "//??\xc6\xb0?? ?\xcc\xb8??? ?????\xcf\xb4? ????\n" },
		{ "ModuleRelativePath", "Public/WPC_Button.h" },
		{ "ToolTip", "??\xc6\xb0?? ?\xcc\xb8??? ?????\xcf\xb4? ????" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UWPC_Button_Statics::NewProp_RetText = { "RetText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_Button, RetText), METADATA_PARAMS(Z_Construct_UClass_UWPC_Button_Statics::NewProp_RetText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_Button_Statics::NewProp_RetText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWPC_Button_Statics::NewProp_LColor_MetaData[] = {
		{ "Category", "KButton" },
		{ "Comment", "//??\xc6\xb0 ?\xc3\xbd?\xc6\xae?? ???? ?????? ???? ?\xc3\xb7?\n" },
		{ "ModuleRelativePath", "Public/WPC_Button.h" },
		{ "ToolTip", "??\xc6\xb0 ?\xc3\xbd?\xc6\xae?? ???? ?????? ???? ?\xc3\xb7?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWPC_Button_Statics::NewProp_LColor = { "LColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWPC_Button, LColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWPC_Button_Statics::NewProp_LColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_Button_Statics::NewProp_LColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWPC_Button_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_Button_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_Button_Statics::NewProp_ButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_Button_Statics::NewProp_RetText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPC_Button_Statics::NewProp_LColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWPC_Button_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWPC_Button>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWPC_Button_Statics::ClassParams = {
		&UWPC_Button::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWPC_Button_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_Button_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWPC_Button_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWPC_Button_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWPC_Button()
	{
		if (!Z_Registration_Info_UClass_UWPC_Button.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWPC_Button.OuterSingleton, Z_Construct_UClass_UWPC_Button_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWPC_Button.OuterSingleton;
	}
	template<> UICPP_API UClass* StaticClass<UWPC_Button>()
	{
		return UWPC_Button::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWPC_Button);
	struct Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WPC_Button_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WPC_Button_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWPC_Button, UWPC_Button::StaticClass, TEXT("UWPC_Button"), &Z_Registration_Info_UClass_UWPC_Button, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWPC_Button), 2497654295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WPC_Button_h_2597964760(TEXT("/Script/UICpp"),
		Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WPC_Button_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectA_Plugins_UICpp_Source_UICpp_Public_WPC_Button_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
