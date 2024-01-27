// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsDatasource/Public/KantanCartesianDatapoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCartesianDatapoint() {}
// Cross Module References
	KANTANCHARTSDATASOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanCartesianDatapoint();
	UPackage* Z_Construct_UPackage__Script_KantanChartsDatasource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FKantanCartesianDatapoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSDATASOURCE_API uint32 Get_Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKantanCartesianDatapoint, Z_Construct_UPackage__Script_KantanChartsDatasource(), TEXT("KantanCartesianDatapoint"), sizeof(FKantanCartesianDatapoint), Get_Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSDATASOURCE_API UScriptStruct* StaticStruct<FKantanCartesianDatapoint>()
{
	return FKantanCartesianDatapoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKantanCartesianDatapoint(FKantanCartesianDatapoint::StaticStruct, TEXT("/Script/KantanChartsDatasource"), TEXT("KantanCartesianDatapoint"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsDatasource_StaticRegisterNativesFKantanCartesianDatapoint
{
	FScriptStruct_KantanChartsDatasource_StaticRegisterNativesFKantanCartesianDatapoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KantanCartesianDatapoint")),new UScriptStruct::TCppStructOps<FKantanCartesianDatapoint>);
	}
} ScriptStruct_KantanChartsDatasource_StaticRegisterNativesFKantanCartesianDatapoint;
	struct Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coords_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KantanCartesianDatapoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKantanCartesianDatapoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::NewProp_Coords_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/KantanCartesianDatapoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::NewProp_Coords = { "Coords", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanCartesianDatapoint, Coords), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::NewProp_Coords_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::NewProp_Coords_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::NewProp_Coords,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsDatasource,
		nullptr,
		&NewStructOps,
		"KantanCartesianDatapoint",
		sizeof(FKantanCartesianDatapoint),
		alignof(FKantanCartesianDatapoint),
		Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKantanCartesianDatapoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsDatasource();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KantanCartesianDatapoint"), sizeof(FKantanCartesianDatapoint), Get_Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKantanCartesianDatapoint_Hash() { return 2363282669U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
