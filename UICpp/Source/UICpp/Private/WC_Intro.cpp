// Fill out your copyright notice in the Description page of Project Settings.


#include "WC_Intro.h"
#include "UICpp/Public/C_PlayerController.h"

void UWC_Intro::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	SetBT();
	SetKeyboardFocus();
	//��ưŬ�� �̺�Ʈ ���ε�
	WP_Button_1->Button->OnClicked.AddUniqueDynamic(this, &UWC_Intro::BindStart);
}

void UWC_Intro::SetBT()//�迭�� ���� ��ư�� �Ҵ�
{
	WP_Button_1->RetText = BTextArr[0];
	WP_Button_2->RetText = BTextArr[1];
	WP_Button_3->RetText = BTextArr[2];
	WP_Button_4->RetText = BTextArr[3];
}

void UWC_Intro::BindStart()
{
	//���� �ִϸ��̼� ����, ��Ʈ�� �ִϸ��̼� �����
	StopAnimation(Loop);
	PlayAnimation(Intro, 0, 1, EUMGSequencePlayMode::Reverse);

	//���� ������ ����
	LS->Play();

	//���� ������ ���� �� �̺�Ʈ ���ε�
	LS->OnFinished.AddUniqueDynamic(this, &UWC_Intro::LS_Even);
}

void UWC_Intro::Show()
{
	//�÷��̾� ��Ʈ�ѷ����� ����
	AC_PlayerController* PCon = (AC_PlayerController*)UGameplayStatics::GetPlayerController(GetWorld(),0);
	PCon->UIRef = this;//��Ʈ�ѷ��� ������ ���� ui�� �ڽ����� �Ҵ�
	PCon->OpenUI();
	PlayAnimation(Intro, 0, 1, EUMGSequencePlayMode::Forward);
	PCon->ShowMouse();
	//Ÿ�̸� �ڵ��� ������ �Լ� ���� ����
	FTimerHandle LDHandle;
	GetWorld()->GetTimerManager().SetTimer(LDHandle, [&]()
		{
			PlayAnimation(Loop, 0, 0, EUMGSequencePlayMode::Forward);
		}, 1, false);
}

void UWC_Intro::Hide()
{
	AC_PlayerController* PCon = (AC_PlayerController*)UGameplayStatics::GetPlayerController(GetWorld(), 0);
	PCon->CloseUI();
	PCon->HideMouse();
}

void UWC_Intro::GameStart()
{
	AC_PlayerController* PCon = (AC_PlayerController*)UGameplayStatics::GetPlayerController(GetWorld(), 0);
	PCon->SetViewTargetWithBlend((AActor*)UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}