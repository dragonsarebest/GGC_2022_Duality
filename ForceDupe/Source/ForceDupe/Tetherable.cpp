// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetherable.h"

// Sets default values
ATetherable::ATetherable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	My_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My_Mesh"));
	RootComponent = My_Mesh;

	hitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("hitbox"));
}

// Called when the game starts or when spawned
void ATetherable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATetherable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

