// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsDatasource/Public/KantanCartesianDatasourceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCartesianDatasourceInterface() {}
// Cross Module References
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanCartesianDatasourceInterface_NoRegister();
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanCartesianDatasourceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_KantanChartsDatasource();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints();
	KANTANCHARTSDATASOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanCartesianDatapoint();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName();
// End Cross Module References
	int32 IKantanCartesianDatasourceInterface::GetNumSeries() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetNumSeries instead.");
		KantanCartesianDatasourceInterface_eventGetNumSeries_Parms Parms;
		return Parms.ReturnValue;
	}
	TArray<FKantanCartesianDatapoint> IKantanCartesianDatasourceInterface::GetSeriesDatapoints(int32 SeriesIdx) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSeriesDatapoints instead.");
		KantanCartesianDatasourceInterface_eventGetSeriesDatapoints_Parms Parms;
		return Parms.ReturnValue;
	}
	FName IKantanCartesianDatasourceInterface::GetSeriesId(int32 CatIdx) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSeriesId instead.");
		KantanCartesianDatasourceInterface_eventGetSeriesId_Parms Parms;
		return Parms.ReturnValue;
	}
	FText IKantanCartesianDatasourceInterface::GetSeriesName(int32 SeriesIdx) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSeriesName instead.");
		KantanCartesianDatasourceInterface_eventGetSeriesName_Parms Parms;
		return Parms.ReturnValue;
	}
	void UKantanCartesianDatasourceInterface::StaticRegisterNativesUKantanCartesianDatasourceInterface()
	{
		UClass* Class = UKantanCartesianDatasourceInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumSeries", &IKantanCartesianDatasourceInterface::execGetNumSeries },
			{ "GetSeriesDatapoints", &IKantanCartesianDatasourceInterface::execGetSeriesDatapoints },
			{ "GetSeriesId", &IKantanCartesianDatasourceInterface::execGetSeriesId },
			{ "GetSeriesName", &IKantanCartesianDatasourceInterface::execGetSeriesName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianDatasourceInterface_eventGetNumSeries_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartesian Datasource" },
		{ "ModuleRelativePath", "Public/KantanCartesianDatasourceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianDatasourceInterface, nullptr, "GetNumSeries", nullptr, nullptr, sizeof(KantanCartesianDatasourceInterface_eventGetNumSeries_Parms), Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeriesIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianDatasourceInterface_eventGetSeriesDatapoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKantanCartesianDatapoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::NewProp_SeriesIdx = { "SeriesIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianDatasourceInterface_eventGetSeriesDatapoints_Parms, SeriesIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::NewProp_SeriesIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartesian Datasource" },
		{ "ModuleRelativePath", "Public/KantanCartesianDatasourceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianDatasourceInterface, nullptr, "GetSeriesDatapoints", nullptr, nullptr, sizeof(KantanCartesianDatasourceInterface_eventGetSeriesDatapoints_Parms), Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CatIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianDatasourceInterface_eventGetSeriesId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::NewProp_CatIdx = { "CatIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianDatasourceInterface_eventGetSeriesId_Parms, CatIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::NewProp_CatIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartesian Datasource" },
		{ "ModuleRelativePath", "Public/KantanCartesianDatasourceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianDatasourceInterface, nullptr, "GetSeriesId", nullptr, nullptr, sizeof(KantanCartesianDatasourceInterface_eventGetSeriesId_Parms), Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeriesIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianDatasourceInterface_eventGetSeriesName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::NewProp_SeriesIdx = { "SeriesIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCartesianDatasourceInterface_eventGetSeriesName_Parms, SeriesIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::NewProp_SeriesIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cartesian Datasource" },
		{ "ModuleRelativePath", "Public/KantanCartesianDatasourceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCartesianDatasourceInterface, nullptr, "GetSeriesName", nullptr, nullptr, sizeof(KantanCartesianDatasourceInterface_eventGetSeriesName_Parms), Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKantanCartesianDatasourceInterface_NoRegister()
	{
		return UKantanCartesianDatasourceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UKantanCartesianDatasourceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanCartesianDatasourceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsDatasource,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKantanCartesianDatasourceInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetNumSeries, "GetNumSeries" }, // 2006584052
		{ &Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesDatapoints, "GetSeriesDatapoints" }, // 498647168
		{ &Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesId, "GetSeriesId" }, // 638778405
		{ &Z_Construct_UFunction_UKantanCartesianDatasourceInterface_GetSeriesName, "GetSeriesName" }, // 3569484921
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianDatasourceInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KantanCartesianDatasourceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanCartesianDatasourceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IKantanCartesianDatasourceInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanCartesianDatasourceInterface_Statics::ClassParams = {
		&UKantanCartesianDatasourceInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianDatasourceInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianDatasourceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanCartesianDatasourceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanCartesianDatasourceInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanCartesianDatasourceInterface, 3827465578);
	template<> KANTANCHARTSDATASOURCE_API UClass* StaticClass<UKantanCartesianDatasourceInterface>()
	{
		return UKantanCartesianDatasourceInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanCartesianDatasourceInterface(Z_Construct_UClass_UKantanCartesianDatasourceInterface, &UKantanCartesianDatasourceInterface::StaticClass, TEXT("/Script/KantanChartsDatasource"), TEXT("UKantanCartesianDatasourceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanCartesianDatasourceInterface);
	static FName NAME_UKantanCartesianDatasourceInterface_GetNumSeries = FName(TEXT("GetNumSeries"));
	int32 IKantanCartesianDatasourceInterface::Execute_GetNumSeries(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKantanCartesianDatasourceInterface::StaticClass()));
		KantanCartesianDatasourceInterface_eventGetNumSeries_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKantanCartesianDatasourceInterface_GetNumSeries);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IKantanCartesianDatasourceInterface*)(O->GetNativeInterfaceAddress(UKantanCartesianDatasourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetNumSeries_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UKantanCartesianDatasourceInterface_GetSeriesDatapoints = FName(TEXT("GetSeriesDatapoints"));
	TArray<FKantanCartesianDatapoint> IKantanCartesianDatasourceInterface::Execute_GetSeriesDatapoints(const UObject* O, int32 SeriesIdx)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKantanCartesianDatasourceInterface::StaticClass()));
		KantanCartesianDatasourceInterface_eventGetSeriesDatapoints_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKantanCartesianDatasourceInterface_GetSeriesDatapoints);
		if (Func)
		{
			Parms.SeriesIdx=SeriesIdx;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IKantanCartesianDatasourceInterface*)(O->GetNativeInterfaceAddress(UKantanCartesianDatasourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSeriesDatapoints_Implementation(SeriesIdx);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UKantanCartesianDatasourceInterface_GetSeriesId = FName(TEXT("GetSeriesId"));
	FName IKantanCartesianDatasourceInterface::Execute_GetSeriesId(const UObject* O, int32 CatIdx)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKantanCartesianDatasourceInterface::StaticClass()));
		KantanCartesianDatasourceInterface_eventGetSeriesId_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKantanCartesianDatasourceInterface_GetSeriesId);
		if (Func)
		{
			Parms.CatIdx=CatIdx;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IKantanCartesianDatasourceInterface*)(O->GetNativeInterfaceAddress(UKantanCartesianDatasourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSeriesId_Implementation(CatIdx);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UKantanCartesianDatasourceInterface_GetSeriesName = FName(TEXT("GetSeriesName"));
	FText IKantanCartesianDatasourceInterface::Execute_GetSeriesName(const UObject* O, int32 SeriesIdx)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKantanCartesianDatasourceInterface::StaticClass()));
		KantanCartesianDatasourceInterface_eventGetSeriesName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKantanCartesianDatasourceInterface_GetSeriesName);
		if (Func)
		{
			Parms.SeriesIdx=SeriesIdx;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IKantanCartesianDatasourceInterface*)(O->GetNativeInterfaceAddress(UKantanCartesianDatasourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSeriesName_Implementation(SeriesIdx);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
