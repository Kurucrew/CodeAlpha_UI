// Fill out your copyright notice in the Description page of Project Settings.


#include "WPC_DisplayResolution.h"

void UWPC_DisplayResolution::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	//�̺�Ʈ�� �Լ��� ����
	ComboBoxString->OnSelectionChanged.AddUniqueDynamic(this, &UWPC_DisplayResolution::OnSelectionChangedDelegate);
	
}

void UWPC_DisplayResolution::OnSelectionChangedDelegate(FString Item, ESelectInfo::Type Type)
{
	FString LeftS;
	FString RightS;
	const FString InS = "X";
	Item.Split(InS, &LeftS, &RightS);//�޺��ڽ��� ���� �ػ󵵸� ���� X�� �������� ����
	//���ҵ� ���ڸ� ���� ���������� ����ȯ
	int X = FCString::Atoi(*LeftS);
	int Y = FCString::Atoi(*RightS);
	//��ȯ�� ������ ��������Ʈ�� ����
	FIntPoint IP(X, Y);
	//���� ����Ʈ�� �̿��Ͽ� �ػ� ����
	GEngine->GameUserSettings->SetScreenResolution(IP);
}