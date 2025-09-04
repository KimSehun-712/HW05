// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	CurrentLocation = FVector2D(0, 0);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Initial Location: (%f, %f)"),CurrentLocation.X, CurrentLocation.Y);
	Move(10);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AMyActor::Step() // Move 내에서 부름
{
	return FMath::RandRange(0, 1);
}

void AMyActor::Move(int32 MoveCount)
{
	for (int32 i = 0; i < MoveCount; i++)
	{
		CurrentLocation.X += Step();
		CurrentLocation.Y += Step();
		UE_LOG(LogTemp, Warning, TEXT("Step %d Location: (%f, %f)"), i+1, CurrentLocation.X, CurrentLocation.Y);
	}

}



