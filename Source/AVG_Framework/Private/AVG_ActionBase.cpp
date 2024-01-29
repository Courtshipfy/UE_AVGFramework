// Fill out your copyright notice in the Description page of Project Settings.


#include "AVG_Framework/Public/AVG_ActionBase.h"


// Sets default values
AAVG_ActionBase::AAVG_ActionBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAVG_ActionBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAVG_ActionBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

