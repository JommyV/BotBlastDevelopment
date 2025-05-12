// Fill out your copyright notice in the Description page of Project Settings.


#include "BotBlastHud.h"


void ABotBlastHud::CycleToNextViewMode()
{
	++CurrentViewMode;
	UE_LOG(LogTemp, Warning, TEXT("CycleToNextViewMode %s"), *UEnum::GetValueAsString(CurrentViewMode));
	//UpdateWidgets();
}

	
	
