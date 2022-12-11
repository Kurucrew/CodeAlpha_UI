// Fill out your copyright notice in the Description page of Project Settings.


#include "WPC_Complete.h"
#include "C_PlayerController.h"

void UWPC_Complete::Save(FText Name, float ClearTime, FString SlotName)
{
	//게임 데이터를 불러옴
	GameData = Cast<UC_GameData>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	//클리어타임과 이름을 배열에 추가
	GameData->Time.Add(ClearTime);
	GameData->Name.Add(Name);
	//배열을 뒤에서 부터 돌며 클리어 타임이 짧은 순으로 정렬
	for (int i = GameData->Time.Num(); i == 0; i--)
	{
		if (GameData->Time[i] <= GameData->Time[i - 1])
		{
			GameData->Time.Swap(i - 1, i);
			GameData->Name.Swap(i - 1, i);
			break;
		}
	}
	//배열 길이가 10 이상일 경우 배열 길이를 재설정
	if (GameData->Time.Num() >= 10 || GameData->Name.Num() >= 10)
	{
		GameData->Time.SetNum(10);
		GameData->Name.SetNum(10);
	}
	//게임 데이터를 저장
	UGameplayStatics::SaveGameToSlot(GameData, SlotName, 0);

	AC_PlayerController* PCon = (AC_PlayerController*)UGameplayStatics::GetPlayerController(GetWorld(), 0);
	PCon->HideMouse();
	UGameplayStatics::OpenLevel(this, "AlphaMap");
}