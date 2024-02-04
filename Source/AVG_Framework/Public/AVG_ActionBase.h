// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AVG_ActionBase.generated.h"

UCLASS()
class AVG_FRAMEWORK_API AAVG_ActionBase : public AActor
{
	GENERATED_BODY()

public:
	AAVG_ActionBase();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Action Base")
	FName ActionName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Action Base")
	float ActionIntervalTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Action Base")
	bool bCanSkip = true;
};
