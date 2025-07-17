// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomMappingContext.h"

void UCustomMappingContext::AddMappingManually(UInputAction* Action, FKey Key, const TArray<UInputModifier*>& Modifiers)
{
	if (!Action || !Key.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid arguments to AddMappingManually"));
		return;
	}

	FEnhancedActionKeyMapping Mapping;
	Mapping.Action = Action;
	Mapping.Key = Key;
	Mapping.Modifiers = Modifiers;

	this->Mappings.Add(Mapping);
}