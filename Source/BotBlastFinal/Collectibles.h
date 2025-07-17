#pragma once


#include "CoreMinimal.h"
#include "Collectibles.generated.h"


USTRUCT(BlueprintType)
struct FCollectibles
{

	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere,Category="Collectibles")
	FString Key;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere,Category="Collectibles")
	TArray<FString> Keys;
		
};
