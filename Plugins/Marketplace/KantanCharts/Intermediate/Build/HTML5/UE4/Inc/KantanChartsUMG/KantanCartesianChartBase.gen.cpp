// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsUMG/Public/KantanCartesianChartBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCartesianChartBase() {}
// Cross Module References
	KANTANCHARTSUMG_API UScriptStruct* Z_Construct_UScriptStruct_FSeriesStyleManualMapping();
	UPackage* Z_Construct_UPackage__Script_KantanChartsUMG();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanSeriesStyle();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCartesianChartBase_NoRegister();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCartesianChartBase();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanChart();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanPointStyle_NoRegister();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize();
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanDataPointSize();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCartesianAxisRange();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCartesianAxisConfig();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig();
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanSeriesStyleSet_NoRegister();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanCartesianPlotScale();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanCartesianChartStyle();
// End Cross Module References
class UScriptStruct* FSeriesStyleManualMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSUMG_API uint32 Get_Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSeriesStyleManualMapping, Z_Construct_UPackage__Script_KantanChartsUMG(), TEXT("SeriesStyleManualMapping"), sizeof(FSeriesStyleManualMapping), Get_Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSUMG_API UScriptStruct* StaticStruct<FSeriesStyleManualMapping>()
{
	return FSeriesStyleManualMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSeriesStyleManualMapping(FSeriesStyleManualMapping::StaticStruct, TEXT("/Script/KantanChartsUMG"), TEXT("SeriesStyleManualMapping"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsUMG_StaticRegisterNativesFSeriesStyleManualMapping
{
	FScriptStruct_KantanChartsUMG_StaticRegisterNativesFSeriesStyleManualMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SeriesStyleManualMapping")),new UScriptStruct::TCppStructOps<FSeriesStyleManualMapping>);
	}
} ScriptStruct_KantanChartsUMG_StaticRegisterNativesFSeriesStyleManualMapping;
	struct Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeriesId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeriesId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\nA mapping from a series id to a series style.\nUsed when we want to specify manually which style a particular series in the datasource should use.\n*/" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "A mapping from a series id to a series style.\nUsed when we want to specify manually which style a particular series in the datasource should use." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSeriesStyleManualMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSeriesStyleManualMapping, Style), Z_Construct_UScriptStruct_FKantanSeriesStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewProp_SeriesId_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewProp_SeriesId = { "SeriesId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSeriesStyleManualMapping, SeriesId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewProp_SeriesId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewProp_SeriesId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::NewProp_SeriesId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
		nullptr,
		&NewStructOps,
		"SeriesStyleManualMapping",
		sizeof(FSeriesStyleManualMapping),
		alignof(FSeriesStyleManualMapping),
		Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSeriesStyleManualMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsUMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SeriesStyleManualMapping"), sizeof(FSeriesStyleManualMapping), Get_Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Hash() { return 341776113U; }
	void UKantanCartesianChartBase::StaticRegisterNativesUKantanCartesianChartBase()
	{
		UClass* Class = UKantanCartesianChartBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSeriesStyleOverride", &UKantanCartesianChartBase::execAddSeriesStyleOverride },
			{ "ConfigureSeries", &UKantanCartesianChartBase::execConfigureSeries },
			{ "EnableSeries", &UKantanCartesianChartBase::execEnableSeries },
			{ "SetAxisTitlePadding", &UKantanCartesianChartBase::execSetAxisTitlePadding },
			{ "SetDataPointSize", &UKantanCartesianChartBase::execSetDataPointSize },
			{ "SetPlotScale", &UKantanCartesianChartBase::execSetPlotScale },
			{ "SetPlotScaleByRange", &UKantanCartesianChartBase::execSetPlotScaleByRange },
			{ "SetXAxisConfig", &UKantanCartesianChartBase::execSetXAxisConfig },
			{ "SetYAxisConfig", &UKantanCartesianChartBase::execSetYAxisConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics
	{
		struct KantanCartesianChartBase_eventAddSeriesStyleOverride_Parms
		{
			FName SeriesId;
			UKantanPointStyle* PointStyle;
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointStyle;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeriesId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventAddSeriesStyleOverride_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::NewProp_PointStyle = { "PointStyle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventAddSeriesStyleOverride_Parms, PointStyle), Z_Construct_UClass_UKantanPointStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::NewProp_SeriesId = { "SeriesId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventAddSeriesStyleOverride_Parms, SeriesId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::NewProp_PointStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::NewProp_SeriesId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Series Styles" },
		{ "Comment", "/*\n\x09Set up a manual series style for the given series id. Manual styles will take precedence over\n\x09""default and auto styles.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Set up a manual series style for the given series id. Manual styles will take precedence over\ndefault and auto styles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianChartBase, nullptr, "AddSeriesStyleOverride", nullptr, nullptr, sizeof(KantanCartesianChartBase_eventAddSeriesStyleOverride_Parms), Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics
	{
		struct KantanCartesianChartBase_eventConfigureSeries_Parms
		{
			FName Id;
			bool bDrawPoints;
			bool bDrawLines;
		};
		static void NewProp_bDrawLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawLines;
		static void NewProp_bDrawPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawPoints;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::NewProp_bDrawLines_SetBit(void* Obj)
	{
		((KantanCartesianChartBase_eventConfigureSeries_Parms*)Obj)->bDrawLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::NewProp_bDrawLines = { "bDrawLines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KantanCartesianChartBase_eventConfigureSeries_Parms), &Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::NewProp_bDrawLines_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::NewProp_bDrawPoints_SetBit(void* Obj)
	{
		((KantanCartesianChartBase_eventConfigureSeries_Parms*)Obj)->bDrawPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::NewProp_bDrawPoints = { "bDrawPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KantanCartesianChartBase_eventConfigureSeries_Parms), &Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::NewProp_bDrawPoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventConfigureSeries_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::NewProp_bDrawLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::NewProp_bDrawPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Series" },
		{ "Comment", "/*\n\x09""Configure whether points and/or lines should be drawn for the given series.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Configure whether points and/or lines should be drawn for the given series." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianChartBase, nullptr, "ConfigureSeries", nullptr, nullptr, sizeof(KantanCartesianChartBase_eventConfigureSeries_Parms), Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics
	{
		struct KantanCartesianChartBase_eventEnableSeries_Parms
		{
			FName Id;
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((KantanCartesianChartBase_eventEnableSeries_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KantanCartesianChartBase_eventEnableSeries_Parms), &Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventEnableSeries_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Series" },
		{ "Comment", "/*\n\x09""Enable/disable series by ID.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Enable/disable series by ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianChartBase, nullptr, "EnableSeries", nullptr, nullptr, sizeof(KantanCartesianChartBase_eventEnableSeries_Parms), Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics
	{
		struct KantanCartesianChartBase_eventSetAxisTitlePadding_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::NewProp_InPadding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventSetAxisTitlePadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::NewProp_InPadding_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::NewProp_InPadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set padding around axis titles.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Set padding around axis titles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianChartBase, nullptr, "SetAxisTitlePadding", nullptr, nullptr, sizeof(KantanCartesianChartBase_eventSetAxisTitlePadding_Parms), Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics
	{
		struct KantanCartesianChartBase_eventSetDataPointSize_Parms
		{
			TEnumAsByte<EKantanDataPointSize::Type> InSize;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventSetDataPointSize_Parms, InSize), Z_Construct_UEnum_KantanChartsSlate_EKantanDataPointSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics::NewProp_InSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set data point size, in pixels.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Set data point size, in pixels." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianChartBase, nullptr, "SetDataPointSize", nullptr, nullptr, sizeof(KantanCartesianChartBase_eventSetDataPointSize_Parms), Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics
	{
		struct KantanCartesianChartBase_eventSetPlotScale_Parms
		{
			FVector2D InScale;
			FVector2D InFocalCoords;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFocalCoords_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFocalCoords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::NewProp_InFocalCoords_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::NewProp_InFocalCoords = { "InFocalCoords", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventSetPlotScale_Parms, InFocalCoords), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::NewProp_InFocalCoords_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::NewProp_InFocalCoords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::NewProp_InScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventSetPlotScale_Parms, InScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::NewProp_InScale_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::NewProp_InScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::NewProp_InFocalCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::NewProp_InScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set plot scale with a direct scale value plus focal coordinates in cartesian space.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Set plot scale with a direct scale value plus focal coordinates in cartesian space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianChartBase, nullptr, "SetPlotScale", nullptr, nullptr, sizeof(KantanCartesianChartBase_eventSetPlotScale_Parms), Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics
	{
		struct KantanCartesianChartBase_eventSetPlotScaleByRange_Parms
		{
			FCartesianAxisRange InRangeX;
			FCartesianAxisRange InRangeY;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRangeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRangeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRangeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRangeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::NewProp_InRangeY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::NewProp_InRangeY = { "InRangeY", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventSetPlotScaleByRange_Parms, InRangeY), Z_Construct_UScriptStruct_FCartesianAxisRange, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::NewProp_InRangeY_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::NewProp_InRangeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::NewProp_InRangeX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::NewProp_InRangeX = { "InRangeX", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventSetPlotScaleByRange_Parms, InRangeX), Z_Construct_UScriptStruct_FCartesianAxisRange, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::NewProp_InRangeX_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::NewProp_InRangeX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::NewProp_InRangeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::NewProp_InRangeX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set plot scale using display ranges for each axis.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Set plot scale using display ranges for each axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianChartBase, nullptr, "SetPlotScaleByRange", nullptr, nullptr, sizeof(KantanCartesianChartBase_eventSetPlotScaleByRange_Parms), Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics
	{
		struct KantanCartesianChartBase_eventSetXAxisConfig_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::NewProp_InCfg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::NewProp_InCfg = { "InCfg", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventSetXAxisConfig_Parms, InCfg), Z_Construct_UScriptStruct_FCartesianAxisConfig, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::NewProp_InCfg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::NewProp_InCfg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::NewProp_InCfg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set X axis configuration.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Set X axis configuration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianChartBase, nullptr, "SetXAxisConfig", nullptr, nullptr, sizeof(KantanCartesianChartBase_eventSetXAxisConfig_Parms), Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics
	{
		struct KantanCartesianChartBase_eventSetYAxisConfig_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::NewProp_InCfg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::NewProp_InCfg = { "InCfg", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianChartBase_eventSetYAxisConfig_Parms, InCfg), Z_Construct_UScriptStruct_FCartesianAxisConfig, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::NewProp_InCfg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::NewProp_InCfg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::NewProp_InCfg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Set Y axis configuration.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Set Y axis configuration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianChartBase, nullptr, "SetYAxisConfig", nullptr, nullptr, sizeof(KantanCartesianChartBase_eventSetYAxisConfig_Parms), Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKantanCartesianChartBase_NoRegister()
	{
		return UKantanCartesianChartBase::StaticClass();
	}
	struct Z_Construct_UClass_UKantanCartesianChartBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAntialias_MetaData[];
#endif
		static void NewProp_bAntialias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAntialias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualStyleMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManualStyleMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManualStyleMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeriesStyleSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeriesStyleSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisTitlePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisTitlePadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxisCfg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YAxisCfg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxisCfg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XAxisCfg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataPointSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataPointSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlotScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlotScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanCartesianChartBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKantanChart,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKantanCartesianChartBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKantanCartesianChartBase_AddSeriesStyleOverride, "AddSeriesStyleOverride" }, // 578488707
		{ &Z_Construct_UFunction_UKantanCartesianChartBase_ConfigureSeries, "ConfigureSeries" }, // 2479566290
		{ &Z_Construct_UFunction_UKantanCartesianChartBase_EnableSeries, "EnableSeries" }, // 1246695392
		{ &Z_Construct_UFunction_UKantanCartesianChartBase_SetAxisTitlePadding, "SetAxisTitlePadding" }, // 4229127182
		{ &Z_Construct_UFunction_UKantanCartesianChartBase_SetDataPointSize, "SetDataPointSize" }, // 861291779
		{ &Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScale, "SetPlotScale" }, // 3467954246
		{ &Z_Construct_UFunction_UKantanCartesianChartBase_SetPlotScaleByRange, "SetPlotScaleByRange" }, // 2872717791
		{ &Z_Construct_UFunction_UKantanCartesianChartBase_SetXAxisConfig, "SetXAxisConfig" }, // 1602232810
		{ &Z_Construct_UFunction_UKantanCartesianChartBase_SetYAxisConfig, "SetYAxisConfig" }, // 164241483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nBase class implementation of UMG cartesian chart.\n*/" },
		{ "HideCategories", "Preview" },
		{ "IncludePath", "KantanCartesianChartBase.h" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class implementation of UMG cartesian chart." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_bAntialias_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Whether to enable antialiasing on chart data lines.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Whether to enable antialiasing on chart data lines." },
	};
#endif
	void Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_bAntialias_SetBit(void* Obj)
	{
		((UKantanCartesianChartBase*)Obj)->bAntialias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_bAntialias = { "bAntialias", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKantanCartesianChartBase), &Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_bAntialias_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_bAntialias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_bAntialias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_ManualStyleMappings_MetaData[] = {
		{ "Category", "Series Styles" },
		{ "Comment", "/*\n\x09Provides an override to allow specifying a particular style to be assigned to a series with a given ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Provides an override to allow specifying a particular style to be assigned to a series with a given ID." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_ManualStyleMappings = { "ManualStyleMappings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCartesianChartBase, ManualStyleMappings), METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_ManualStyleMappings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_ManualStyleMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_ManualStyleMappings_Inner = { "ManualStyleMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSeriesStyleManualMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_SeriesStyleSet_MetaData[] = {
		{ "Category", "Series Styles" },
		{ "Comment", "/*\n\x09The style set which defines the various visual styles available to draw series.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "The style set which defines the various visual styles available to draw series." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_SeriesStyleSet = { "SeriesStyleSet", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCartesianChartBase, SeriesStyleSet), Z_Construct_UClass_UKantanSeriesStyleSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_SeriesStyleSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_SeriesStyleSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_AxisTitlePadding_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Padding around axis titles.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Padding around axis titles." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_AxisTitlePadding = { "AxisTitlePadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCartesianChartBase, AxisTitlePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_AxisTitlePadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_AxisTitlePadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_YAxisCfg_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Y axis configuration.\n\x09*/" },
		{ "ConfigAxisType", "Y" },
		{ "DisplayName", "Y Axis" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Y axis configuration." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_YAxisCfg = { "YAxisCfg", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCartesianChartBase, YAxisCfg), Z_Construct_UScriptStruct_FCartesianAxisConfig, METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_YAxisCfg_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_YAxisCfg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_XAxisCfg_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09X axis configuration.\n\x09*/" },
		{ "ConfigAxisType", "X" },
		{ "DisplayName", "X Axis" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "X axis configuration." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_XAxisCfg = { "XAxisCfg", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCartesianChartBase, XAxisCfg), Z_Construct_UScriptStruct_FCartesianAxisConfig, METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_XAxisCfg_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_XAxisCfg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_DataPointSize_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09""Datapoints are drawn at fixed pixel sizes to maintain consistency and avoid scaling artefacts.\n\x09This allows the desired size to be configured.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Datapoints are drawn at fixed pixel sizes to maintain consistency and avoid scaling artefacts.\nThis allows the desired size to be configured." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_DataPointSize = { "DataPointSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCartesianChartBase, DataPointSize), Z_Construct_UEnum_KantanChartsSlate_EKantanDataPointSize, METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_DataPointSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_DataPointSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_PlotScale_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09""Defines the region of cartesian space which is drawn.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Defines the region of cartesian space which is drawn." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_PlotScale = { "PlotScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCartesianChartBase, PlotScale), Z_Construct_UScriptStruct_FKantanCartesianPlotScale, METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_PlotScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_PlotScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// Style\n" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/KantanCartesianChartBase.h" },
		{ "ToolTip", "Style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCartesianChartBase, WidgetStyle), Z_Construct_UScriptStruct_FKantanCartesianChartStyle, METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanCartesianChartBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_bAntialias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_ManualStyleMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_ManualStyleMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_SeriesStyleSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_AxisTitlePadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_YAxisCfg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_XAxisCfg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_DataPointSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_PlotScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartBase_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanCartesianChartBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanCartesianChartBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanCartesianChartBase_Statics::ClassParams = {
		&UKantanCartesianChartBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKantanCartesianChartBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanCartesianChartBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanCartesianChartBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanCartesianChartBase, 2986106475);
	template<> KANTANCHARTSUMG_API UClass* StaticClass<UKantanCartesianChartBase>()
	{
		return UKantanCartesianChartBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanCartesianChartBase(Z_Construct_UClass_UKantanCartesianChartBase, &UKantanCartesianChartBase::StaticClass, TEXT("/Script/KantanChartsUMG"), TEXT("UKantanCartesianChartBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanCartesianChartBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
