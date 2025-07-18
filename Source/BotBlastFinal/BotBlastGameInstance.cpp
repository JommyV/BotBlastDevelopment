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

	// Force graphics preset to "Medium"
	UGameUserSettings* Settings = GEngine->GetGameUserSettings();
	if (Settings)
	{
		Settings->SetOverallScalabilityLevel(1); // 0=Low, 1=Med, 2=High, 3=Epic
		Settings->ApplySettings(false);          // false = no restart needed
		Settings->SaveSettings();
	}
	FTransform CenterTransform(FRotator::ZeroRotator, FVector::ZeroVector, FVector(1.0f));
	UFMODBlueprintStatics::PlayEventAtLocation(this, Music, CenterTransform, true);
}



