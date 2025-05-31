// Fill out your copyright notice in the Description page of Project Settings.


#include "TaraCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"



// Sets default values
ATaraCharacter::ATaraCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	//SetActorTickInterval(0.5f);
	SetActorTickEnabled(true);

	//Create our components
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComp->SetupAttachment(GetCapsuleComponent()); // Attach to the capsule

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComp->SetupAttachment(GetCapsuleComponent());  // Attach to capsule too

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

	ShadowComp = CreateDefaultSubobject<UShadowComponent>(TEXT("ShadowComponent"));

		
	//Assign SpringArm class variables.
	SpringArmComp->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, 0.0f, 0.0f));
	SpringArmComp->TargetArmLength = 400.f;
	SpringArmComp->bEnableCameraLag = true;
	SpringArmComp->CameraLagSpeed = 3.0f;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 250.0f, 0.0f); // Adjust turn speed here
	
	SpringArmComp->bUsePawnControlRotation = true;
	CameraComp->bUsePawnControlRotation = false; // Let spring arm handle the rotation
	bUseControllerRotationYaw = true;            // Let controller rotate the whole pawn
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ATaraCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (GetMovementComponent()) GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	BroadcastCurrentStats();
}

// Called every frame
void ATaraCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*GEngine->AddOnScreenDebugMessage(-1, 0.005f, FColor::Silver,
									*(FString::Printf(
									TEXT("ActiveSatchels: %i"), ActiveSatchels)));
	*/
		
	GEngine->AddOnScreenDebugMessage(-1, 0.0005f, FColor::Cyan,
									 *(FString::Printf(
										 TEXT("Satchel - Current: %f | Maximum: %f"), CurrentSatchels, MaxSatchels)));

	if (CurrentSatchels != MaxSatchels)
	{
		// Keep track of the value before it is changed.
		const float PreviousSatchelCount = CurrentSatchels;

		
		OnSatchelCountChanged.Broadcast(PreviousSatchelCount, CurrentSatchels, MaxSatchels);
	}
	else if (!GetMovementComponent()->IsFalling() && ActiveSatchels == 0.f)
	{
		CurrentSatchels = 2.f;
		//GEngine->AddOnScreenDebugMessage(-1, 0.0005f, FColor::Cyan,
									// *(FString::Printf(
									//	 TEXT("I now have: %f Satchels"), CurrentSatchels)));

	}
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
	/*if (CurrentSatchels >= 1 && ActiveSatchels == 0)
	{
		//implement satchel throwing here
		CurrentSatchels--;
		ActiveSatchels++;
	}
	else if (ActiveSatchels >= 1)
	{
		ActiveSatchels--;
	}*/
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

void ATaraCharacter::PitchCamera(float AxisValue)
{
	CameraInput.Y = AxisValue;
}

void ATaraCharacter::YawCamera(float AxisValue)
{
	CameraInput.X = AxisValue;
}

void ATaraCharacter::BroadcastCurrentStats()
{
	OnSatchelCountChanged.Broadcast(CurrentSatchels, CurrentSatchels, MaxSatchels);
	//OnStaminaChanged.Broadcast(CurrentStamina, CurrentStamina, MaxStamina);
	//OnPsiPowerChanged.Broadcast(CurrentPsiPower, CurrentPsiPower, MaxPsiPower);

	// Make a string of all the keys
	// If there are ANY members, the string will end with a trailing comma ','
	// We dont care to remove that here, it doesnt matter.
	FString AllKeys = FString();
	for (FString Key : KeyWallet)
	{
		AllKeys.Appendf(TEXT("%s,"),&Key);
	}

	OnKeyWalletAction.Broadcast(AllKeys, EPlayerKeyAction::CountKeys, true);
}




