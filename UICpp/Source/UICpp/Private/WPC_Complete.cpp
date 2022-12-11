// Fill out your copyright notice in the Description page of Project Settings.


#include "WPC_Complete.h"
#include "C_PlayerController.h"

void UWPC_Complete::Save(FText Name, float ClearTime, FString SlotName)
{
	//���� �����͸� �ҷ���
	GameData = Cast<UC_GameData>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	//Ŭ����Ÿ�Ӱ� �̸��� �迭�� �߰�
	GameData->Time.Add(ClearTime);
	GameData->Name.Add(Name);
	//�迭�� �ڿ��� ���� ���� Ŭ���� Ÿ���� ª�� ������ ����
	for (int i = GameData->Time.Num(); i == 0; i--)
	{
		if (GameData->Time[i] <= GameData->Time[i - 1])
		{
			GameData->Time.Swap(i - 1, i);
			GameData->Name.Swap(i - 1, i);
			break;
		}
	}
	//�迭 ���̰� 10 �̻��� ��� �迭 ���̸� �缳��
	if (GameData->Time.Num() >= 10 || GameData->Name.Num() >= 10)
	{
		GameData->Time.SetNum(10);
		GameData->Name.SetNum(10);
	}
	//���� �����͸� ����
	UGameplayStatics::SaveGameToSlot(GameData, SlotName, 0);

	AC_PlayerController* PCon = (AC_PlayerController*)UGameplayStatics::GetPlayerController(GetWorld(), 0);
	PCon->HideMouse();
	UGameplayStatics::OpenLevel(this, "AlphaMap");
}