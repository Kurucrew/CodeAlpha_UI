// Fill out your copyright notice in the Description page of Project Settings.


#include "WPC_HitPoint.h"

void UWPC_HitPoint::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	HPMax->TextDelegate.BindDynamic(this, &UWPC_HitPoint::BindHPMax);
	HPNow->TextDelegate.BindDynamic(this, &UWPC_HitPoint::BindHPNow);
}

FText UWPC_HitPoint::BindHPMax()
{
	FText ret = FText::AsNumber(HMaxVal);
	return ret;
}

FText UWPC_HitPoint::BindHPNow()
{
	FText ret = FText::AsNumber(HNowVal);
	return ret;
}

bool UWPC_HitPoint::HPFillChange()
{
	if (HOldVal > HNowVal)//���� ü���� ���� ü�º��� ������ �ߵ�(���� ü�� ȸ�� ����� ���)
	{
		//���� ü���� �ִ� ü������ ������ ���α׷��� �ٿ� ����
		float val = (double)HNowVal / (double)HMaxVal;
		FillFront->SetPercent(val);
	}

	if (HNowVal <= 0)
	{
		return true;
	}
	else
	{
		//�ǰ��� 0.8���̳��� ���� ��� �ǰ��� ������ �����ϱ� ���� ��Ʈ���� �����̸� ���
		FLatentActionInfo LAM(1,1,L"HitLam",this);
		Hit = true;
		UKismetSystemLibrary::RetriggerableDelay(this, 0.8f, LAM);
		return false;
	}
}

void UWPC_HitPoint::EnergyFillChange()
{
	//���� �������� �ִ� �������� ������ ���α׷��� �ٿ� ����
		float val = (double)ENowVal / (double)EMaxVal;
		FillEnergy->SetPercent(val);
}

void UWPC_HitPoint::HitLAM()
{
	Hit = false;
	FLatentActionInfo DLAM(2, 2, L"HitDelay", this);
	if (FillBack->Percent > (double)HNowVal / (double)HMaxVal)
	{
		//ü�� ���ҿ� �����̸� �� �ε巯�� ����ȿ���� ����
		UKismetSystemLibrary::Delay(this, 0.005f, DLAM);
	}
}

void UWPC_HitPoint::HitDelay()
{
	float val = (double)(HOldVal - 1) / (double)HMaxVal;
	FillBack->SetPercent(val);
	HOldVal = HOldVal - 1;
	//ü�°��� ǥ���� �ǰ��� �Ͼ�� �ߴ�
	if (Hit == false)
	{
		HitLAM();
	}
}