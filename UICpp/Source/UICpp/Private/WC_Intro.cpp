// Fill out your copyright notice in the Description page of Project Settings.


#include "WC_Intro.h"
#include "UICpp/Public/C_PlayerController.h"

void UWC_Intro::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	SetBT();
	SetKeyboardFocus();
	//버튼클릭 이벤트 바인딩
	WP_Button_1->Button->OnClicked.AddUniqueDynamic(this, &UWC_Intro::BindStart);
}

void UWC_Intro::SetBT()//배열의 값을 버튼에 할당
{
	WP_Button_1->RetText = BTextArr[0];
	WP_Button_2->RetText = BTextArr[1];
	WP_Button_3->RetText = BTextArr[2];
	WP_Button_4->RetText = BTextArr[3];
}

void UWC_Intro::BindStart()
{
	//루프 애니메이션 정지, 인트로 애니메이션 역재생
	StopAnimation(Loop);
	PlayAnimation(Intro, 0, 1, EUMGSequencePlayMode::Reverse);

	//레벨 시퀀스 실행
	LS->Play();

	//레벨 시퀀스 종료 시 이벤트 바인딩
	LS->OnFinished.AddUniqueDynamic(this, &UWC_Intro::LS_Even);
}

void UWC_Intro::Show()
{
	//플레이어 컨트롤러로의 접근
	AC_PlayerController* PCon = (AC_PlayerController*)UGameplayStatics::GetPlayerController(GetWorld(),0);
	PCon->UIRef = this;//컨트롤러가 조작할 현재 ui를 자신으로 할당
	PCon->OpenUI();
	PlayAnimation(Intro, 0, 1, EUMGSequencePlayMode::Forward);
	PCon->ShowMouse();
	//타이머 핸들을 생성해 함수 실행 지연
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