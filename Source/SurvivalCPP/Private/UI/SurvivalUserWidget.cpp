// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SurvivalUserWidget.h"

void USurvivalUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}