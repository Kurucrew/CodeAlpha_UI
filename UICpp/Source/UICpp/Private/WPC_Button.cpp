// Fill out your copyright notice in the Description page of Project Settings.


#include "WPC_Button.h"

void UWPC_Button::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	//�̺�Ʈ�� �Լ��� ����
	Button->OnHovered.AddUniqueDynamic(this, &UWPC_Button::HoverDelegate);
	Button->OnUnhovered.AddUniqueDynamic(this, &UWPC_Button::UnhoverDelegate);
	//�ؽ�Ʈ�� �ؽ�Ʈ��Ͽ� ���ε�
	ButtonText->TextDelegate.BindDynamic(this, &UWPC_Button::BindButtonText);
}

FText UWPC_Button::BindButtonText()
{
	//�ý�Ʈ ������ ���� �ý�Ʈ ��Ͽ� ����
	return RetText;
}

void UWPC_Button::ChangeBTextColor(FLinearColor Color)
{
	//���� �÷��� �޾ƿ� ��ư �ý�Ʈ�� �� ����
	FSlateColor SColor(Color);
	ButtonText->SetColorAndOpacity(SColor);
}

//���콺 ȣ���� ��ȣ���� ������ ������ ���� �÷��� �Ѱ���
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