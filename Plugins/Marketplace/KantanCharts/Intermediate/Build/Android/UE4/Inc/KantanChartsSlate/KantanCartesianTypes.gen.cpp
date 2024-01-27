// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsSlate/Public/KantanCartesianTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCartesianTypes() {}
// Cross Module References
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanDataPointSize();
	UPackage* Z_Construct_UPackage__Script_KantanChartsSlate();
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_ECartesianRangeBoundType();
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_ECartesianScalingType();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCartesianRangeBound();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanCartesianPlotScale();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCartesianAxisRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* EKantanDataPointSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KantanChartsSlate_EKantanDataPointSize, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("EKantanDataPointSize"));
		}
		return Singleton;
	}
	template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<EKantanDataPointSize::Type>()
	{
		return EKantanDataPointSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKantanDataPointSize(EKantanDataPointSize_StaticEnum, TEXT("/Script/KantanChartsSlate"), TEXT("EKantanDataPointSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KantanChartsSlate_EKantanDataPointSize_Hash() { return 401019824U; }
	UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanDataPointSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKantanDataPointSize"), 0, Get_Z_Construct_UEnum_KantanChartsSlate_EKantanDataPointSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKantanDataPointSize::Small", (int64)EKantanDataPointSize::Small },
				{ "EKantanDataPointSize::Medium", (int64)EKantanDataPointSize::Medium },
				{ "EKantanDataPointSize::Large", (int64)EKantanDataPointSize::Large },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Large.Name", "EKantanDataPointSize::Large" },
				{ "Medium.Name", "EKantanDataPointSize::Medium" },
				{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
				{ "Small.Comment", "// Values correspond to pixel size in the texture\n" },
				{ "Small.Name", "EKantanDataPointSize::Small" },
				{ "Small.ToolTip", "Values correspond to pixel size in the texture" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KantanChartsSlate,
				nullptr,
				"EKantanDataPointSize",
				"EKantanDataPointSize::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECartesianRangeBoundType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KantanChartsSlate_ECartesianRangeBoundType, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("ECartesianRangeBoundType"));
		}
		return Singleton;
	}
	template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<ECartesianRangeBoundType>()
	{
		return ECartesianRangeBoundType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECartesianRangeBoundType(ECartesianRangeBoundType_StaticEnum, TEXT("/Script/KantanChartsSlate"), TEXT("ECartesianRangeBoundType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KantanChartsSlate_ECartesianRangeBoundType_Hash() { return 557356968U; }
	UEnum* Z_Construct_UEnum_KantanChartsSlate_ECartesianRangeBoundType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECartesianRangeBoundType"), 0, Get_Z_Construct_UEnum_KantanChartsSlate_ECartesianRangeBoundType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECartesianRangeBoundType::FixedValue", (int64)ECartesianRangeBoundType::FixedValue },
				{ "ECartesianRangeBoundType::FitToData", (int64)ECartesianRangeBoundType::FitToData },
				{ "ECartesianRangeBoundType::FitToDataRounded", (int64)ECartesianRangeBoundType::FitToDataRounded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FitToData.Name", "ECartesianRangeBoundType::FitToData" },
				{ "FitToDataRounded.Name", "ECartesianRangeBoundType::FitToDataRounded" },
				{ "FixedValue.Name", "ECartesianRangeBoundType::FixedValue" },
				{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KantanChartsSlate,
				nullptr,
				"ECartesianRangeBoundType",
				"ECartesianRangeBoundType",
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
	static UEnum* ECartesianScalingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KantanChartsSlate_ECartesianScalingType, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("ECartesianScalingType"));
		}
		return Singleton;
	}
	template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<ECartesianScalingType>()
	{
		return ECartesianScalingType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECartesianScalingType(ECartesianScalingType_StaticEnum, TEXT("/Script/KantanChartsSlate"), TEXT("ECartesianScalingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KantanChartsSlate_ECartesianScalingType_Hash() { return 1321313527U; }
	UEnum* Z_Construct_UEnum_KantanChartsSlate_ECartesianScalingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECartesianScalingType"), 0, Get_Z_Construct_UEnum_KantanChartsSlate_ECartesianScalingType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECartesianScalingType::FixedScale", (int64)ECartesianScalingType::FixedScale },
				{ "ECartesianScalingType::FixedRange", (int64)ECartesianScalingType::FixedRange },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FixedRange.Comment", "// Scale specified indirectly via min and max values along each axis\n" },
				{ "FixedRange.Name", "ECartesianScalingType::FixedRange" },
				{ "FixedRange.ToolTip", "Scale specified indirectly via min and max values along each axis" },
				{ "FixedScale.Comment", "// Scale specified by fixed multiplier between cartesian space and chart space, along with focal coordinates\n" },
				{ "FixedScale.Name", "ECartesianScalingType::FixedScale" },
				{ "FixedScale.ToolTip", "Scale specified by fixed multiplier between cartesian space and chart space, along with focal coordinates" },
				{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KantanChartsSlate,
				nullptr,
				"ECartesianScalingType",
				"ECartesianScalingType",
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
class UScriptStruct* FCartesianRangeBound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSSLATE_API uint32 Get_Z_Construct_UScriptStruct_FCartesianRangeBound_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCartesianRangeBound, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("CartesianRangeBound"), sizeof(FCartesianRangeBound), Get_Z_Construct_UScriptStruct_FCartesianRangeBound_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<FCartesianRangeBound>()
{
	return FCartesianRangeBound::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCartesianRangeBound(FCartesianRangeBound::StaticStruct, TEXT("/Script/KantanChartsSlate"), TEXT("CartesianRangeBound"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianRangeBound
{
	FScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianRangeBound()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CartesianRangeBound")),new UScriptStruct::TCppStructOps<FCartesianRangeBound>);
	}
} ScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianRangeBound;
	struct Z_Construct_UScriptStruct_FCartesianRangeBound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedBoundValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedBoundValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCartesianRangeBound>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_FixedBoundValue_MetaData[] = {
		{ "Category", "Range" },
		{ "Comment", "// Fixed value for the bound\n" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
		{ "ToolTip", "Fixed value for the bound" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_FixedBoundValue = { "FixedBoundValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianRangeBound, FixedBoundValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_FixedBoundValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_FixedBoundValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Range" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianRangeBound, Type), Z_Construct_UEnum_KantanChartsSlate_ECartesianRangeBoundType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_FixedBoundValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
		nullptr,
		&NewStructOps,
		"CartesianRangeBound",
		sizeof(FCartesianRangeBound),
		alignof(FCartesianRangeBound),
		Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCartesianRangeBound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCartesianRangeBound_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CartesianRangeBound"), sizeof(FCartesianRangeBound), Get_Z_Construct_UScriptStruct_FCartesianRangeBound_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCartesianRangeBound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCartesianRangeBound_Hash() { return 1777298292U; }
class UScriptStruct* FKantanCartesianPlotScale::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSSLATE_API uint32 Get_Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKantanCartesianPlotScale, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("KantanCartesianPlotScale"), sizeof(FKantanCartesianPlotScale), Get_Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<FKantanCartesianPlotScale>()
{
	return FKantanCartesianPlotScale::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKantanCartesianPlotScale(FKantanCartesianPlotScale::StaticStruct, TEXT("/Script/KantanChartsSlate"), TEXT("KantanCartesianPlotScale"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanCartesianPlotScale
{
	FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanCartesianPlotScale()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KantanCartesianPlotScale")),new UScriptStruct::TCppStructOps<FKantanCartesianPlotScale>);
	}
} ScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanCartesianPlotScale;
	struct Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RangeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RangeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocalCoordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocalCoordinates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKantanCartesianPlotScale>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_RangeY_MetaData[] = {
		{ "Category", "Plot" },
		{ "Comment", "// Y-axis range to be plotted\n" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
		{ "ToolTip", "Y-axis range to be plotted" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_RangeY = { "RangeY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanCartesianPlotScale, RangeY), Z_Construct_UScriptStruct_FCartesianAxisRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_RangeY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_RangeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_RangeX_MetaData[] = {
		{ "Category", "Plot" },
		{ "Comment", "/* Fixed cartesian range for each axis */// X-axis range to be plotted\n" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
		{ "ToolTip", "Fixed cartesian range for each axis // X-axis range to be plotted" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_RangeX = { "RangeX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanCartesianPlotScale, RangeX), Z_Construct_UScriptStruct_FCartesianAxisRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_RangeX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_RangeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_FocalCoordinates_MetaData[] = {
		{ "Category", "Plot" },
		{ "Comment", "// Coordinates in cartesian space on which plot should be centered\n" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
		{ "ToolTip", "Coordinates in cartesian space on which plot should be centered" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_FocalCoordinates = { "FocalCoordinates", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanCartesianPlotScale, FocalCoordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_FocalCoordinates_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_FocalCoordinates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Plot" },
		{ "Comment", "/* Fixed scale and focus */// Fixed scale multiplier between widget space and cartesian space\n" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
		{ "ToolTip", "Fixed scale and focus // Fixed scale multiplier between widget space and cartesian space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanCartesianPlotScale, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Plot" },
		{ "Comment", "/*\n\x09@TODO: Ideally this struct's members would all be private and it would just have the below setters plus the\n\x09transform getters. Would then also have getters for the config values of any scaling type, regardless of\n\x09which scaling type was currently set. Problem is, to work out the values for a different scaling type,\n\x09this would need LocalSize to be passed in, and we don't have access to that from the struct's\n\x09""detail customization.\n\n\x09Only way to have struct details update so if you switch scaling type it auto calculates the values based on\n\x09""current plot scale, would be to update all the properties in the struct whenever the setters are called,\n\x09""as well as whenever the local size of the outer cartesian chart changes. So would require integration\n\x09with chart details customization.\n\n\x09Might be better to separate out into multiple types, with the enum in the chart, but still have the issue that\n\x09""chart size is not a persistent value, but only really available in tick/paint, so would need to hack it a bit.\n\n\x09void SetAsScaleAndFocus(FVector2D const& Scale, FVector2D const& Focus);\n\x09void SetAsRange(FCartesianAxisRange const& RangeX, FCartesianAxisRange const& RangeY);\n\x09*/// The scaling type used\n" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
		{ "ToolTip", "@TODO: Ideally this struct's members would all be private and it would just have the below setters plus the\ntransform getters. Would then also have getters for the config values of any scaling type, regardless of\nwhich scaling type was currently set. Problem is, to work out the values for a different scaling type,\nthis would need LocalSize to be passed in, and we don't have access to that from the struct's\ndetail customization.\n\nOnly way to have struct details update so if you switch scaling type it auto calculates the values based on\ncurrent plot scale, would be to update all the properties in the struct whenever the setters are called,\nas well as whenever the local size of the outer cartesian chart changes. So would require integration\nwith chart details customization.\n\nMight be better to separate out into multiple types, with the enum in the chart, but still have the issue that\nchart size is not a persistent value, but only really available in tick/paint, so would need to hack it a bit.\n\nvoid SetAsScaleAndFocus(FVector2D const& Scale, FVector2D const& Focus);\nvoid SetAsRange(FCartesianAxisRange const& RangeX, FCartesianAxisRange const& RangeY);\n// The scaling type used" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanCartesianPlotScale, Type), Z_Construct_UEnum_KantanChartsSlate_ECartesianScalingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_RangeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_RangeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_FocalCoordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
		nullptr,
		&NewStructOps,
		"KantanCartesianPlotScale",
		sizeof(FKantanCartesianPlotScale),
		alignof(FKantanCartesianPlotScale),
		Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKantanCartesianPlotScale()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KantanCartesianPlotScale"), sizeof(FKantanCartesianPlotScale), Get_Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Hash() { return 1744887960U; }
class UScriptStruct* FCartesianAxisRange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSSLATE_API uint32 Get_Z_Construct_UScriptStruct_FCartesianAxisRange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCartesianAxisRange, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("CartesianAxisRange"), sizeof(FCartesianAxisRange), Get_Z_Construct_UScriptStruct_FCartesianAxisRange_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<FCartesianAxisRange>()
{
	return FCartesianAxisRange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCartesianAxisRange(FCartesianAxisRange::StaticStruct, TEXT("/Script/KantanChartsSlate"), TEXT("CartesianAxisRange"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianAxisRange
{
	FScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianAxisRange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CartesianAxisRange")),new UScriptStruct::TCppStructOps<FCartesianAxisRange>);
	}
} ScriptStruct_KantanChartsSlate_StaticRegisterNativesFCartesianAxisRange;
	struct Z_Construct_UScriptStruct_FCartesianAxisRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCartesianAxisRange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianAxisRange, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewProp_Max_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/KantanCartesianTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCartesianAxisRange, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewProp_Min_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::NewProp_Min,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
		nullptr,
		&NewStructOps,
		"CartesianAxisRange",
		sizeof(FCartesianAxisRange),
		alignof(FCartesianAxisRange),
		Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCartesianAxisRange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCartesianAxisRange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CartesianAxisRange"), sizeof(FCartesianAxisRange), Get_Z_Construct_UScriptStruct_FCartesianAxisRange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCartesianAxisRange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCartesianAxisRange_Hash() { return 2791716514U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
