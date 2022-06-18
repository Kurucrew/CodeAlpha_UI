// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LevelSequence.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlayer.h"
#include "Blueprint/UserWidget.h"
#include "UICpp/Public/WC_Intro.h"
#include "Kismet/GameplayStatics.h"
#include "C_PlayerController.generated.h"

/**
 * 
 */


UCLASS(BlueprintType)
class UICPP_API AC_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	
	//UI레퍼런스
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "KUICon")
	class UUserWidget* UIRef;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "KUICon")
	TSubclassOf<class UWC_Intro> IntroClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "KUICon")
		class UWC_Intro* IntroRef;

	//UI의 표시
	UFUNCTION(BlueprintCallable, Category = "KUICon")
	void OpenUI();

	UFUNCTION(BlueprintCallable, Category = "KUICon")
		void CloseUI();


	//마우스 커서의 표시
	UFUNCTION(BlueprintCallable, Category = "KUICon")
		void HideMouse();

	UFUNCTION(BlueprintCallable, Category = "KUICon")
		void ShowMouse();

	UFUNCTION()
	void BeginPlay()override;

	UFUNCTION(BlueprintCallable, Category = "KUICon")
		UUserWidget* WidgetInit(FString path);

};
