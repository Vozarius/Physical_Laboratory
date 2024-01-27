// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KANTANCHARTSSLATE_KantanCategoryTypes_generated_h
#error "KantanCategoryTypes.generated.h already included, missing '#pragma once' in KantanCategoryTypes.h"
#endif
#define KANTANCHARTSSLATE_KantanCategoryTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsSlate_Public_KantanCategoryTypes_h


#define FOREACH_ENUM_EKANTANBARVALUEEXTENTS(op) \
	op(EKantanBarValueExtents::NoValueLines) \
	op(EKantanBarValueExtents::ZeroLineOnly) \
	op(EKantanBarValueExtents::ZeroAndMaxLines) 

enum class EKantanBarValueExtents : uint8;
template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<EKantanBarValueExtents>();

#define FOREACH_ENUM_EKANTANBARLABELPOSITION(op) \
	op(EKantanBarLabelPosition::NoLabels) \
	op(EKantanBarLabelPosition::Standard) \
	op(EKantanBarLabelPosition::Overlaid) 

enum class EKantanBarLabelPosition : uint8;
template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<EKantanBarLabelPosition>();

#define FOREACH_ENUM_EKANTANBARCHARTORIENTATION(op) \
	op(EKantanBarChartOrientation::Vertical) \
	op(EKantanBarChartOrientation::Horizontal) 

enum class EKantanBarChartOrientation : uint8;
template<> KANTANCHARTSSLATE_API UEnum* StaticEnum<EKantanBarChartOrientation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
