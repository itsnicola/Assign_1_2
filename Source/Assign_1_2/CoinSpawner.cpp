// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinSpawner.h"

// Sets default values
ACoinSpawner::ACoinSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACoinSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACoinSpawner::SpawnObject(FVector Loc, FRotator Rot)
{
	FActorSpawnParameters SpawnParams;
	AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(ActorToSpawn, Loc, Rot, SpawnParams);
}

// Called every frame
void ACoinSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	int rand = FMath::RandRange(1, 100); //1 in 100 chance of generating a new coin every tick
	FVector Loc; 
	FRotator Rot; 
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(Loc, Rot); //Get position character is looking in
	Loc += FMath::VRand() * 200; //randomise to within 200 of ViewPoint
	//Spawn location params passed in from unreal
	Loc.Z = Z;
	Loc.X = FMath::RandRange(XRange.X, XRange.Y); 
	Loc.Y = FMath::RandRange(YRange.X, YRange.Y); 
	if (rand == 2) {
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Spawning"));		
		SpawnObject(Loc, Rot); 
	}
}

