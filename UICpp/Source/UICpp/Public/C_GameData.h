// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "C_GameData.generated.h"

/**
 * 
 */
UCLASS()
class UICPP_API UC_GameData : public USaveGame
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KGameData")
		TArray<FText> Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KGameData")
		TArray<float> Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KGameData")
		int64 Resolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KGameData")
		float Volume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KGameData")
		bool Restart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KGameData")
		FString Slot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KGameData")
		int64 Index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KGameData")
		FString Switch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KGameData")
		bool FirstStart;
};
