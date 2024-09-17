// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class UArmorType:uint8
{
	NA UMETA(DisplayName = "N/A"),
	Head UMETA(DisplayName = "Head"),
	Shoulders UMETA(DisplayName = "Shoulders"),
	Chest UMETA(DisplayName = "Chest"),
	Backpack UMETA(DisplayName = "Backpack"),
	Hands UMETA(DisplayName = "Hands"),
	Legs UMETA(DisplayName = "Legs"),
	Feet UMETA(DisplayName = "Feet"),
};
