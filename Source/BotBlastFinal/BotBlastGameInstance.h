

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
};