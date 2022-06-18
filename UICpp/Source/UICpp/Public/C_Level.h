// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "LevelSequence.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlayer.h"
#include "C_PlayerController.h"
#include "C_Level.generated.h"

/**
 * 
 */
UCLASS(BluePrintable)
class UICPP_API AC_Level : public ALevelScriptActor
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KLevel")
		ULevelSequencePlayer* Intro;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KLevel")
		ULevelSequencePlayer* Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KLevel")
		ULevelSequence* IntroLS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KLevel")
		ULevelSequence* TitleLS;

	void BeginPlay() override;
};