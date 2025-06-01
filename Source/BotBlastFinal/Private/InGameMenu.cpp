// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameMenu.h"

#include "CustomLogging.h"

void UInGameMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	UE_LOG(BBLog, Warning, TEXT("NativeOnInitialized()"));
	
}
