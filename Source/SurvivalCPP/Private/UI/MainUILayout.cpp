// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalCPP/Public/UI/MainUILayout.h"

void UMainUILayout::PushDefaultHUDLayout(UCommonActivatableWidgetStack* Target,
                                         TSubclassOf<UCommonActivatableWidget> DefaultLayout)
{
	if (DefaultLayout && Target)
	{
		UCommonActivatableWidget* WidgetInstance = CreateWidget<UCommonActivatableWidget>(GetWorld(), DefaultLayout);
		if (WidgetInstance)
		{
			Target->AddWidget(DefaultLayout);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("DefaultLayout or Target is null"));
	}
}
