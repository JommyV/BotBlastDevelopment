// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BotBlastBluePrintLibrary.generated.h"




UCLASS()
class BOTBLASTFINAL_API UBotBlastBluePrintLibrary : public UBlueprintFunctionLibrary
{

public:
	
	UFUNCTION(BlueprintCallable, Category="Leaderboard")
	static TArray<FLeaderboardEntry> LoadLeaderboardSave(const FString& LevelName);
	
	UFUNCTION(BlueprintCallable, Category="Leaderboard")
	static void SaveLeaderboard(const FString& LevelName, FString PlayerName, float Time);

	
	GENERATED_BODY()
};

