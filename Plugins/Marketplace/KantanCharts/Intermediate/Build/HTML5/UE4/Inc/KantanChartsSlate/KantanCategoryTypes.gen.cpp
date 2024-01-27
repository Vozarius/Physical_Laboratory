// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsSlate/Public/KantanCategoryTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCategoryTypes() {}
// Cross Module References
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanBarValueExtents();
	UPackage* Z_Construct_UPackage__Script_KantanChartsSlate();
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanBarLabelPosition();
	KANTANCHARTSSLATE_API UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanBarChartOrientation();
// End Cross Module References
	static UEnum* EKantanBarValueExtents_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KantanChartsSlate_EKantanBarValueExtents, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("EKantanBarValueExtents"));
		}
		return Singleton;
	}
	template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<EKantanBarValueExtents>()
	{
		return EKantanBarValueExtents_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKantanBarValueExtents(EKantanBarValueExtents_StaticEnum, TEXT("/Script/KantanChartsSlate"), TEXT("EKantanBarValueExtents"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KantanChartsSlate_EKantanBarValueExtents_Hash() { return 1790622393U; }
	UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanBarValueExtents()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKantanBarValueExtents"), 0, Get_Z_Construct_UEnum_KantanChartsSlate_EKantanBarValueExtents_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKantanBarValueExtents::NoValueLines", (int64)EKantanBarValueExtents::NoValueLines },
				{ "EKantanBarValueExtents::ZeroLineOnly", (int64)EKantanBarValueExtents::ZeroLineOnly },
				{ "EKantanBarValueExtents::ZeroAndMaxLines", (int64)EKantanBarValueExtents::ZeroAndMaxLines },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/KantanCategoryTypes.h" },
				{ "NoValueLines.Name", "EKantanBarValueExtents::NoValueLines" },
				{ "ZeroAndMaxLines.Name", "EKantanBarValueExtents::ZeroAndMaxLines" },
				{ "ZeroLineOnly.Name", "EKantanBarValueExtents::ZeroLineOnly" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KantanChartsSlate,
				nullptr,
				"EKantanBarValueExtents",
				"EKantanBarValueExtents",
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
	static UEnum* EKantanBarLabelPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KantanChartsSlate_EKantanBarLabelPosition, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("EKantanBarLabelPosition"));
		}
		return Singleton;
	}
	template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<EKantanBarLabelPosition>()
	{
		return EKantanBarLabelPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKantanBarLabelPosition(EKantanBarLabelPosition_StaticEnum, TEXT("/Script/KantanChartsSlate"), TEXT("EKantanBarLabelPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KantanChartsSlate_EKantanBarLabelPosition_Hash() { return 1214958979U; }
	UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanBarLabelPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKantanBarLabelPosition"), 0, Get_Z_Construct_UEnum_KantanChartsSlate_EKantanBarLabelPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKantanBarLabelPosition::NoLabels", (int64)EKantanBarLabelPosition::NoLabels },
				{ "EKantanBarLabelPosition::Standard", (int64)EKantanBarLabelPosition::Standard },
				{ "EKantanBarLabelPosition::Overlaid", (int64)EKantanBarLabelPosition::Overlaid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/KantanCategoryTypes.h" },
				{ "NoLabels.Name", "EKantanBarLabelPosition::NoLabels" },
				{ "Overlaid.Name", "EKantanBarLabelPosition::Overlaid" },
				{ "Standard.Name", "EKantanBarLabelPosition::Standard" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KantanChartsSlate,
				nullptr,
				"EKantanBarLabelPosition",
				"EKantanBarLabelPosition",
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
	static UEnum* EKantanBarChartOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KantanChartsSlate_EKantanBarChartOrientation, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("EKantanBarChartOrientation"));
		}
		return Singleton;
	}
	template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<EKantanBarChartOrientation>()
	{
		return EKantanBarChartOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKantanBarChartOrientation(EKantanBarChartOrientation_StaticEnum, TEXT("/Script/KantanChartsSlate"), TEXT("EKantanBarChartOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KantanChartsSlate_EKantanBarChartOrientation_Hash() { return 3982232458U; }
	UEnum* Z_Construct_UEnum_KantanChartsSlate_EKantanBarChartOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKantanBarChartOrientation"), 0, Get_Z_Construct_UEnum_KantanChartsSlate_EKantanBarChartOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKantanBarChartOrientation::Vertical", (int64)EKantanBarChartOrientation::Vertical },
				{ "EKantanBarChartOrientation::Horizontal", (int64)EKantanBarChartOrientation::Horizontal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Horizontal.Name", "EKantanBarChartOrientation::Horizontal" },
				{ "ModuleRelativePath", "Public/KantanCategoryTypes.h" },
				{ "Vertical.Name", "EKantanBarChartOrientation::Vertical" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KantanChartsSlate,
				nullptr,
				"EKantanBarChartOrientation",
				"EKantanBarChartOrientation",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
