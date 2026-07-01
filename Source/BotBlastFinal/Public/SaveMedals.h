// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveMedals.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EMedalType : uint8
{
	None	UMETA(DisplayName="None"),
	Bronze	UMETA(DisplayName="Bronze"),
	Silver	UMETA(DisplayName="Silver"),
	Gold	UMETA(DisplayName="Gold"),
	Author	UMETA(DisplayName="Author")
};

USTRUCT(BlueprintType)
struct FLevelMedalData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FString LevelName;

	UPROPERTY(BlueprintReadWrite)
	EMedalType BestMedal = EMedalType::None;
};



UCLASS()
class BOTBLASTFINAL_API USaveMedals : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	TArray<FLevelMedalData> LevelMedals;
};
