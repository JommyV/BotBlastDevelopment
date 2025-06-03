// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameMenu.h"

#include "CustomLogging.h"
#include "BotBlastFinal/TaraCharacter.h"
#include "BotBlastFinal/TaraController.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UInGameMenu::NativeConstruct()
{
	//Binds the buttons to the respective functions.	
	if (RestartButton)
			RestartButton->OnClicked.AddDynamic(this, &UInGameMenu::OnRestartButtonClicked);
	
	if (ExitButton)
			ExitButton->OnClicked.AddDynamic(this, &UInGameMenu::OnExitButtonClicked);
	
	if (QuitButton)
			QuitButton->OnClicked.AddDynamic(this, &UInGameMenu::OnQuitButtonClicked);
	
	if (ResumeButton)
			ResumeButton->OnClicked.AddDynamic(this, &UInGameMenu::OnResumeButtonClicked);

	//Sets the menu to be invisible when the game starts.
	SetVisibility(ESlateVisibility::Hidden);

	//Gets a reference to the player and adds the delegate to call the pause function.
	PlayerCharacter = Cast<ATaraCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter)
	{
		PlayerCharacter->OnPause.AddDynamic(this, &UInGameMenu::OnPause);
	}
	
	Super::NativeConstruct();
}

void UInGameMenu::OnRestartButtonClicked()
{
	//Restarts the level we are currently at
	Controller = PlayerCharacter->GetController();
	MyController = Cast<ATaraController>(Controller);
	MyController->SetShowMouseCursor(false);
	MyController->SetInputMode(GameInputMode);
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
	
		
}

void UInGameMenu::OnExitButtonClicked()
{
	//Opens the main menu, virtually exiting to it.
	UGameplayStatics::OpenLevel(this,"MainMenu", false);
}

void UInGameMenu::OnQuitButtonClicked()
{
	//Quits the whole game.
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}

void UInGameMenu::OnResumeButtonClicked()
{
	//Unpauses the game when clicked. For now it's the only way to unpause. Hides the menu.
	UGameplayStatics::SetGamePaused(GetWorld(), false); // UnPause
	SetVisibility(ESlateVisibility::Hidden);
	Controller = PlayerCharacter->GetController();
	MyController = Cast<ATaraController>(Controller);
	MyController->SetShowMouseCursor(false);
	MyController->SetInputMode(GameInputMode);
	MyController->HandleUnPause();
	
	
}

void UInGameMenu::OnPause(bool isPaused)
{
	//When the player plays the pause button, sets the menu to visible if its not paused and to hidden if paused.
	if (isPaused)
	{
		SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		SetVisibility(ESlateVisibility::Hidden);
	}	
}






