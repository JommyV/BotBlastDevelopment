// Fill out your copyright notice in the Description page of Project Settings.


#include "ShadowComponent.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"


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

	// ...
	
}


// Called every frame
void UShadowComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UShadowComponent::FindShadowSpot()
{
	
}

void UShadowComponent::PerformDownwardTrace()
{
	FVector Start = GetComponentLocation();
	FVector End = Start + FVector(0.0f, 0.0f, -1000.0f); // Trace 1000 units downward

	FHitResult HitResult;
	FCollisionQueryParams TraceParams(FName(TEXT("DownwardTrace")), true, GetOwner());

	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		Start,
		End,
		ECC_Visibility,
		TraceParams
	);

	if (bHit)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Hit: %s"), *HitResult.Actor->GetName());
		// Optional: draw debug line
		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.0f);
	}
}
