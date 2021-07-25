// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoinSpawner.generated.h"

UCLASS()
class ASSIGN_1_2_API ACoinSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoinSpawner();
	
	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	TSubclassOf<AActor> ActorToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning Range X")
	FVector2D XRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning Range Y")
		FVector2D YRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning Height Z")
		float Z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chance to spawn")
		int chance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void SpawnObject(FVector Loc, FRotator Rot);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
