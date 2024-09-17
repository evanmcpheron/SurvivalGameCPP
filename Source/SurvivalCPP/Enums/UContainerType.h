// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class UContainerType: uint8
{
	Invnetory UMETA(DisplayName = "Inventory"),
	Hotbar UMETA(DisplayName = "Hotbar"),
	Storage UMETA(DisplayName = "Storage"),
	Armor UMETA(DisplayName = "Armor")
};
