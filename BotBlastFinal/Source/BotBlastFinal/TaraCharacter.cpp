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

		CurrentSatchels = FMath::Clamp(CurrentSatchels+SatchelRechargeRate, 0, MaxSatchels);
		OnSatchelCountChanged.Broadcast(PreviousSatchels, CurrentSatchels,MaxSatchels);
	}
	GEngine->AddOnScreenDebugMessage(-1, 0.49f, FColor::Silver,
									 *(FString::Printf(
										 TEXT("Movement - IsCrouched: %d"), bIsCrouched)));

	GEngine->AddOnScreenDebugMessage(-1, 0.49f, FColor::Cyan,
									 *(FString::Printf(
										 TEXT("Satchel - Current: %f | Maximum: %i"), CurrentSatchels, MaxSatchels)));

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

void ATaraCharacter::ThrowSatchel()
{
	if (CurrentSatchels >= 1)
	{
		//implement satchel throwing here
		CurrentSatchels--;
		UE_LOG(LogTemp,Display, TEXT("Boom, Baby"));
	}
	else
	{
		UE_LOG(LogTemp,Display, TEXT("No boom, Baby"));
	}
}


void ATaraCharacter::AddKey(FString KeyToAdd)
{
	if (KeyWallet.Contains(KeyToAdd))
	{
		OnKeyWalletAction.Broadcast(KeyToAdd, EPlayerKeyAction::AddKey, false);
	}
	else
	{
		KeyWallet.Add(KeyToAdd);
		// And maybe play a sound effect?
		OnKeyWalletAction.Broadcast(KeyToAdd, EPlayerKeyAction::AddKey, true);
	}
}

void ATaraCharacter::RemoveKey(FString KeyToRemove)
{
	if (KeyWallet.Contains(KeyToRemove))
	{
		KeyWallet.Remove(KeyToRemove);
		OnKeyWalletAction.Broadcast(KeyToRemove, EPlayerKeyAction::RemoveKey, true);
	}
	else
	{
		OnKeyWalletAction.Broadcast(KeyToRemove, EPlayerKeyAction::RemoveKey, true);
	}
}

bool ATaraCharacter::IsPlayerCarryingKey(FString DesiredKey)
{
	return KeyWallet.Contains(DesiredKey);
}




