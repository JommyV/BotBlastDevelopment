// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameMenu.h"

#include "CustomLogging.h"
#include "Components/Button.h"

void UInGameMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	UE_LOG(BBLog, Warning, TEXT("NativeOnInitialized()"));
	RestartButton->OnClicked.AddUniqueDynamic(this,&UInGameMenu::OnRestartButtonClicked);
	
}

void UInGameMenu::OnRestartButtonClicked()
{
	
}

void UInGameMenu::OnExitButtonClicked()
{
	
}

void UInGameMenu::OnQuitButtonClicked()
{
	
}
