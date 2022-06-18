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
	//UMG 위젯에 연동
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KButton", meta = (BindWidget))
		class UButton* Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KButton", meta = (BindWidget))
		class UTextBlock* ButtonText;

	//버튼의 이름을 설정하는 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KButton")
	FText RetText;

	//버튼 택스트의 색을 지정할 선형 컬러
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KButton")
		FLinearColor LColor;

	//초기화 함수
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