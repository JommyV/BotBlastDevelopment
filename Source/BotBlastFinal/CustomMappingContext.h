// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputMappingContext.h"
#include "CustomMappingContext.generated.h"

/**
 * 
 */
UCLASS()
class BOTBLASTFINAL_API UCustomMappingContext : public UInputMappingContext
{
public:
	UFUNCTION(BlueprintCallable, Category = "Input")
	void AddMappingManually(UInputAction* Action, FKey Key, const TArray<UInputModifier*>& Modifiers);

protected:
	// Make this helper a friend so it can access private members (if needed)
	friend class FCustomInputMappingHelper;

	
	GENERATED_BODY()
};
