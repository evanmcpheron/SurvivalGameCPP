// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "../DataAssets/ItemInfo.h"
#include "FItem.generated.h"

USTRUCT(BlueprintType)
struct FItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 ItemQuantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 CurrentHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 MaxHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 CurrentAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 MaxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 StackSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TSoftObjectPtr<UItemInfo> ItemInfo;
};
