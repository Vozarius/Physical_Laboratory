// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsSlate/Public/Style/KantanChartStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanChartStyle() {}
// Cross Module References
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanChartStyle();
	UPackage* Z_Construct_UPackage__Script_KantanChartsSlate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
class UScriptStruct* FKantanChartStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSSLATE_API uint32 Get_Z_Construct_UScriptStruct_FKantanChartStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKantanChartStyle, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("KantanChartStyle"), sizeof(FKantanChartStyle), Get_Z_Construct_UScriptStruct_FKantanChartStyle_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<FKantanChartStyle>()
{
	return FKantanChartStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKantanChartStyle(FKantanChartStyle::StaticStruct, TEXT("/Script/KantanChartsSlate"), TEXT("KantanChartStyle"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanChartStyle
{
	FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanChartStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KantanChartStyle")),new UScriptStruct::TCppStructOps<FKantanChartStyle>);
	}
} ScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanChartStyle;
	struct Z_Construct_UScriptStruct_FKantanChartStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisValueFontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AxisValueFontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisDescriptionFontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AxisDescriptionFontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleFontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TitleFontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChartLineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChartLineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChartLineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChartLineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Background;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanChartStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Style/KantanChartStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKantanChartStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_FontColor_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09""Color used for chart text.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanChartStyle.h" },
		{ "ToolTip", "Color used for chart text." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_FontColor = { "FontColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanChartStyle, FontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_FontColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_FontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_AxisValueFontSize_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09""Font size override for axis values/labels.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanChartStyle.h" },
		{ "ToolTip", "Font size override for axis values/labels." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_AxisValueFontSize = { "AxisValueFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanChartStyle, AxisValueFontSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_AxisValueFontSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_AxisValueFontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_AxisDescriptionFontSize_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09""Font size override for axis titles.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanChartStyle.h" },
		{ "ToolTip", "Font size override for axis titles." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_AxisDescriptionFontSize = { "AxisDescriptionFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanChartStyle, AxisDescriptionFontSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_AxisDescriptionFontSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_AxisDescriptionFontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_TitleFontSize_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09""Font size override for chart title.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanChartStyle.h" },
		{ "ToolTip", "Font size override for chart title." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_TitleFontSize = { "TitleFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanChartStyle, TitleFontSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_TitleFontSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_TitleFontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_BaseFont_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09The default font used for chart text.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanChartStyle.h" },
		{ "ToolTip", "The default font used for chart text." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_BaseFont = { "BaseFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanChartStyle, BaseFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_BaseFont_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_BaseFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_ChartLineThickness_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09Thickness of lines of the chart itself (e.g. axis lines).\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanChartStyle.h" },
		{ "ToolTip", "Thickness of lines of the chart itself (e.g. axis lines)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_ChartLineThickness = { "ChartLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanChartStyle, ChartLineThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_ChartLineThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_ChartLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_ChartLineColor_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09""Color used to draw lines of the chart itself (e.g. axis lines).\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanChartStyle.h" },
		{ "ToolTip", "Color used to draw lines of the chart itself (e.g. axis lines)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_ChartLineColor = { "ChartLineColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanChartStyle, ChartLineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_ChartLineColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_ChartLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09""Chart background brush.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanChartStyle.h" },
		{ "ToolTip", "Chart background brush." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanChartStyle, Background), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_Background_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_Background_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKantanChartStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_FontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_AxisValueFontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_AxisDescriptionFontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_TitleFontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_BaseFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_ChartLineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_ChartLineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanChartStyle_Statics::NewProp_Background,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKantanChartStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"KantanChartStyle",
		sizeof(FKantanChartStyle),
		alignof(FKantanChartStyle),
		Z_Construct_UScriptStruct_FKantanChartStyle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanChartStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKantanChartStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKantanChartStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KantanChartStyle"), sizeof(FKantanChartStyle), Get_Z_Construct_UScriptStruct_FKantanChartStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKantanChartStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKantanChartStyle_Hash() { return 2106422360U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
