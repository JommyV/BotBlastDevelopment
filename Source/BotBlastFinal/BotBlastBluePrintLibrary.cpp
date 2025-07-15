// Fill out your copyright notice in the Description page of Project Settings.


#include "BotBlastBluePrintLibrary.h"
#include "MySave.h"
#include "Kismet/GameplayStatics.h"


TArray<FLeaderboardEntry> UBotBlastBluePrintLibrary::LoadLeaderboardSave(const FString& LevelName)
{
	const FString SlotName = TEXT("LeaderboardSlot");

	if (UMySave* SaveGame = Cast<UMySave>(
		UGameplayStatics::LoadGameFromSlot(SlotName, 0)))
	{
		if (FLeaderboardGroup* FoundGroup = SaveGame->LeaderboardsByLevel.FindByPredicate(
			[&LevelName](const FLeaderboardGroup& Group) {
				return Group.LevelName == LevelName;
			}))
		{
			return FoundGroup->Entries;
		}
	}

	TArray<FLeaderboardEntry> DefaultEntries;
	for (int32 i = 0; i < 3; ++i)
	{
		FLeaderboardEntry Entry;
		Entry.PlayerName;
		Entry.EndTime = 9999.0f;
		Entry.Date = FDateTime(2000, 1, 1);
		DefaultEntries.Add(Entry);
	}
	return DefaultEntries;
}

void UBotBlastBluePrintLibrary::SaveLeaderboard(const FString& LevelName, FString PlayerName, float Time)
{
	const FString SlotName = TEXT("LeaderboardSlot");
	const int32 MaxEntries = 3;

	UMySave* SaveGameInstance;

	if (UGameplayStatics::DoesSaveGameExist(SlotName, 0))
	{
		SaveGameInstance = Cast<UMySave>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	}
	else
	{
		SaveGameInstance = Cast<UMySave>(UGameplayStatics::CreateSaveGameObject(UMySave::StaticClass()));
	}

	if (!SaveGameInstance) return;


	FLeaderboardGroup* FoundGroup = SaveGameInstance->LeaderboardsByLevel.FindByPredicate(
	  [&LevelName](const FLeaderboardGroup& Group)
	  {
		  return Group.LevelName == LevelName;
	  });

	if (!FoundGroup)
	{
		// Create new group if non-existent
		FLeaderboardGroup NewGroup;
		NewGroup.LevelName = LevelName;
		SaveGameInstance->LeaderboardsByLevel.Add(NewGroup);
		FoundGroup = &SaveGameInstance->LeaderboardsByLevel.Last();
	}
	
	// Add new entry
	FoundGroup->Entries.Add(FLeaderboardEntry(PlayerName, Time));

	// Sort ascending (fastest time first)
	FoundGroup->Entries.Sort([](const FLeaderboardEntry& A, const FLeaderboardEntry& B) {
		 return A.EndTime < B.EndTime;
	 });

	// Limit to top 3
	if (FoundGroup->Entries.Num() > MaxEntries)
	{
		FoundGroup->Entries.SetNum(MaxEntries);
	}

	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}