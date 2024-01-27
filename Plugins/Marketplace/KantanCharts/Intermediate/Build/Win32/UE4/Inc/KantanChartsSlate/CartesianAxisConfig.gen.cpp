// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsSlate/Public/Charts/CartesianAxisConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCartesianAxisConfig() {}
// Cross Module References
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_EChartAxisPosition();
	UPackage* Z_Construct_UPackage__Script_KantanChartsSlate();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCartesianAxisConfig();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig();
// End Cross Module References
	static UEnum* EChartAxisPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KantanChartsSlate_EChartAxisPosition, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("EChartAxisPosition"));
		}
		return Singleton;
	}
	template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<EChartAxisPosition>()
	{
		return EChartAxisPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChartAxisPosition(EChartAxisPosition_StaticEnum, TEXT("/Script/KantanChartsSlate"), TEXT("EChartAxisPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KantanChartsSlate_EChartAxisPosition_Hash() { return 3028445384U; }
	UEnum* Z_Construct_UEnum_KantanChartsSlate_EChartAxisPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChartAxisPosition"), 0, Get_Z_Construct_UEnum_KantanChartsSlate_EChartAxisPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChartAxisPosition::LeftBottom", (int64)EChartAxisPosition::LeftBottom },
				{ "EChartAxisPosition::RightTop", (int64)EChartAxisPosition::RightTop },
				{ "EChartAxisPosition::Floating", (int64)EChartAxisPosition::Floating },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Floating.DisplayName", "Floating" },
				{ "Floating.Name", "EChartAxisPosition::Floating" },
				{ "LeftBottom.DisplayName", "Left/Bottom" },
				{ "LeftBottom.Name", "EChartAxisPosition::LeftBottom" },
				{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
				{ "RightTop.DisplayName", "Right/Top" },
				{ "RightTop.Name", "EChartAxisPosition::RightTop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KantanChartsSlate,
				nullptr,
				"EChartAxisPosition",
				"EChartAxisPosition",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCartesianAxisConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSSLATE_API uint32 Get_Z_Construct_UScriptStruct_FCartesianAxisConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCartesianAxisConfig, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("CartesianAxisConfig"), sizeof(FCartesianAxisConfig), Get_Z_Construct_UScriptStruct_FCartesianAxisConfig_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<FCartesianAxisConfig>()
{
	return FCartesianAxisConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCartesianAxisConfig(FCartesianAxisConfig::StaticStruct, TEXT("/Script/KantanChartsSlate"), TEXT("CartesianAxisConfig"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianAxisConfig
{
	FScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianAxisConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CartesianAxisConfig")),new UScriptStruct::TCppStructOps<FCartesianAxisConfig>);
	}
} ScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianAxisConfig;
	struct Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightTopAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightTopAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftBottomAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftBottomAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValueDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxValueDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarkerSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Unit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCartesianAxisConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_FloatingAxis_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_FloatingAxis = { "FloatingAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianAxisConfig, FloatingAxis), Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_FloatingAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_FloatingAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_RightTopAxis_MetaData[] = {
		{ "Category", "Axis" },
		{ "DisplayName", "Right/Top Axis" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_RightTopAxis = { "RightTopAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianAxisConfig, RightTopAxis), Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_RightTopAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_RightTopAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_LeftBottomAxis_MetaData[] = {
		{ "Category", "Axis" },
		{ "DisplayName", "Left/Bottom Axis" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_LeftBottomAxis = { "LeftBottomAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianAxisConfig, LeftBottomAxis), Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_LeftBottomAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_LeftBottomAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_MaxValueDigits_MetaData[] = {
		{ "Category", "Axis" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/*\n\x09Specifies the maximum number of digits which can be displayed on an axis marker.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
		{ "ToolTip", "Specifies the maximum number of digits which can be displayed on an axis marker." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_MaxValueDigits = { "MaxValueDigits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianAxisConfig, MaxValueDigits), METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_MaxValueDigits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_MaxValueDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_MarkerSpacing_MetaData[] = {
		{ "Category", "Axis" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/*\n\x09""Controls the density of markers along the axis.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
		{ "ToolTip", "Controls the density of markers along the axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_MarkerSpacing = { "MarkerSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianAxisConfig, MarkerSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_MarkerSpacing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_MarkerSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_Unit_MetaData[] = {
		{ "Category", "Axis" },
		{ "Comment", "/*\n\x09Optional unit string for the axis.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
		{ "ToolTip", "Optional unit string for the axis." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianAxisConfig, Unit), METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_Unit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_Unit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Axis" },
		{ "Comment", "/*\n\x09""Axis title.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
		{ "ToolTip", "Axis title." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianAxisConfig, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_FloatingAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_RightTopAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_LeftBottomAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_MaxValueDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_MarkerSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_Unit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
		nullptr,
		&NewStructOps,
		"CartesianAxisConfig",
		sizeof(FCartesianAxisConfig),
		alignof(FCartesianAxisConfig),
		Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCartesianAxisConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCartesianAxisConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CartesianAxisConfig"), sizeof(FCartesianAxisConfig), Get_Z_Construct_UScriptStruct_FCartesianAxisConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCartesianAxisConfig_Hash() { return 238662154U; }
class UScriptStruct* FCartesianAxisInstanceConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSSLATE_API uint32 Get_Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("CartesianAxisInstanceConfig"), sizeof(FCartesianAxisInstanceConfig), Get_Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<FCartesianAxisInstanceConfig>()
{
	return FCartesianAxisInstanceConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCartesianAxisInstanceConfig(FCartesianAxisInstanceConfig::StaticStruct, TEXT("/Script/KantanChartsSlate"), TEXT("CartesianAxisInstanceConfig"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianAxisInstanceConfig
{
	FScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianAxisInstanceConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CartesianAxisInstanceConfig")),new UScriptStruct::TCppStructOps<FCartesianAxisInstanceConfig>);
	}
} ScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianAxisInstanceConfig;
	struct Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowLabels_MetaData[];
#endif
		static void NewProp_bShowLabels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLabels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMarkers_MetaData[];
#endif
		static void NewProp_bShowMarkers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMarkers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowTitle_MetaData[];
#endif
		static void NewProp_bShowTitle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCartesianAxisInstanceConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowLabels_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowLabels_SetBit(void* Obj)
	{
		((FCartesianAxisInstanceConfig*)Obj)->bShowLabels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowLabels = { "bShowLabels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCartesianAxisInstanceConfig), &Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowLabels_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowLabels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowLabels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowMarkers_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowMarkers_SetBit(void* Obj)
	{
		((FCartesianAxisInstanceConfig*)Obj)->bShowMarkers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowMarkers = { "bShowMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCartesianAxisInstanceConfig), &Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowMarkers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowMarkers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowMarkers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowTitle_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowTitle_SetBit(void* Obj)
	{
		((FCartesianAxisInstanceConfig*)Obj)->bShowTitle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowTitle = { "bShowTitle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCartesianAxisInstanceConfig), &Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowTitle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowTitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Axis" },
		{ "Comment", "/*\n\x09Is the axis shown?\n\x09*/" },
		{ "ModuleRelativePath", "Public/Charts/CartesianAxisConfig.h" },
		{ "ToolTip", "Is the axis shown?" },
	};
#endif
	void Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FCartesianAxisInstanceConfig*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCartesianAxisInstanceConfig), &Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bShowTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
		nullptr,
		&NewStructOps,
		"CartesianAxisInstanceConfig",
		sizeof(FCartesianAxisInstanceConfig),
		alignof(FCartesianAxisInstanceConfig),
		Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CartesianAxisInstanceConfig"), sizeof(FCartesianAxisInstanceConfig), Get_Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Hash() { return 527291603U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
