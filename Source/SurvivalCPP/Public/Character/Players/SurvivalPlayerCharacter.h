// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/SurvivalCharacterBase.h"
#include "SurvivalPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALCPP_API ASurvivalPlayerCharacter : public ASurvivalCharacterBase
{
	GENERATED_BODY()

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilityActorInfo();
};
