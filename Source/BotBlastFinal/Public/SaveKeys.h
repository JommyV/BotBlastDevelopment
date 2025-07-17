// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveKeys.generated.h"

/**
 * 
 */
UCLASS()
class BOTBLASTFINAL_API USaveKeys : public USaveGame
{
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere,Category="Time")
	FString Key;

	GENERATED_BODY()
};
