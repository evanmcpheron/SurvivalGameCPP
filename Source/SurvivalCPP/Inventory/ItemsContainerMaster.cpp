// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemsContainerMaster.h"

// Sets default values for this component's properties
UItemsContainerMaster::UItemsContainerMaster()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


int32 UItemsContainerMaster::FindEmptySlot()
{
	for (int32 Index = 0; Index < Items.Num(); Index++)
	{
		if (Items[Index].ItemID == 0)
		{
			return Index;
		}
	}
	return -1;
}

bool UItemsContainerMaster::AddItem(FItem ItemToAdd)
{
	int32 EmptySlot = FindEmptySlot();
	if (EmptySlot != -1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit Here"));

		Items[EmptySlot] = ItemToAdd;
		return true;
	}
	return false;
}

bool UItemsContainerMaster::Server_AddItem_Validate(FItem ItemToAdd)
{
	return true;
}

void UItemsContainerMaster::Server_AddItem_Implementation(FItem ItemToAdd)
{
	AddItem(ItemToAdd);
	UE_LOG(LogTemp, Warning, TEXT("Server_AddItem_Implementation, %d"), Items.Num());
}
