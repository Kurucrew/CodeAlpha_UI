// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Level.h"

void AC_Level::BeginPlay()
{
	Super::BeginPlay();
	ALevelSequenceActor* OutActor = nullptr;
	Intro = ULevelSequencePlayer::CreateLevelSequencePlayer(GetWorld(), IntroLS, FMovieSceneSequencePlaybackSettings(), OutActor);
	Title = ULevelSequencePlayer::CreateLevelSequencePlayer(GetWorld(), TitleLS, FMovieSceneSequencePlaybackSettings(), OutActor);
}