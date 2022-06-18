// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/KismetSystemLibrary.h"
#include "WPC_HitPoint.generated.h"

/**
 * 
 */
UCLASS()
class UICPP_API UWPC_HitPoint : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint", meta = (BindWidget))
		UProgressBar* FillBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint", meta = (BindWidget))
		UProgressBar* FillFront;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint", meta = (BindWidget))
		UProgressBar* FillEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint", meta = (BindWidget))
		UTextBlock* HPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint", meta = (BindWidget))
		UTextBlock* HPNow;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, Category = "KHitPoint", meta = (BindWidgetAnim))
		UWidgetAnimation* HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint")
		int32 HMaxVal = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint")
		int32 HNowVal = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint")
		int32 HOldVal = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint")
		int32 EMaxVal = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint")
		int32 ENowVal = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KHitPoint")
		bool Hit = false;

	void NativeOnInitialized() override;

	// 체력 변수와 HUD의 텍스트 연동 함수
	UFUNCTION()
		FText BindHPMax();

	UFUNCTION()
		FText BindHPNow();

	UFUNCTION()
		void HitLAM();

	UFUNCTION()
		void HitDelay();

	//체력이 변할때 호출됨
	UFUNCTION(BlueprintCallable, Category = "KHitPoint")
		bool HPFillChange();
	//에너지가 변할때 호출됨
	UFUNCTION(BlueprintCallable, Category = "KHitPoint")
		void EnergyFillChange();
};
