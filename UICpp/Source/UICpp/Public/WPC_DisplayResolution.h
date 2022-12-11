// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ComboBoxString.h"
#include "GameFramework/GameUserSettings.h"
#include "WPC_DisplayResolution.generated.h"

/**
 * 
 */
UCLASS()
class UICPP_API UWPC_DisplayResolution : public UUserWidget
{
	GENERATED_BODY()	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KDisplay", meta = (BindWidget))
		class UComboBoxString* ComboBoxString;

	UFUNCTION()
		void OnSelectionChangedDelegate(FString Item, ESelectInfo::Type Type);
	//초기화 함수
	void NativeOnInitialized()override;
};
