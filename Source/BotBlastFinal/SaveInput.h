// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveInput.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UMyInputSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FKey SavedFwdKey;

	UPROPERTY(BlueprintReadWrite)
	FKey SavedBackKey;

	UPROPERTY(BlueprintReadWrite)
	FKey SavedLeftKey;

	UPROPERTY(BlueprintReadWrite)
	FKey SavedRightKey;

	UPROPERTY(BlueprintReadWrite)
	FKey SavedJumpKey;

	UPROPERTY(BlueprintReadWrite)
	FKey SavedSatchelKey;


};
