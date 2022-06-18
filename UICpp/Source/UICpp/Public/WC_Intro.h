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
	//��ư ��ü ���ε�
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidget))
		UWPC_Button* WP_Button_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidget))
		UWPC_Button* WP_Button_2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidget))
		UWPC_Button* WP_Button_3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidget))
		UWPC_Button* WP_Button_4;

	//��ư �̸� �迭
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KIntro")
		TArray<FText> BTextArr;

	//���� �ִϸ��̼� ���ε�
	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidgetAnim))
		UWidgetAnimation* Loop;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, Category = "KIntro", meta = (BindWidgetAnim))
		UWidgetAnimation* Intro;

	//���� ������
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
