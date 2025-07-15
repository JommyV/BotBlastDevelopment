// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "LeaderboardEntry.h"
#include "MySave.generated.h"

/**
 * 
 */
UCLASS()
class BOTBLASTFINAL_API UMySave : public USaveGame
{

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere,Category="Time")
	TArray<FLeaderboardGroup> LeaderboardsByLevel;
	

	GENERATED_BODY()
};
