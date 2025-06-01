// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BotBlastHud.generated.h"

/**
 * 
 */

class ATaraCharacter;
class UILayout;

UENUM(BlueprintType)
enum class EHudViewMode: uint8
{
	CleanAndPristine UMETA(Tooltip="Get that mess outta my face!"),
	Minimal UMETA(Tooltip="Just the facts, maam."),
	Moderate UMETA(Tooltip="Keep me well informed"),
	SensoryOverload UMETA(Tooltip="My other UI is a derivatives trading screen")
};
inline EHudViewMode& operator++(EHudViewMode& ViewMode)
{	
	if (ViewMode == EHudViewMode::SensoryOverload)
		ViewMode = EHudViewMode::CleanAndPristine;
	else
		ViewMode = static_cast<EHudViewMode>(static_cast<int>(ViewMode) + 1);

	return ViewMode;
}

inline EHudViewMode& operator--(EHudViewMode& ViewMode)
{
	if (ViewMode == EHudViewMode::CleanAndPristine)
		ViewMode = EHudViewMode::SensoryOverload;
	else
		ViewMode = static_cast<EHudViewMode>(static_cast<int>(ViewMode) - 1);
	return ViewMode;
}


UCLASS()
class BOTBLASTFINAL_API ABotBlastHud : public AHUD
{
	UPROPERTY(EditAnywhere)
	TSubclassOf<UILayout> LayoutClass = nullptr;
	


public:
	// Allow code and blueprints to put the hud in a specific viewmode directly
	// Possibly useful for cinematic cutscenes etc?
	UFUNCTION(BlueprintCallable)
	void SetCurrentViewMode(EHudViewMode NewViewMode);


	// Change to the next viewmode 
	UFUNCTION(BlueprintCallable) 
	void CycleToNextViewMode();


	
protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
private:
	// Determines what UI elements should be displayed.
	UPROPERTY(EditAnywhere)
	EHudViewMode CurrentViewMode = EHudViewMode::Minimal;

	// whenever we change the view mode, this private function is called to show the appropriate widgets.
	void UpdateWidgets();

	// Release any delegate bindings.
	void ClearAllHandlers();

	
	UPROPERTY()
	TObjectPtr<UWorld> World = nullptr;
	
	UPROPERTY()
	TObjectPtr<UILayout> LayoutWidget  = nullptr;

	UPROPERTY()
	TObjectPtr<ATaraCharacter> PlayerCharacter = nullptr;

	FString MapName;
	
	GENERATED_BODY()
};
