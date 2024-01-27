// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsUMG/Public/KantanBarChartBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanBarChartBase() {}
// Cross Module References
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanBarChartBase_NoRegister();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanBarChartBase();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCategoryChart();
	UPackage* Z_Construct_UPackage__Script_KantanChartsUMG();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay();
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanBarValueExtents();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition();
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanBarLabelPosition();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetOrientation();
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanBarChartOrientation();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCartesianAxisConfig();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanBarChartStyle();
// End Cross Module References
	void UKantanBarChartBase::StaticRegisterNativesUKantanBarChartBase()
	{
		UClass* Class = UKantanBarChartBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBarToGapRatio", &UKantanBarChartBase::execSetBarToGapRatio },
			{ "SetExtentsDisplay", &UKantanBarChartBase::execSetExtentsDisplay },
			{ "SetLabelPosition", &UKantanBarChartBase::execSetLabelPosition },
			{ "SetMaxBarValue", &UKantanBarChartBase::execSetMaxBarValue },
			{ "SetOrientation", &UKantanBarChartBase::execSetOrientation },
			{ "SetValueAxisConfig", &UKantanBarChartBase::execSetValueAxisConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics
	{
		struct KantanBarChartBase_eventSetBarToGapRatio_Parms
		{
			float InRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics::NewProp_InRatio = { "InRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanBarChartBase_eventSetBarToGapRatio_Parms, InRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics::NewProp_InRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set ratio between bar width and gap between bars.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Set ratio between bar width and gap between bars." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanBarChartBase, nullptr, "SetBarToGapRatio", nullptr, nullptr, sizeof(KantanBarChartBase_eventSetBarToGapRatio_Parms), Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics
	{
		struct KantanBarChartBase_eventSetExtentsDisplay_Parms
		{
			EKantanBarValueExtents InExtents;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InExtents;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InExtents_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::NewProp_InExtents = { "InExtents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanBarChartBase_eventSetExtentsDisplay_Parms, InExtents), Z_Construct_UEnum_KantanChartsSlate_EKantanBarValueExtents, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::NewProp_InExtents_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::NewProp_InExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::NewProp_InExtents_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set which chart extent lines are drawn.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Set which chart extent lines are drawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanBarChartBase, nullptr, "SetExtentsDisplay", nullptr, nullptr, sizeof(KantanBarChartBase_eventSetExtentsDisplay_Parms), Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics
	{
		struct KantanBarChartBase_eventSetLabelPosition_Parms
		{
			EKantanBarLabelPosition InPosition;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPosition_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanBarChartBase_eventSetLabelPosition_Parms, InPosition), Z_Construct_UEnum_KantanChartsSlate_EKantanBarLabelPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::NewProp_InPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::NewProp_InPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::NewProp_InPosition_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set positioning of bar labels.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Set positioning of bar labels." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanBarChartBase, nullptr, "SetLabelPosition", nullptr, nullptr, sizeof(KantanBarChartBase_eventSetLabelPosition_Parms), Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics
	{
		struct KantanBarChartBase_eventSetMaxBarValue_Parms
		{
			float InMaxValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics::NewProp_InMaxValue = { "InMaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanBarChartBase_eventSetMaxBarValue_Parms, InMaxValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics::NewProp_InMaxValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set maximum bar value.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Set maximum bar value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanBarChartBase, nullptr, "SetMaxBarValue", nullptr, nullptr, sizeof(KantanBarChartBase_eventSetMaxBarValue_Parms), Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics
	{
		struct KantanBarChartBase_eventSetOrientation_Parms
		{
			EKantanBarChartOrientation InOrientation;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InOrientation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InOrientation_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::NewProp_InOrientation = { "InOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanBarChartBase_eventSetOrientation_Parms, InOrientation), Z_Construct_UEnum_KantanChartsSlate_EKantanBarChartOrientation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::NewProp_InOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::NewProp_InOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::NewProp_InOrientation_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set chart orientation.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Set chart orientation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanBarChartBase, nullptr, "SetOrientation", nullptr, nullptr, sizeof(KantanBarChartBase_eventSetOrientation_Parms), Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanBarChartBase_SetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics
	{
		struct KantanBarChartBase_eventSetValueAxisConfig_Parms
		{
			FCartesianAxisConfig InCfg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCfg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCfg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::NewProp_InCfg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::NewProp_InCfg = { "InCfg", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanBarChartBase_eventSetValueAxisConfig_Parms, InCfg), Z_Construct_UScriptStruct_FCartesianAxisConfig, METADATA_PARAMS(Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::NewProp_InCfg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::NewProp_InCfg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::NewProp_InCfg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set value axis configuration.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Set value axis configuration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanBarChartBase, nullptr, "SetValueAxisConfig", nullptr, nullptr, sizeof(KantanBarChartBase_eventSetValueAxisConfig_Parms), Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKantanBarChartBase_NoRegister()
	{
		return UKantanBarChartBase::StaticClass();
	}
	struct Z_Construct_UClass_UKantanBarChartBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueAxisCfg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValueAxisCfg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueExtentsDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueExtentsDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueExtentsDisplay_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarToGapRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarToGapRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LabelPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LabelPosition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBarValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBarValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanBarChartBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKantanCategoryChart,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKantanBarChartBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKantanBarChartBase_SetBarToGapRatio, "SetBarToGapRatio" }, // 4054240012
		{ &Z_Construct_UFunction_UKantanBarChartBase_SetExtentsDisplay, "SetExtentsDisplay" }, // 3290723687
		{ &Z_Construct_UFunction_UKantanBarChartBase_SetLabelPosition, "SetLabelPosition" }, // 652180224
		{ &Z_Construct_UFunction_UKantanBarChartBase_SetMaxBarValue, "SetMaxBarValue" }, // 2127344304
		{ &Z_Construct_UFunction_UKantanBarChartBase_SetOrientation, "SetOrientation" }, // 2192904572
		{ &Z_Construct_UFunction_UKantanBarChartBase_SetValueAxisConfig, "SetValueAxisConfig" }, // 2647068756
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanBarChartBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KantanBarChartBase.h" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueAxisCfg_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Value axis configuration.\n\x09*/" },
		{ "DisableFloating", "" },
		{ "DisplayName", "Value Axis" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Value axis configuration." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueAxisCfg = { "ValueAxisCfg", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanBarChartBase, ValueAxisCfg), Z_Construct_UScriptStruct_FCartesianAxisConfig, METADATA_PARAMS(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueAxisCfg_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueAxisCfg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueExtentsDisplay_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Whether to draw lines at the zero and max value positions\n" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Whether to draw lines at the zero and max value positions" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueExtentsDisplay = { "ValueExtentsDisplay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanBarChartBase, ValueExtentsDisplay), Z_Construct_UEnum_KantanChartsSlate_EKantanBarValueExtents, METADATA_PARAMS(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueExtentsDisplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueExtentsDisplay_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueExtentsDisplay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_BarToGapRatio_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Ratio of the thickness of a bar to the thickness of gaps between bars\n" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Ratio of the thickness of a bar to the thickness of gaps between bars" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_BarToGapRatio = { "BarToGapRatio", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanBarChartBase, BarToGapRatio), METADATA_PARAMS(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_BarToGapRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_BarToGapRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_LabelPosition_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Positioning of bar labels\n" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Positioning of bar labels" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_LabelPosition = { "LabelPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanBarChartBase, LabelPosition), Z_Construct_UEnum_KantanChartsSlate_EKantanBarLabelPosition, METADATA_PARAMS(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_LabelPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_LabelPosition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_LabelPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_MaxBarValue_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Fixed maximum value for the bar chart (if 0, bars are normalized against the highest value at the time)\n" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Fixed maximum value for the bar chart (if 0, bars are normalized against the highest value at the time)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_MaxBarValue = { "MaxBarValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanBarChartBase, MaxBarValue), METADATA_PARAMS(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_MaxBarValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_MaxBarValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Chart orientation\n" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Chart orientation" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanBarChartBase, Orientation), Z_Construct_UEnum_KantanChartsSlate_EKantanBarChartOrientation, METADATA_PARAMS(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_Orientation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// Style\n" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/KantanBarChartBase.h" },
		{ "ToolTip", "Style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanBarChartBase, WidgetStyle), Z_Construct_UScriptStruct_FKantanBarChartStyle, METADATA_PARAMS(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanBarChartBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueAxisCfg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueExtentsDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_ValueExtentsDisplay_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_BarToGapRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_LabelPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_LabelPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_MaxBarValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_Orientation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartBase_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanBarChartBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanBarChartBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanBarChartBase_Statics::ClassParams = {
		&UKantanBarChartBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKantanBarChartBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanBarChartBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanBarChartBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanBarChartBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanBarChartBase, 2417086570);
	template<> KANTANCHARTSUMG_API UClass* StaticClass<UKantanBarChartBase>()
	{
		return UKantanBarChartBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanBarChartBase(Z_Construct_UClass_UKantanBarChartBase, &UKantanBarChartBase::StaticClass, TEXT("/Script/KantanChartsUMG"), TEXT("UKantanBarChartBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanBarChartBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
