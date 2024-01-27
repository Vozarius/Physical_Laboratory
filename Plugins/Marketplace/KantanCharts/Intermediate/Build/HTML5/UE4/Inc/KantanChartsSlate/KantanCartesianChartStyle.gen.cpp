// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsSlate/Public/Style/KantanCartesianChartStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCartesianChartStyle() {}
// Cross Module References
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanCartesianChartStyle();
	UPackage* Z_Construct_UPackage__Script_KantanChartsSlate();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanChartStyle();
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanCartesianChartWidgetStyle_NoRegister();
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanCartesianChartWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References
class UScriptStruct* FKantanCartesianChartStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSSLATE_API uint32 Get_Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKantanCartesianChartStyle, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("KantanCartesianChartStyle"), sizeof(FKantanCartesianChartStyle), Get_Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<FKantanCartesianChartStyle>()
{
	return FKantanCartesianChartStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKantanCartesianChartStyle(FKantanCartesianChartStyle::StaticStruct, TEXT("/Script/KantanChartsSlate"), TEXT("KantanCartesianChartStyle"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanCartesianChartStyle
{
	FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanCartesianChartStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KantanCartesianChartStyle")),new UScriptStruct::TCppStructOps<FKantanCartesianChartStyle>);
	}
} ScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanCartesianChartStyle;
	struct Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataLineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DataLineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DataOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Style/KantanCartesianChartStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKantanCartesianChartStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewProp_DataLineThickness_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09Thickness of plotted lines.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanCartesianChartStyle.h" },
		{ "ToolTip", "Thickness of plotted lines." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewProp_DataLineThickness = { "DataLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanCartesianChartStyle, DataLineThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewProp_DataLineThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewProp_DataLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewProp_DataOpacity_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09Opacity for rendering data points and lines.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanCartesianChartStyle.h" },
		{ "ToolTip", "Opacity for rendering data points and lines." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewProp_DataOpacity = { "DataOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanCartesianChartStyle, DataOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewProp_DataOpacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewProp_DataOpacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewProp_DataLineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::NewProp_DataOpacity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
		Z_Construct_UScriptStruct_FKantanChartStyle,
		&NewStructOps,
		"KantanCartesianChartStyle",
		sizeof(FKantanCartesianChartStyle),
		alignof(FKantanCartesianChartStyle),
		Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKantanCartesianChartStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KantanCartesianChartStyle"), sizeof(FKantanCartesianChartStyle), Get_Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKantanCartesianChartStyle_Hash() { return 443478813U; }
	void UKantanCartesianChartWidgetStyle::StaticRegisterNativesUKantanCartesianChartWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UKantanCartesianChartWidgetStyle_NoRegister()
	{
		return UKantanCartesianChartWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChartStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChartStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Style/KantanCartesianChartStyle.h" },
		{ "ModuleRelativePath", "Public/Style/KantanCartesianChartStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::NewProp_ChartStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Style/KantanCartesianChartStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::NewProp_ChartStyle = { "ChartStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCartesianChartWidgetStyle, ChartStyle), Z_Construct_UScriptStruct_FKantanCartesianChartStyle, METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::NewProp_ChartStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::NewProp_ChartStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::NewProp_ChartStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanCartesianChartWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::ClassParams = {
		&UKantanCartesianChartWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanCartesianChartWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanCartesianChartWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanCartesianChartWidgetStyle, 3678609835);
	template<> KANTANCHARTSSLATE_API UClass* StaticClass<UKantanCartesianChartWidgetStyle>()
	{
		return UKantanCartesianChartWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanCartesianChartWidgetStyle(Z_Construct_UClass_UKantanCartesianChartWidgetStyle, &UKantanCartesianChartWidgetStyle::StaticClass, TEXT("/Script/KantanChartsSlate"), TEXT("UKantanCartesianChartWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanCartesianChartWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
