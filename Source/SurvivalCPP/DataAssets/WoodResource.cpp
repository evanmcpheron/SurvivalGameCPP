// Fill out your copyright notice in the Description page of Project Settings.

#include "WoodResource.h"

UWoodResource::UWoodResource()
{
	
	ItemID = 1;
	ItemIcon = LoadObject<UTexture2D>(
		nullptr, TEXT("/Game/SurvivalCPP/Textures/CraftResourcesIcons/Items/Tex_wood_10_b.Tex_wood_10_b"));
	ItemName = FText::FromString("Wood");
	ItemDescription = FText::FromString("A resource used for crafting.");
	ItemRarity = UItemRarity::Common;
	bStackable = true;
	MaxStackSize = 50;
	ItemType = UItemType::Resource;
	ItemWeight = 2.0f;
}
