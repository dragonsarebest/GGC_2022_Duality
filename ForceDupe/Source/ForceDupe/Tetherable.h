// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#incldue "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Tetherable.generated.h"

UCLASS()
class FORCEDUPE_API ATetherable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATetherable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* My_Mesh;
	
	//UPROPERTY(EditAnywhere)
	//class UBoxComponent* hitbox;
};
