// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InGameMenu.generated.h"

/**
 * 
 */

class UVerticalBox;
class UBorder;
class UImage;
class UTextBlock;
class UButton;

UCLASS()
class BOTBLASTFINAL_API UInGameMenu : public UUserWidget
{
protected:

	virtual void NativeOnInitialized() override;

	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UBorder> MainBorder = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UVerticalBox> MenuOutline = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UButton> RestartButton = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UButton> ExitButton = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UButton> QuitButton = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UTextBlock> ValueText = nullptr;

private:

	UFUNCTION()
	void OnRestartButtonClicked();
	
	UFUNCTION()
	void OnExitButtonClicked();
	
	UFUNCTION()
	void OnQuitButtonClicked();

	GENERATED_BODY()
	
};
