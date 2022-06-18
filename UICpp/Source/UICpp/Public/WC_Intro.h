// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LevelSequence.h"
#include "MovieSceneSequencePlayer.h"
#include "LevelSequencePlayer.h"
#include "WPC_Button.h"
#include "WC_Intro.generated.h"

/**
 * 
 */

UCLASS()
class UICPP_API UWC_Intro : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//버튼 객체 바인딩
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidget))
		UWPC_Button* WP_Button_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidget))
		UWPC_Button* WP_Button_2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidget))
		UWPC_Button* WP_Button_3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidget))
		UWPC_Button* WP_Button_4;

	//버튼 이름 배열
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro")
		TArray<FText> BTextArr;

	//위젯 애니메이션 바인딩
	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidgetAnim))
		UWidgetAnimation* Loop;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidgetAnim))
		UWidgetAnimation* Intro;

	//레벨 시퀀스
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro")
		ULevelSequencePlayer* LS;

	void NativeOnInitialized() override;
	
	UFUNCTION()
		void SetBT();

	UFUNCTION(BlueprintCallable, Category = "KIntro")
		void BindStart();

	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = "KIntro")
		void LS_Even();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "KIntro")
	void ShowEvent();

	UFUNCTION(BlueprintCallable, Category = "KIntro")
	void Show();

	UFUNCTION(BlueprintCallable, Category = "KIntro")
		void Hide();

	UFUNCTION(BlueprintCallable, Category = "KIntro")
		void GameStart();
};
