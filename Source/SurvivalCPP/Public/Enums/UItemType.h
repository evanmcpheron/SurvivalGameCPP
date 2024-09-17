// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class UItemType: uint8
{
	Resource UMETA(DisplayName = "Resource"),
	Equipable UMETA(DisplayName = "Equipable"),
	Armor UMETA(DisplayName = "Armor"),
	Consumable UMETA(DisplayName = "Consumeable"),
	Buildable UMETA(DisplayName = "Buildable")
};
