// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "BotBlastFinal/WidgetBase.h"
#include "UILayout.generated.h"

class UBarBase;
class UImage;

/* */
UCLASS(Abstract)
class BOTBLASTFINAL_API UILayout : public UWidgetBase
{
public:
	
	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UBarBase> ItemBar = nullptr;
		
	//UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	//TObjectPtr<UImage> Crosshair = nullptr;
	
protected:


private:

	
	GENERATED_BODY()
};