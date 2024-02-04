// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AVGFrameWork_PlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActionDelegate);

UCLASS()
class AVG_FRAMEWORK_API AAVGFrameWork_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable)
	FActionDelegate ClickAction;
	
};
