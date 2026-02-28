

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FMODEvent.h"
#include "FMODBank.h"
#include "FMODAudioComponent.h"
#include "BotBlastGameInstance.generated.h"

UCLASS()
class BOTBLASTFINAL_API UBotBlastGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	UPROPERTY(BlueprintReadWrite, Category="Settings")
	float StoredMouseSensitivity = 1.0f;

	UPROPERTY(BlueprintReadWrite, Category="Settings")
	int StoredMouseInvertion = 1;
	
	UPROPERTY(BlueprintReadWrite, Category="Settings")
	FKey FwdKey;

	UPROPERTY(BlueprintReadWrite, Category="Settings")
	FKey BackKey;

	UPROPERTY(BlueprintReadWrite, Category="Settings")
	FKey LeftKey;

	UPROPERTY(BlueprintReadWrite, Category="Settings")
	FKey RightKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	UFMODEvent* Music;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	TObjectPtr<UFMODBank> MasterBank;

	UPROPERTY()
	UFMODAudioComponent* MusicComponent;
};