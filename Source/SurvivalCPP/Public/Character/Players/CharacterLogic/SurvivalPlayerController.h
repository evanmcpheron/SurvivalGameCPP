#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Character/ALSPlayerController.h"
#include "UI/WMainUILayout.h"
#include "SurvivalPlayerController.generated.h"

UCLASS(Blueprintable, BlueprintType)
class ASurvivalPlayerController : public AALSPlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MainUILayout")
	TObjectPtr<UWMainUILayout> MainUILayoutRef;

protected:

private:
};
