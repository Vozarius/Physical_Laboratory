// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsUMG/Public/KantanChart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanChart() {}
// Cross Module References
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanChart_NoRegister();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanChart();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_KantanChartsUMG();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanChart_SetChartTitle();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanChart_SetChartTitlePadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanChart_SetMargins();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanChart_SetUpdateTickRate();
// End Cross Module References
	void UKantanChart::StaticRegisterNativesUKantanChart()
	{
		UClass* Class = UKantanChart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetChartTitle", &UKantanChart::execSetChartTitle },
			{ "SetChartTitlePadding", &UKantanChart::execSetChartTitlePadding },
			{ "SetMargins", &UKantanChart::execSetMargins },
			{ "SetUpdateTickRate", &UKantanChart::execSetUpdateTickRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics
	{
		struct KantanChart_eventSetChartTitle_Parms
		{
			FText InTitle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::NewProp_InTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::NewProp_InTitle = { "InTitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanChart_eventSetChartTitle_Parms, InTitle), METADATA_PARAMS(Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::NewProp_InTitle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::NewProp_InTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::NewProp_InTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set chart title.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanChart.h" },
		{ "ToolTip", "Set chart title." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanChart, nullptr, "SetChartTitle", nullptr, nullptr, sizeof(KantanChart_eventSetChartTitle_Parms), Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanChart_SetChartTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanChart_SetChartTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics
	{
		struct KantanChart_eventSetChartTitlePadding_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::NewProp_InPadding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanChart_eventSetChartTitlePadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::NewProp_InPadding_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::NewProp_InPadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set title padding.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanChart.h" },
		{ "ToolTip", "Set title padding." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanChart, nullptr, "SetChartTitlePadding", nullptr, nullptr, sizeof(KantanChart_eventSetChartTitlePadding_Parms), Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanChart_SetChartTitlePadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanChart_SetChartTitlePadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanChart_SetMargins_Statics
	{
		struct KantanChart_eventSetMargins_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChart_SetMargins_Statics::NewProp_InMargins_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanChart_SetMargins_Statics::NewProp_InMargins = { "InMargins", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanChart_eventSetMargins_Parms, InMargins), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UFunction_UKantanChart_SetMargins_Statics::NewProp_InMargins_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetMargins_Statics::NewProp_InMargins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanChart_SetMargins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanChart_SetMargins_Statics::NewProp_InMargins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChart_SetMargins_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set chart margins.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanChart.h" },
		{ "ToolTip", "Set chart margins." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanChart_SetMargins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanChart, nullptr, "SetMargins", nullptr, nullptr, sizeof(KantanChart_eventSetMargins_Parms), Z_Construct_UFunction_UKantanChart_SetMargins_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetMargins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanChart_SetMargins_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetMargins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanChart_SetMargins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanChart_SetMargins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics
	{
		struct KantanChart_eventSetUpdateTickRate_Parms
		{
			float InRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics::NewProp_InRate = { "InRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanChart_eventSetUpdateTickRate_Parms, InRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics::NewProp_InRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set the datasource update period.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanChart.h" },
		{ "ToolTip", "Set the datasource update period." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanChart, nullptr, "SetUpdateTickRate", nullptr, nullptr, sizeof(KantanChart_eventSetUpdateTickRate_Parms), Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanChart_SetUpdateTickRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanChart_SetUpdateTickRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKantanChart_NoRegister()
	{
		return UKantanChart::StaticClass();
	}
	struct Z_Construct_UClass_UKantanChart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDataPreview_MetaData[];
#endif
		static void NewProp_bShowDataPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDataPreview;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateTickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitlePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TitlePadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChartTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ChartTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margins_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Margins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanChart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKantanChart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKantanChart_SetChartTitle, "SetChartTitle" }, // 1405940788
		{ &Z_Construct_UFunction_UKantanChart_SetChartTitlePadding, "SetChartTitlePadding" }, // 1804370555
		{ &Z_Construct_UFunction_UKantanChart_SetMargins, "SetMargins" }, // 695384081
		{ &Z_Construct_UFunction_UKantanChart_SetUpdateTickRate, "SetUpdateTickRate" }, // 1576639868
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChart_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nBase UMG chart class.\nCannot be instantiated itself.\n*/" },
		{ "IncludePath", "KantanChart.h" },
		{ "ModuleRelativePath", "Public/KantanChart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base UMG chart class.\nCannot be instantiated itself." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChart_Statics::NewProp_bShowDataPreview_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/*\n\x09Toggle in-editor display using a preview datasource.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanChart.h" },
		{ "ToolTip", "Toggle in-editor display using a preview datasource." },
	};
#endif
	void Z_Construct_UClass_UKantanChart_Statics::NewProp_bShowDataPreview_SetBit(void* Obj)
	{
		((UKantanChart*)Obj)->bShowDataPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKantanChart_Statics::NewProp_bShowDataPreview = { "bShowDataPreview", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKantanChart), &Z_Construct_UClass_UKantanChart_Statics::NewProp_bShowDataPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKantanChart_Statics::NewProp_bShowDataPreview_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanChart_Statics::NewProp_bShowDataPreview_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChart_Statics::NewProp_UpdateTickRate_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Update period (in seconds) for retrieving data from datasource.\n\x09""A value of 0 will result in the datasource being accessed on every tick.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanChart.h" },
		{ "ToolTip", "Update period (in seconds) for retrieving data from datasource.\nA value of 0 will result in the datasource being accessed on every tick." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKantanChart_Statics::NewProp_UpdateTickRate = { "UpdateTickRate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanChart, UpdateTickRate), METADATA_PARAMS(Z_Construct_UClass_UKantanChart_Statics::NewProp_UpdateTickRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanChart_Statics::NewProp_UpdateTickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChart_Statics::NewProp_TitlePadding_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Padding around the chart title text.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanChart.h" },
		{ "ToolTip", "Padding around the chart title text." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanChart_Statics::NewProp_TitlePadding = { "TitlePadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanChart, TitlePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UKantanChart_Statics::NewProp_TitlePadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanChart_Statics::NewProp_TitlePadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChart_Statics::NewProp_ChartTitle_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Optional title for the chart.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanChart.h" },
		{ "ToolTip", "Optional title for the chart." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKantanChart_Statics::NewProp_ChartTitle = { "ChartTitle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanChart, ChartTitle), METADATA_PARAMS(Z_Construct_UClass_UKantanChart_Statics::NewProp_ChartTitle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanChart_Statics::NewProp_ChartTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanChart_Statics::NewProp_Margins_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09""Defines margins around the chart. The background brush will include these margins, but the chart will be drawn within.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanChart.h" },
		{ "ToolTip", "Defines margins around the chart. The background brush will include these margins, but the chart will be drawn within." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanChart_Statics::NewProp_Margins = { "Margins", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanChart, Margins), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UKantanChart_Statics::NewProp_Margins_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanChart_Statics::NewProp_Margins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanChart_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanChart_Statics::NewProp_bShowDataPreview,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanChart_Statics::NewProp_UpdateTickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanChart_Statics::NewProp_TitlePadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanChart_Statics::NewProp_ChartTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanChart_Statics::NewProp_Margins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanChart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanChart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanChart_Statics::ClassParams = {
		&UKantanChart::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKantanChart_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UKantanChart_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanChart_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanChart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanChart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanChart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanChart, 1622205642);
	template<> KANTANCHARTSUMG_API UClass* StaticClass<UKantanChart>()
	{
		return UKantanChart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanChart(Z_Construct_UClass_UKantanChart, &UKantanChart::StaticClass, TEXT("/Script/KantanChartsUMG"), TEXT("UKantanChart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanChart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
