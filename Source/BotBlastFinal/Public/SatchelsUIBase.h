// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BotBlastFinal/WidgetBase.h"
#include "Blueprint/UserWidget.h"
#include "SatchelsUIBase.generated.h"

/**
 * 
 */

class UVerticalBox;
class UBorder;
class UImage;
class UTextBlock;
class UCanvasPanel;


UCLASS()
class BOTBLASTFINAL_API USatchelsUIBase : public UWidgetBase
{
public:
	// Function that can be called to update the bar using int values
	/*UFUNCTION()
	void OnIntStatUpdated(int32 OldValue, int32 NewValue, int32 MaxValue);*/

	// Function that can be called to update the bar using float values
	UFUNCTION()
	void OnFloatStatUpdated(float OldValue, float NewValue, float MaxValue, bool currentsatchel);

#if WITH_EDITOR
	virtual void OnDesignerChanged(const FDesignerChangedEventArgs& EventArgs) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif


protected:

	virtual void NativeOnInitialized() override;
	
	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UBorder> MainBorder = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UCanvasPanel> PercentBars = nullptr;

	//UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	//TObjectPtr<UImage> Icon = nullptr;

	UPROPERTY(EditAnywhere, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UImage> Bar_Empty = nullptr;

	UPROPERTY(EditAnywhere, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UImage> Bar_Filled = nullptr;

	UPROPERTY(EditAnywhere, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UImage> Bar_SemiFilled = nullptr;

	UPROPERTY(Blueprintable, EditAnywhere, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UImage> Satchel_On = nullptr;

	UPROPERTY(Blueprintable, EditAnywhere, Category = "Constituent Controls", meta = (BindWidget))
	TObjectPtr<UImage> Satchel_Off = nullptr;

	//UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls", meta = (BindWidget))
	//TObjectPtr<UTextBlock> ValueText = nullptr;




private:
	UPROPERTY(EditAnywhere, Category="Stat Bar")
	FSlateBrush IconBrush;

	UPROPERTY(EditAnywhere, Category="Stat Bar")
	FLinearColor BarBackgroundColor;

	UPROPERTY(EditAnywhere, Category="Stat Bar")
	FLinearColor BarForegroundColor;

	// Display the Bar as full size, or minimized
	UPROPERTY(EditAnywhere, Category="Stat Bar")
	bool IsFullSize = true;

	// Internal variable to store the current 'filled' amount
	// 'Clamped' to stop the value going outside of what we consider a % to be
	UPROPERTY(EditAnywhere, Category="Stat Bar|Testing",
		meta=(ClampMin=0, UIMin=0, ClampMax=1, UIMax=1, Units="Percent"))
	float CurrentPercentage = 0.f;

	// This is the 'actual' value of the current amount
	UPROPERTY(EditAnywhere, Category="Stat Bar|Testing", meta=(ClampMin=0, UIMin=0))
	float CurrentSatchelsNumber = MaxSatchels;

	UPROPERTY(EditAnywhere, Category="Stat Bar|Testing", meta=(ClampMin=0, UIMin=0))
	float MaxSatchels = 2.f;

	UPROPERTY(EditAnywhere, Category="Stat Bar|Testing")
	bool bIsActiveSatchel = false	;

	// This does not need to be a property as it is never serialized,
	// and is totally dependent on the CurrentValue.
	FText CurrentValueText;

	// This function works out what should be displayed in the TextBox,
	// based on the CurrentValue.
	void ProcessCurrentValueText();

	// Called after any changes are made to redraw the bar
	void UpdateWidget();


	GENERATED_BODY()
	
};
