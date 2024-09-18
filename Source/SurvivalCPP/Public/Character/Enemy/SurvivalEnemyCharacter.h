// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/SurvivalCharacterBase.h"
#include "SurvivalEnemyCharacter.generated.h"

UCLASS()
class SURVIVALCPP_API ASurvivalEnemyCharacter : public ASurvivalCharacterBase
{
	GENERATED_BODY()

public:
	ASurvivalEnemyCharacter();

protected:
	virtual void BeginPlay() override;
};
