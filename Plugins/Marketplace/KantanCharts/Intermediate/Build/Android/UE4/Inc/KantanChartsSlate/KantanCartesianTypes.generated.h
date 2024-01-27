// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KANTANCHARTSSLATE_KantanCartesianTypes_generated_h
#error "KantanCartesianTypes.generated.h already included, missing '#pragma once' in KantanCartesianTypes.h"
#endif
#define KANTANCHARTSSLATE_KantanCartesianTypes_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsSlate_Public_KantanCartesianTypes_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCartesianRangeBound_Statics; \
	KANTANCHARTSSLATE_API static class UScriptStruct* StaticStruct();


template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<struct FCartesianRangeBound>();

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsSlate_Public_KantanCartesianTypes_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKantanCartesianPlotScale_Statics; \
	KANTANCHARTSSLATE_API static class UScriptStruct* StaticStruct();


template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<struct FKantanCartesianPlotScale>();

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsSlate_Public_KantanCartesianTypes_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCartesianAxisRange_Statics; \
	KANTANCHARTSSLATE_API static class UScriptStruct* StaticStruct();


template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<struct FCartesianAxisRange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsSlate_Public_KantanCartesianTypes_h


#define FOREACH_ENUM_EKANTANDATAPOINTSIZE(op) \
	op(EKantanDataPointSize::Small) \
	op(EKantanDataPointSize::Medium) \
	op(EKantanDataPointSize::Large) 
#define FOREACH_ENUM_ECARTESIANRANGEBOUNDTYPE(op) \
	op(ECartesianRangeBoundType::FixedValue) \
	op(ECartesianRangeBoundType::FitToData) \
	op(ECartesianRangeBoundType::FitToDataRounded) 

enum class ECartesianRangeBoundType : uint8;
template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<ECartesianRangeBoundType>();

#define FOREACH_ENUM_ECARTESIANSCALINGTYPE(op) \
	op(ECartesianScalingType::FixedScale) \
	op(ECartesianScalingType::FixedRange) 

enum class ECartesianScalingType : uint8;
template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<ECartesianScalingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
