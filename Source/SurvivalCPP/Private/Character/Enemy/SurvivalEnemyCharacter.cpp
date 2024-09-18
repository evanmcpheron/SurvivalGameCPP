// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Enemy/SurvivalEnemyCharacter.h"

#include "AbilitySystem/SurvivalAbilitySystemComponent.h"

void ASurvivalEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

ASurvivalEnemyCharacter::ASurvivalEnemyCharacter()
{
	AbilitySystemComponent = CreateDefaultSubobject<USurvivalAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);


	AttributeSet = CreateDefaultSubobject<UAttributeSet>("AttributeSet");
}
