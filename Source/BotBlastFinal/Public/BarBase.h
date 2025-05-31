// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BotBlastFinal/WidgetBase.h"
#include "Blueprint/UserWidget.h"
#include "BarBase.generated.h"

/**
 * 
 */

class USatchelsUIBase;

UCLASS(Abstract)
class BOTBLASTFINAL_API UBarBase : public UWidgetBase
{

public:
	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<USatchelsUIBase> SatchelBarMain = nullptr;
	
	//For future if different variables are needed.
	//UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	//TObjectPtr<USatchelsUIBase> StaminaBar = nullptr;
	
	//UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	//TObjectPtr<USatchelsUIBase> PsiBar = nullptr;

protected:


private:

	GENERATED_BODY()
};
