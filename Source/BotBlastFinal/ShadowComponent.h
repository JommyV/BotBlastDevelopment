// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShadowComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BOTBLASTFINAL_API UShadowComponent : public UActorComponent
{
public:
	// Sets default values for this component's properties
	UShadowComponent();
	UPROPERTY()
	UDecalComponent* PersistentDecal;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="Tracing")
	void TraceDownAndPlaceDecal();

	UPROPERTY(EditAnywhere, Category = "Trace")
	float TraceDistance = 1000.f;

	UPROPERTY(EditAnywhere, Category = "Decal")
	UMaterialInterface* DecalMaterial;

	UPROPERTY(EditAnywhere, Category = "Decal")
	FVector DecalSize = FVector(32.f, 64.f, 64.f);
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Decal")
	float DecalLifeSpan;
};
