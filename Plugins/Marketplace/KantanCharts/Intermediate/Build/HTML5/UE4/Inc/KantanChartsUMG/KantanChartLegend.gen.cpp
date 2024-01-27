// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsUMG/Public/KantanChartLegend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanChartLegend() {}
// Cross Module References
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanChartLegend_NoRegister();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanChartLegend();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_KantanChartsUMG();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanChartLegend_SetBackground();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanChartLegend_SetChart();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCartesianChartBase_NoRegister();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanChartLegend_SetFontSize();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanChartLegend_SetMargins();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding();
// End Cross Module References
	void UKantanChartLegend::StaticRegisterNativesUKantanChartLegend()
	{
		UClass* Class = UKantanChartLegend::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBackground", &UKantanChartLegend::execSetBackground },
			{ "SetChart", &UKantanChartLegend::execSetChart },
			{ "SetFontSize", &UKantanChartLegend::execSetFontSize },
			{ "SetMargins", &UKantanChartLegend::execSetMargins },
			{ "SetSeriesPadding", &UKantanChartLegend::execSetSeriesPadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics
	{
		struct KantanChartLegend_eventSetBackground_Parms
		{
			FSlateBrush InBrush;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanChartLegend_eventSetBackground_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::NewProp_InBrush_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::NewProp_InBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::NewProp_InBrush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set background brush.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
		{ "ToolTip", "Set background brush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanChartLegend, nullptr, "SetBackground", nullptr, nullptr, sizeof(KantanChartLegend_eventSetBackground_Parms), Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanChartLegend_SetBackground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanChartLegend_SetBackground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics
	{
		struct KantanChartLegend_eventSetChart_Parms
		{
			UKantanCartesianChartBase* InChart;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InChart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::NewProp_InChart_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::NewProp_InChart = { "InChart", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanChartLegend_eventSetChart_Parms, InChart), Z_Construct_UClass_UKantanCartesianChartBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::NewProp_InChart_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::NewProp_InChart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::NewProp_InChart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set the chart to associate the legend with.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
		{ "ToolTip", "Set the chart to associate the legend with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanChartLegend, nullptr, "SetChart", nullptr, nullptr, sizeof(KantanChartLegend_eventSetChart_Parms), Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanChartLegend_SetChart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanChartLegend_SetChart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics
	{
		struct KantanChartLegend_eventSetFontSize_Parms
		{
			int32 InFontSize;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InFontSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics::NewProp_InFontSize = { "InFontSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanChartLegend_eventSetFontSize_Parms, InFontSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics::NewProp_InFontSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set legend font.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
		{ "ToolTip", "Set legend font." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanChartLegend, nullptr, "SetFontSize", nullptr, nullptr, sizeof(KantanChartLegend_eventSetFontSize_Parms), Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanChartLegend_SetFontSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanChartLegend_SetFontSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics
	{
		struct KantanChartLegend_eventSetMargins_Parms
		{
			FMargin InMargins;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMargins_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMargins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::NewProp_InMargins_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::NewProp_InMargins = { "InMargins", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanChartLegend_eventSetMargins_Parms, InMargins), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::NewProp_InMargins_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::NewProp_InMargins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::NewProp_InMargins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set legend margins.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
		{ "ToolTip", "Set legend margins." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanChartLegend, nullptr, "SetMargins", nullptr, nullptr, sizeof(KantanChartLegend_eventSetMargins_Parms), Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanChartLegend_SetMargins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanChartLegend_SetMargins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics
	{
		struct KantanChartLegend_eventSetSeriesPadding_Parms
		{
			FMargin InPadding;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::NewProp_InPadding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanChartLegend_eventSetSeriesPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::NewProp_InPadding_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::NewProp_InPadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set series padding.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
		{ "ToolTip", "Set series padding." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanChartLegend, nullptr, "SetSeriesPadding", nullptr, nullptr, sizeof(KantanChartLegend_eventSetSeriesPadding_Parms), Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKantanChartLegend_NoRegister()
	{
		return UKantanChartLegend::StaticClass();
	}
	struct Z_Construct_UClass_UKantanChartLegend_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chart_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Chart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeriesPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SeriesPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margins_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Margins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanChartLegend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKantanChartLegend_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKantanChartLegend_SetBackground, "SetBackground" }, // 2537448160
		{ &Z_Construct_UFunction_UKantanChartLegend_SetChart, "SetChart" }, // 704538102
		{ &Z_Construct_UFunction_UKantanChartLegend_SetFontSize, "SetFontSize" }, // 4196080267
		{ &Z_Construct_UFunction_UKantanChartLegend_SetMargins, "SetMargins" }, // 469982849
		{ &Z_Construct_UFunction_UKantanChartLegend_SetSeriesPadding, "SetSeriesPadding" }, // 2324814382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChartLegend_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nLegend widget for a Cartesian chart/Time series plot.\n*/" },
		{ "DisplayName", "Chart Legend" },
		{ "IncludePath", "KantanChartLegend.h" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Legend widget for a Cartesian chart/Time series plot." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Chart_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Chart = { "Chart", nullptr, (EPropertyFlags)0x001400000008001c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanChartLegend, Chart), Z_Construct_UClass_UKantanCartesianChartBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Chart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Chart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09""Font size to use. If 0, chart font size is used.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
		{ "ToolTip", "Font size to use. If 0, chart font size is used." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanChartLegend, FontSize), METADATA_PARAMS(Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_FontSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_FontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09""Background brush to use.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
		{ "ToolTip", "Background brush to use." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanChartLegend, Background), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Background_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Background_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_SeriesPadding_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Padding size around each series entry.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
		{ "ToolTip", "Padding size around each series entry." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_SeriesPadding = { "SeriesPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanChartLegend, SeriesPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_SeriesPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_SeriesPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Margins_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09""Defines margins around the legend.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanChartLegend.h" },
		{ "ToolTip", "Defines margins around the legend." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Margins = { "Margins", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanChartLegend, Margins), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Margins_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Margins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanChartLegend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Chart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_FontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Background,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_SeriesPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanChartLegend_Statics::NewProp_Margins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanChartLegend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanChartLegend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanChartLegend_Statics::ClassParams = {
		&UKantanChartLegend::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKantanChartLegend_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UKantanChartLegend_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanChartLegend_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanChartLegend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanChartLegend()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanChartLegend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanChartLegend, 2680042420);
	template<> KANTANCHARTSUMG_API UClass* StaticClass<UKantanChartLegend>()
	{
		return UKantanChartLegend::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanChartLegend(Z_Construct_UClass_UKantanChartLegend, &UKantanChartLegend::StaticClass, TEXT("/Script/KantanChartsUMG"), TEXT("UKantanChartLegend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanChartLegend);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
