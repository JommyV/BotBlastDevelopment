// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameMenu.h"

#include "CustomLogging.h"
#include "BotBlastFinal/TaraCharacter.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UInGameMenu::NativeConstruct()
{
		
	if (RestartButton)
	{
		RestartButton->OnClicked.AddDynamic(this, &UInGameMenu::OnRestartButtonClicked);
	}
	if (ExitButton)
	{
		ExitButton->OnClicked.AddDynamic(this, &UInGameMenu::OnExitButtonClicked);
	}
	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UInGameMenu::OnQuitButtonClicked);
	}
	SetVisibility(ESlateVisibility::Hidden);
	ATaraCharacter* PlayerCharacter = Cast<ATaraCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter)
	{
		PlayerCharacter->OnPause.AddDynamic(this, &UInGameMenu::OnPause);
	}
	Super::NativeConstruct();
}

void UInGameMenu::OnRestartButtonClicked()
{
	
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
		
}

void UInGameMenu::OnExitButtonClicked()
{
	UGameplayStatics::OpenLevel(this,"MainMenu", false);
}

void UInGameMenu::OnQuitButtonClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}

void UInGameMenu::OnPause(bool isPaused)
{
	if (isPaused)
	{
		SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		SetVisibility(ESlateVisibility::Hidden);
	}
		
		
	
}




