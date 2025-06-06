

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
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
};