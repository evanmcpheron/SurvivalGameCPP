// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Texture2D.h"
#include "SurvivalCPP/Enums/UArmorType.h"
#include "SurvivalCPP/Enums/UItemRarity.h"
#include "SurvivalCPP/Enums/UItemType.h"
#include "SurvivalCPP/Items/ItemMaster.h"
#include "ItemInfo.generated.h"

/**
 * 
 */
UCLASS()
class UItemInfo : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	int32 ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	UTexture2D* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	FText ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	FText ItemDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	UItemRarity ItemRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	bool bStackable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	int32 MaxStackSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	UItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	TSoftObjectPtr<AItemMaster> ItemClassRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	UArmorType ArmorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	bool bUsesAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	int32 ItemCurrentHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	int32 ItemMaxHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	int32 ItemCurrentAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	int32 ItemMaxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	float ItemWeight;
};
