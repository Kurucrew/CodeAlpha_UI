// Fill out your copyright notice in the Description page of Project Settings.


#include "C_PlayerController.h"

void AC_PlayerController::OpenUI()
{
	
	/*FInputModeUIOnly IMod;
	IMod.SetWidgetToFocus(UIRef->GetCachedWidget());*/
	SetInputMode(FInputModeUIOnly());//UI가 켜져있을 경우 UI입력만 받음
	UIRef->SetVisibility(ESlateVisibility::Visible);
}

void AC_PlayerController::CloseUI()
{
	UIRef->SetVisibility(ESlateVisibility::Collapsed);
}

void AC_PlayerController::HideMouse()
{
	AC_PlayerController::bShowMouseCursor = false;
	SetInputMode(FInputModeGameOnly());
}

void AC_PlayerController::ShowMouse()
{
	AC_PlayerController::bShowMouseCursor = true;
}

void AC_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	IntroRef = Cast<UWC_Intro>(WidgetInit("UUserWidget'/UI/HUD/WB_Intro.WB_Intro_C'"));
}

UUserWidget* AC_PlayerController::WidgetInit(FString path)
{
	FSoftClassPath classref(path);
	IntroClass = classref.TryLoadClass<UUserWidget>();
	UUserWidget* NewWidget = CreateWidget<UUserWidget>(GetWorld(), IntroClass);
	NewWidget->AddToViewport();
	NewWidget->SetVisibility(ESlateVisibility::Collapsed);
	return NewWidget;
}