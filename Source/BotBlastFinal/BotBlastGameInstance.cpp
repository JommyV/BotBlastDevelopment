// Fill out your copyright notice in the Description page of Project Settings.


#include "BotBlastGameInstance.h"

#include "FMODBlueprintStatics.h"
#include "MySave.h"
#include "GameFramework/GameUserSettings.h"
#include "Kismet/GameplayStatics.h"
#include "FMODEvent.h"

void UBotBlastGameInstance::Init()
{
	Super::Init();
	UFMODBlueprintStatics::LoadBank(MasterBank, true, true);

	// Force graphics preset to "Medium"
	UGameUserSettings* Settings = GEngine->GetGameUserSettings();
	if (Settings)
	{
		Settings->SetOverallScalabilityLevel(1); // 0=Low, 1=Med, 2=High, 3=Epic
		Settings->ApplySettings(false);          // false = no restart needed
		Settings->SaveSettings();
	}
	UFMODBlueprintStatics::PlayEvent2D(this, Music, true);

	
}




