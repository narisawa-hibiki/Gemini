// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"

/**
 * ���@���΂��f�[�^�N���X
 */
class MAGIC_PROJECT_API MagicDataTable
{
public:

	// �R���X�g���N�^
	MagicDataTable(
		int m_,						// �J�E���^�[�̏�����
		TArray<UNiagaraSystem*> f_, // ��ԂƂ��̃G�t�F�N�g�̔z��
		TArray<UNiagaraSystem*> d_  // �j�󂵂��Ƃ��̃G�t�F�N�g�̔z��
	);

	// �f�X�X�g���N�^
	~MagicDataTable();

private:

	int							magicCnt;			// �J�E���^�[
	int							cntMax;				// �J�E���^�[�̍ő�l
	TArray<int>					flyRand;			// ������ۑ�����z��
	TArray<int>					deathRand;			// ������ۑ�����z��
	TArray<UNiagaraSystem*>		flyNs;				// ��ԂƂ��̃G�t�F�N�g�̃|�C���^
	TArray<UNiagaraSystem*>		deathNs;			// �j�󂵂��Ƃ��̃G�t�F�N�g�̃|�C���^

public:

	// �J�E���^�[�����炷
	bool DecMagicCnt();

	// �J�E���^�[���擾
	int GetMagicCnt();

	// �����_���Ȕ�ԃG�t�F�N�g�𑗂�
	UNiagaraSystem* GetRandFlyNiagaraSystem(const int cnt);

	// �����_���Ȕj��G�t�F�N�g�𑗂�
	UNiagaraSystem* GetRandDeathNiagaraSystem(const int cnt);

	// �w�肵���z��̔�ԃG�t�F�N�g�𑗂�
	UNiagaraSystem* GetFlyNiagaraSystem(const int arr);

	// �w�肵���z��̔j��G�t�F�N�g�𑗂�
	UNiagaraSystem* GetDeathNiagaraSystem(const int arr);
};
