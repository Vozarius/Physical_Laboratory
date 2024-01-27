// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "GenericPlatformFile.h"
#include "PlatformFilemanager.h"
#include "FileHelper.h"
#include "Engine/EngineTypes.h"
#include "Math/Vector.h"
#include "Math/UnrealMathUtility.h"

int32 UMyBlueprintFunctionLibrary::MultiplyByTwo(int32 Number)
{
	return Number * 2;
}


int32 UMyBlueprintFunctionLibrary::MultiplyByThree(int32 Number)
{
	return Number * 3;
}


bool UMyBlueprintFunctionLibrary::CopyFile(const FString& SourcePath, const FString& DestinationPath)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	FString FullSourcePath = SourcePath;
	FString FullDestinationPath = DestinationPath;

	if (PlatformFile.FileExists(*FullSourcePath))
	{
		if (PlatformFile.CopyFile(*FullDestinationPath, *FullSourcePath))
		{
			UE_LOG(LogTemp, Log, TEXT("Success"), *FullSourcePath, *FullDestinationPath);
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failure"), *FullSourcePath, *FullDestinationPath);
			return false;
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not Exist"), *FullSourcePath);
		return false;
	}
}


TArray<FString> UMyBlueprintFunctionLibrary::ReadTextFile(FString FilePath)
{
	TArray<FString> Lines;

	// Открываем файл
	FString FileContent;
	if (FFileHelper::LoadFileToString(FileContent, *FilePath))
	{
		// Разбиваем содержимое файла на строки
		FileContent.ParseIntoArrayLines(Lines);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cant open file: %s"), *FilePath);
	}

	return Lines;
}

TArray<FString> UMyBlueprintFunctionLibrary::GetAllFilenamesInDirectory(FString DirectoryPath)
{
	TArray<FString> Filenames;

	IFileManager& FileManager = IFileManager::Get();
	if (FileManager.DirectoryExists(*DirectoryPath))
	{
		TArray<FString> Files;
		FileManager.FindFiles(Files, *DirectoryPath, nullptr);

		for (const FString& Filename : Files)
		{
			Filenames.Add(Filename);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Directory not exist: %s"), *DirectoryPath);
	}

	return Filenames;
}


UObject* UMyBlueprintFunctionLibrary::FindObjectByClass(TArray<UObject*> ObjectArray, UClass* TargetClass)
{
	for (UObject* Object : ObjectArray)
	{
		if (Object && Object->IsA(TargetClass))
		{
			return Object;
		}
	}

	return nullptr;
}


FRotator UMyBlueprintFunctionLibrary::CalculateRotationBetweenPoints(const FVector& PointA, const FVector& PointB)
{
	FVector Direction = (PointB - PointA).GetSafeNormal();

	float Pitch = FMath::RadiansToDegrees(FMath::Atan2(Direction.Z, Direction.X));
	float Yaw = FMath::RadiansToDegrees(FMath::Atan2(Direction.X, Direction.Z));
	float Roll = FMath::RadiansToDegrees(FMath::Atan2(Direction.X * Direction.Z, Direction.X * Direction.Y + Direction.Y * Direction.Z));

	FRotator ResultRotation = FRotator(Pitch, Yaw, Roll);
	return ResultRotation;
}


TArray<FString> UMyBlueprintFunctionLibrary::SplitString(const FString& OriginalString, const FString& Delimiter)
{
	TArray<FString> Substrings;
	OriginalString.ParseIntoArray(Substrings, *Delimiter, true);

	return Substrings;
}
