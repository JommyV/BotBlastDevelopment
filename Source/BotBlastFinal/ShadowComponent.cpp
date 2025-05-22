// Fill out your copyright notice in the Description page of Project Settings.


#include "ShadowComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/DecalComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UShadowComponent::UShadowComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UShadowComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (DecalMaterial)
	{
		PersistentDecal = NewObject<UDecalComponent>(GetOwner());
		PersistentDecal->RegisterComponent(); // important
		PersistentDecal->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
		PersistentDecal->SetDecalMaterial(DecalMaterial);
		PersistentDecal->DecalSize = DecalSize;
		PersistentDecal->SetVisibility(false); // hide until first valid hit
	}
	
}


// Called every frame
void UShadowComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	FVector Start = GetOwner()->GetActorLocation();
	FVector End = Start - FVector(0, 0, TraceDistance);
	FHitResult Hit;

	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility))
	{
		if (PersistentDecal)
		{
			PersistentDecal->SetWorldLocation(Hit.Location);
			PersistentDecal->SetWorldRotation(Hit.ImpactNormal.Rotation());
			PersistentDecal->SetVisibility(true);
		}
	}
	else if (PersistentDecal)
	{
		PersistentDecal->SetVisibility(false); // hide if not hitting
	}
	
}

void UShadowComponent::TraceDownAndPlaceDecal()
{
	/*if (!GetOwner()) return;

	FVector Start = GetOwner()->GetActorLocation();
	FVector End = Start - FVector(0.f, 0.f, TraceDistance);

	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());

	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params);

	if (bHit)
	{
		// Debug line
		DrawDebugLine(GetWorld(), Start, Hit.Location, FColor::Green, false, 2.0f, 0, 2.0f);

		// Spawn decal at hit location
		if (DecalMaterial)
		{
			UDecalComponent* Decal = UGameplayStatics::SpawnDecalAtLocation(
				GetWorld(),
				DecalMaterial,
				DecalSize,
				Hit.Location,
				Hit.ImpactNormal.Rotation(), // Align with surface
				DecalLifeSpan // Life span
			);
		}
	}
*/
}

