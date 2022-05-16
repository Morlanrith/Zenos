// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicEnemy.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>

// Sets default values
ABasicEnemy::ABasicEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABasicEnemy::HitReaction(FVector backwardsVelocity) {
	UGameplayStatics::PlaySound2D(this->GetWorld(),this->HitSound);
	this->LaunchCharacter(backwardsVelocity,false,false);
}
