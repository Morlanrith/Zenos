// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicEnemy.h"
#include "GameFramework/Actor.h"
#include "VisionOrb.generated.h"

UCLASS()
class ZENOS_API AVisionOrb : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVisionOrb();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<ABasicEnemy*> CurrentEnemies;
	UFUNCTION(BlueprintCallable)
		ABasicEnemy* FindClosestEnemy(FVector playerLocation);
};
