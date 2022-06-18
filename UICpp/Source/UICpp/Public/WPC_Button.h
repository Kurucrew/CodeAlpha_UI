// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "WPC_Button.generated.h"

/**
 * 
 */
UCLASS(BluePrintable)
class UICPP_API UWPC_Button : public UUserWidget
{
	GENERATED_BODY()
public:
	//UMG ������ ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KButton", meta = (BindWidget))
		class UButton* Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KButton", meta = (BindWidget))
		class UTextBlock* ButtonText;

	//��ư�� �̸��� �����ϴ� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KButton")
	FText RetText;

	//��ư �ý�Ʈ�� ���� ������ ���� �÷�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KButton")
		FLinearColor LColor;

	//�ʱ�ȭ �Լ�
	void NativeOnInitialized()override;

	UFUNCTION(BlueprintCallable, Category = "KButton")
		void ChangeBTextColor(FLinearColor Color);

	UFUNCTION()
	void HoverDelegate();

	UFUNCTION()
		void UnhoverDelegate();

	UFUNCTION()
		FText BindButtonText();

};