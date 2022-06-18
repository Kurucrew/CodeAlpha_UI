// Fill out your copyright notice in the Description page of Project Settings.


#include "WPC_Button.h"

void UWPC_Button::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	//이벤트에 함수를 연결
	Button->OnHovered.AddUniqueDynamic(this, &UWPC_Button::HoverDelegate);
	Button->OnUnhovered.AddUniqueDynamic(this, &UWPC_Button::UnhoverDelegate);
	//텍스트를 텍스트블록에 바인딩
	ButtonText->TextDelegate.BindDynamic(this, &UWPC_Button::BindButtonText);
}

FText UWPC_Button::BindButtonText()
{
	//택스트 변수의 값을 택스트 블록에 설정
	return RetText;
}

void UWPC_Button::ChangeBTextColor(FLinearColor Color)
{
	//선형 컬러를 받아와 버튼 택스트의 색 변경
	FSlateColor SColor(Color);
	ButtonText->SetColorAndOpacity(SColor);
}

//마우스 호버와 비호버시 지정한 색상의 선형 컬러를 넘겨줌
void UWPC_Button::HoverDelegate()
{
	LColor = FLinearColor(1, 1, 1, 0.5f);
	ChangeBTextColor(LColor);
}

void UWPC_Button::UnhoverDelegate()
{
	LColor = FLinearColor(1, 1, 1, 1);
	ChangeBTextColor(LColor);
}