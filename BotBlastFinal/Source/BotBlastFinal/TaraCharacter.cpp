// Fill out your copyright notice in the Description page of Project Settings.


#include "TaraCharacter.h"
#include "GameFramework/PawnMovementComponent.h"


// Sets default values
ATaraCharacter::ATaraCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	SetActorTickInterval(0.5f);
	SetActorTickEnabled(true);
}

// Called when the game starts or when spawned
void ATaraCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (GetMovementComponent()) GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	
}

// Called every frame
void ATaraCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

	if (CurrentSatchels != MaxSatchels)
	{
		const int PreviousSatchels = CurrentSatchels;

		CurrentSatchels = FMath::Clamp<int>(CurrentSatchels+SatchelRechargeRate, 0, MaxSatchels - 1);
		OnSatchelCountChanged.Broadcast(PreviousSatchels, CurrentSatchels,MaxSatchels);
	}
	GEngine->AddOnScreenDebugMessage(-1, 0.49f, FColor::Silver,
									 *(FString::Printf(
										 TEXT("Movement - IsCrouched:%d"), bIsCrouched)));

	GEngine->AddOnScreenDebugMessage(-1, 0.49f, FColor::Cyan,
									 *(FString::Printf(
										 TEXT("Satchel - Current:%i | Maximum:%i"), CurrentSatchels, MaxSatchels)));

	GEngine->AddOnScreenDebugMessage(-1, 0.49f, FColor::Orange,
									 *(FString::Printf(TEXT("Keys - %d Keys Currently held"), KeyWallet.Num())));
}


// Called to bind functionality to input
void ATaraCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

int ATaraCharacter::GetMaxSatchels()
{
	return MaxSatchels;
}

int ATaraCharacter::GetCurrentSatchels()
{
	return CurrentSatchels;
}

float ATaraCharacter::GetSatchelRechargeRate()
{
	return SatchelRechargeRate;
}

void ATaraCharacter::ThrowSatchel(AActor* satchel)
{
	if (CurrentSatchels > 1 && IsSatchelActive == false)
	{
		//implement satchel throwing here
		CurrentSatchels--;
		return;
	}
	else
	{
		//If player has less than one satchel
		return;
	}
}

void ATaraCharacter::RechargeSatchels()
{
	
}

void ATaraCharacter::AddKey(FString KeytoAdd)
{
	if (KeyWallet.Contains(KeytoAdd))
	{
		//Key Already in there, play noise or something
		return;
	}
	else
	{
		KeyWallet.Add(KeytoAdd);
		//maybe add feedback
	}
}

void ATaraCharacter::RemoveKey(FString KeytoRemove)
{
	if (KeyWallet.Contains(KeytoRemove))
	{
		KeyWallet.Remove(KeytoRemove);
	}
}

bool ATaraCharacter::IsPlayerCarryingKey(FString DesiredKey)
{
	return KeyWallet.Contains(DesiredKey);
}




