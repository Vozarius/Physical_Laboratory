// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KANTANCHARTSSLATE_CartesianAxisConfig_generated_h
#error "CartesianAxisConfig.generated.h already included, missing '#pragma once' in CartesianAxisConfig.h"
#endif
#define KANTANCHARTSSLATE_CartesianAxisConfig_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsSlate_Public_Charts_CartesianAxisConfig_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCartesianAxisConfig_Statics; \
	KANTANCHARTSSLATE_API static class UScriptStruct* StaticStruct();


template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<struct FCartesianAxisConfig>();

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsSlate_Public_Charts_CartesianAxisConfig_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCartesianAxisInstanceConfig_Statics; \
	KANTANCHARTSSLATE_API static class UScriptStruct* StaticStruct();


template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<struct FCartesianAxisInstanceConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsSlate_Public_Charts_CartesianAxisConfig_h


#define FOREACH_ENUM_ECHARTAXISPOSITION(op) \
	op(EChartAxisPosition::LeftBottom) \
	op(EChartAxisPosition::RightTop) \
	op(EChartAxisPosition::Floating) 

enum class EChartAxisPosition : uint8;
template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<EChartAxisPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
