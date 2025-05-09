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

		
	//Assign SpringArm class variables.
	SpringArmComp->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, 0.0f, 0.0f));
	SpringArmComp->TargetArmLength = 400.f;
	SpringArmComp->bEnableCameraLag = true;
	SpringArmComp->CameraLagSpeed = 3.0f;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 250.0f, 0.0f); // Adjust turn speed here
	
	SpringArmComp->bUsePawnControlRotation = true;
	CameraComp->bUsePawnControlRotation = false; // Let spring arm handle the rotation
	bUseControllerRotationYaw = false;            // Let controller rotate the whole pawn
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;
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
	
	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Silver,
									*(FString::Printf(
									TEXT("ActiveSatchels: %i"), ActiveSatchels)));

	if (CurrentSatchels != MaxSatchels)
	{
		const int PreviousSatchels = CurrentSatchels;

		CurrentSatchels = FMath::Clamp(CurrentSatchels+SatchelRechargeRate, 0, MaxSatchels);
		OnSatchelCountChanged.Broadcast(PreviousSatchels, CurrentSatchels,MaxSatchels);
	}
	//GEngine->AddOnScreenDebugMessage(-1, 0.49f, FColor::Silver,
    									// *(FString::Printf(
    									//	 TEXT("Movement - IsCrouched: %d"), bIsCrouched)));}
	

	GEngine->AddOnScreenDebugMessage(-1, 0.05f, FColor::Cyan,
									 *(FString::Printf(
										 TEXT("Satchel - Current: %f | Maximum: %i"), CurrentSatchels, MaxSatchels)));

	//GEngine->AddOnScreenDebugMessage(-1, 0.49f, FColor::Orange,
									// *(FString::Printf(TEXT("Keys - %d Keys Currently held"), KeyWallet.Num())));
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





