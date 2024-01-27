// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"



/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Print Copy")
		static int32 MultiplyByTwo(int32 Number);

		UFUNCTION(BlueprintCallable, Category = "Print Copy")
		static int32 MultiplyByThree(int32 Number);

		UFUNCTION(BlueprintCallable, Category = "YourCategory")
		static bool CopyFile(const FString& SourcePath, const FString& DestinationPath);

		UFUNCTION(BlueprintCallable, Category = "YourCategory")
		static TArray<FString> ReadTextFile(FString FilePath);

		UFUNCTION(BlueprintCallable, Category = "YourCategory")
		static TArray<FString> GetAllFilenamesInDirectory(FString FilePath);

		UFUNCTION(BlueprintCallable, Category = "YourCategory")
		static UObject* FindObjectByClass(TArray<UObject*> ObjectArray, UClass* TargetClass);

		UFUNCTION(BlueprintCallable, Category = "YourCategory")
		static FRotator CalculateRotationBetweenPoints(const FVector& PointA, const FVector& PointB);

		UFUNCTION(BlueprintCallable, Category = "Print Copy")
		static TArray<FString> SplitString(const FString& OriginalString, const FString& Delimiter);

};
