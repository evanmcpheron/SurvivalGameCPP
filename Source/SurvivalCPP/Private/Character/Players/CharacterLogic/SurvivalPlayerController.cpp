// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivalCPP/Public/Character/Players/CharacterLogic/SurvivalPlayerController.h"
#include "SurvivalCPP/Public/UI/MainUILayout.h"
#include "SurvivalCPP/Public/UI/HUD/DefaultHUDLayout.h"


void ASurvivalPlayerController::BeginPlay()
{
	Super::BeginPlay();
	SwitchOnPlayerLocale();
}


void ASurvivalPlayerController::SwitchOnPlayerLocale()
{
	if (HasAuthority())
	{
		SwitchIsLocalPlayerController();
	}
	else
	{
		RenderPlayerHUD();
	}
}

void ASurvivalPlayerController::RenderPlayerHUD()
{
	UMainUILayout* MainUILayoutRef = NewObject<UMainUILayout>(this);
	MainUILayoutRef->AddToViewport();
	MainUILayoutRef->PushDefaultHUDLayout(MainUILayoutRef, UDefaultHUDLayout);
}

void ASurvivalPlayerController::SwitchIsLocalPlayerController()
{
	if (IsLocalPlayerController())
	{
		RenderPlayerHUD();
	}
}
