// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadePrincipal.generated.h"

UCLASS()
class PVZLABB_API AFacadePrincipal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadePrincipal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
