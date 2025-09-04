// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class HW05_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//기능 구현에 필요한 멤버 변수
	//1. 좌표
	FVector2D CurrentLocation; //현재 위치
	

	//기능 구현에 필요한 멤버 함수
	int32 Step();
	void Move(int32 MoveCount);

};
