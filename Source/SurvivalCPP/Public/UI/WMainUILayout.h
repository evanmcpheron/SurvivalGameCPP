#pragma once

#include "CoreMinimal.h"
#include "CommonUI/Public/Widgets/CommonActivatableWidgetContainer.h"
#include "CommonUI/Public/CommonActivatableWidget.h"
#include "WMainUILayout.generated.h"

UCLASS(Blueprintable)
class UWMainUILayout : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "MainUILayout")
	void PushHUDLayout(UCommonActivatableWidgetStack* Target,
	                   TSubclassOf<UCommonActivatableWidget> DefaultLayout);
};
