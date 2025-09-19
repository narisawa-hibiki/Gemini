// Fill out your copyright notice in the Description page of Project Settings.


#include "Kanda/MagicDataTable.h"
#include "Math/RandomStream.h"
#include "Kismet/KismetSystemLibrary.h"

MagicDataTable::MagicDataTable(
	int m_, 
	TArray<UNiagaraSystem*> f_,
	TArray<UNiagaraSystem*> d_
):
	magicCnt(m_),
	cntMax(0),
	flyNs(f_),
	deathNs(d_)
{
	// �����_���̏���������

	for (int i = 0; i < magicCnt; i++)
	{
		const int fmax = flyNs.Num() - 1;
		const int dmax = deathNs.Num() - 1;

		// �����_��
		const int frand = FMath::RandRange(0, fmax);
		const int drand = FMath::RandRange(0, dmax);

		// �Ղ���o�b�N
		flyRand.Add(frand);
		deathRand.Add(drand);

		cntMax++;
	}
}

MagicDataTable::~MagicDataTable() {

	// pass

	// �e�X�g�p�̃��O
	UKismetSystemLibrary::PrintString(GEngine->GetWorld(), "Data delete");
}

bool MagicDataTable::DecMagicCnt() {

	if (magicCnt - 1 <= 0) { return true; }

	// �J�E���^�[�����炷
	this->magicCnt--;

	return false;
}

int MagicDataTable::GetMagicCnt() {

	// ��O����
	if (cntMax == 0) {

		flyNs.Insert(nullptr, 0);
		flyRand.Add(0);
		deathNs.Insert(nullptr, 0);
		deathRand.Add(0);
		UKismetSystemLibrary::PrintString(GEngine->GetWorld(), "magicCnt is Invalid value");
	}

	// ���݂̃J�E���^�[���牽�Ԗڂ̔z�񂩎擾
	int cnt = cntMax - magicCnt;

	return cnt;
}

UNiagaraSystem* MagicDataTable::GetRandFlyNiagaraSystem(const int cnt) {

	UNiagaraSystem* ns;
	
	if (flyNs.Num() == 0) { 

		ns = nullptr;
		UKismetSystemLibrary::PrintString(GEngine->GetWorld(), "flyNs is non");
	}
	else {

		const int c = flyRand[cnt];
		ns = flyNs[c];
	}
	
	return ns;
}

UNiagaraSystem* MagicDataTable::GetRandDeathNiagaraSystem(const int cnt) {

	UNiagaraSystem* ns;

	if (deathNs.Num() == 0) {

		ns = nullptr;
		UKismetSystemLibrary::PrintString(GEngine->GetWorld(), "desthNs is non");
	}
	else {

		const int c = deathRand[cnt];
		ns = deathNs[c];
	}

	return ns;
}

UNiagaraSystem* MagicDataTable::GetFlyNiagaraSystem(const int arr) {

	UNiagaraSystem* ns;

	if (flyNs.Num() == 0) {

		ns = nullptr;
		UKismetSystemLibrary::PrintString(GEngine->GetWorld(), "flyNs is non");
	}
	else {

		ns = flyNs[arr];
	}

	return ns;
}

UNiagaraSystem* MagicDataTable::GetDeathNiagaraSystem(const int arr) {

	UNiagaraSystem* ns;

	if (deathNs.Num() == 0) {

		ns = nullptr;
		UKismetSystemLibrary::PrintString(GEngine->GetWorld(), "flyNs is non");
	}
	else {

		ns = deathNs[arr];
	}

	return ns;
}
