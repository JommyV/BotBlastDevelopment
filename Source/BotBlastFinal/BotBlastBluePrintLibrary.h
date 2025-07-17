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

	UFUNCTION(BlueprintCallable, Category = "Input|Enhanced")
	static void SaveInput(FKey FwdKey,FKey BackKey, FKey RightKey, FKey LeftKey, FKey JumpKey, FKey SatchelKey);

	UFUNCTION(BlueprintCallable, Category = "Input|Save")
	static void LoadInputKeys(FKey& Forward, FKey& Backward, FKey& Left, FKey& Right, FKey& JumpKey, FKey& SatchelKey);
	
	GENERATED_BODY()
};

