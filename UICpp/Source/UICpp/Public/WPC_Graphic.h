// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ComboBoxString.h"
#include "GameFramework/GameUserSettings.h"
#include "WPC_Graphic.generated.h"

/**
 * 
 */
UCLASS()
class UICPP_API UWPC_Graphic : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KDisplay", meta = (BindWidget))
	class UComboBoxString* ComboBoxString;

	UPROPERTY()
	TMap<FString, int> m;//�׷��� ������ �����ϴ� Ű�� ���

	UFUNCTION()
		void OnSelectionChangedDelegate(FString Item, ESelectInfo::Type Type);

	UFUNCTION()
		void Quality(int val);
	//�ʱ�ȭ �Լ�
	void NativeOnInitialized()override;
};
