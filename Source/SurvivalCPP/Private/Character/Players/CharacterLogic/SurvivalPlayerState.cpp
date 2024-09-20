// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Players/CharacterLogic/SurvivalPlayerState.h"
#include "AbilitySystem/SurvivalAbilitySystemComponent.h"
#include "AbilitySystem/SurvivalAttributeSet.h"

ASurvivalPlayerState::ASurvivalPlayerState()
{
	NetUpdateFrequency = 100.0f;

	AbilitySystemComponent = CreateDefaultSubobject<USurvivalAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<USurvivalAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* ASurvivalPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
