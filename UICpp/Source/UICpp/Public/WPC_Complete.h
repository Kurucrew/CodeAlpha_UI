// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "C_GameData.h"
#include "Kismet/GameplayStatics.h"
#include "WPC_Complete.generated.h"

/**
 * 
 */
UCLASS()
class UICPP_API UWPC_Complete : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KSave")
		class UC_GameData* GameData;

	UFUNCTION(BlueprintCallable, Category = "KSave")
		void Save(FText Name, float ClearTime, FString SlotName);
};
