// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BotBlastHud.generated.h"

/**
 * 
 */

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
	GENERATED_BODY()

public:
	// Change to the next viewmode 
	UFUNCTION(BlueprintCallable) 
	void CycleToNextViewMode();


	
private:
	// Determines what UI elements should be displayed.
	UPROPERTY(EditAnywhere)
	EHudViewMode CurrentViewMode = EHudViewMode::Moderate;

	
};
