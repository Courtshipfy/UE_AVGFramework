// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CoreDefine.generated.h"

USTRUCT()
struct FActionParam
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ActionParam")
	FText caption;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ActionParam")
	float duration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ActionParam")
	FTimespan captionSpan;
};