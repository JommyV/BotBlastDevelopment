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
	Level_10	  UMETA(DisplayName = "Level 10"),
	Level_11	  UMETA(DisplayName = "Level 11"),
	Level_12	  UMETA(DisplayName = "Level 12"),
	Level_13	  UMETA(DisplayName = "Level 13"),
	Level_14	  UMETA(DisplayName = "Level 14"),
	Level_15	  UMETA(DisplayName = "Level 15"),
	
};

/*UENUM(BlueprintType)
enum class EMedalType : uint8
{
	None	UMETA(DisplayName="None"),
	Bronze	UMETA(DisplayName="Bronze"),
	Silver	UMETA(DisplayName="Silver"),
	Gold	UMETA(DisplayName="Gold"),
	Author	UMETA(DisplayName="Author")
};*/

/*USTRUCT(BlueprintType)
struct FLevelMedalData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FString LevelName;

	/*UPROPERTY(BlueprintReadWrite)
	EMedalType BestMedal = EMedalType::None;
};*/

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
	
	//UPROPERTY(BlueprintReadWrite, Category="Time")
	//EMedalType BestMedal;
	
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

	/*FLeaderboardGroup()
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
	}*/
	
};
