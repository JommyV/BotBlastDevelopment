#pragma once

#include "CoreMinimal.h"
#include "LeaderboardEntry.generated.h"

UENUM(BlueprintType)
enum class ELevelsID : uint8
{
	Level_01      UMETA(DisplayName = "Level 01"),
	Level_02      UMETA(DisplayName = "Level 02"),
	Level_03      UMETA(DisplayName = "Level 03"),
	Level_04      UMETA(DisplayName = "Level 04"),
	Level_05	  UMETA(DisplayName = "Level 05"),
	Level_06	  UMETA(DisplayName = "Level 06"),
	Level_07	  UMETA(DisplayName = "Level 07"),
	Level_08	  UMETA(DisplayName = "Level 08"),
	Level_09	  UMETA(DisplayName = "Level 09"),
	
};

USTRUCT(BlueprintType)
struct FLeaderboardEntry
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category="Time")
	float EndTime;
	
	UPROPERTY(BlueprintReadWrite, Category="Time")
	FDateTime Date;
	
	UPROPERTY(BlueprintReadWrite, Category="Time")
	FString PlayerName;

	FLeaderboardEntry()
	   : PlayerName("Player"), EndTime(0.0f), Date(FDateTime::Now())
	{}

	FLeaderboardEntry(FString InName, float InTime)
	  : PlayerName(InName), EndTime(InTime), Date(FDateTime::Now())
	{}

};

USTRUCT(BlueprintType)
struct FLeaderboardGroup
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FString LevelName;

	UPROPERTY(BlueprintReadWrite)
	TArray<FLeaderboardEntry> Entries;

	FLeaderboardGroup()
	{
		const int32 DefaultEntryCount = 3;
		for (int32 i = 0; i < DefaultEntryCount; ++i)
		{
			FLeaderboardEntry Entry;
			Entry.PlayerName = "Jommy";
			Entry.EndTime = 9999.0f;
			Entry.Date = FDateTime(2000, 1, 1);

			Entries.Add(Entry);
		}
	}
	
};
