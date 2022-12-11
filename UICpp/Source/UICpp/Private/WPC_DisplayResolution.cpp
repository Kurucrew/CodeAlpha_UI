// Fill out your copyright notice in the Description page of Project Settings.


#include "WPC_DisplayResolution.h"

void UWPC_DisplayResolution::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	//이벤트에 함수를 연결
	ComboBoxString->OnSelectionChanged.AddUniqueDynamic(this, &UWPC_DisplayResolution::OnSelectionChangedDelegate);
	
}

void UWPC_DisplayResolution::OnSelectionChangedDelegate(FString Item, ESelectInfo::Type Type)
{
	FString LeftS;
	FString RightS;
	const FString InS = "X";
	Item.Split(InS, &LeftS, &RightS);//콤보박스에 적힌 해상도를 문자 X를 기준으로 분할
	//분할된 문자를 각각 정수형으로 형변환
	int X = FCString::Atoi(*LeftS);
	int Y = FCString::Atoi(*RightS);
	//변환된 정수를 정수포인트로 생성
	FIntPoint IP(X, Y);
	//정수 포인트를 이용하여 해상도 변경
	GEngine->GameUserSettings->SetScreenResolution(IP);
}