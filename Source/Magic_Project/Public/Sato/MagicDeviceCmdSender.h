// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ASerialLibControllerWin.h"
#include "HAL/Runnable.h"
#include "HAL/ThreadSafeCounter.h"
#include "ASerialCom/Public/ASerialLibControllerWin.h"
#include "ASerialCom/Public/ASerialCore/ASerialPacket.h"
#include "Templates/SharedPointer.h"


/**
 *
 */
class MAGIC_PROJECT_API FMagicDeviceCmdSender : public FRunnable
{	
public:	
	FMagicDeviceCmdSender();
	~FMagicDeviceCmdSender();

	// FRunnable�C���^�[�t�F�[�X�̎���
	virtual bool Init() override;          // �X���b�h�J�n���ɌĂ΂�鏉��������
	virtual uint32 Run() override;         // ���C�������i�X���b�h�̒��g�j
	virtual void Stop() override;          // ��~�v�����ɌĂ΂��
	virtual void Exit() override;          // �X���b�h�I�����O�ɌĂ΂��i�C�Ӂj

private:
	FThreadSafeCounter StopTaskCounter;    // �X���b�h��~�t���O�Ƃ��Ďg��

	// �f�o�C�X�p�ϐ�
	UPROPERTY()
	UASerialLibControllerWin* device_;

	UPROPERTY()
	UASerialPacket* deviceInfo_;

	//TSharedPtr<FMagicDeviceCmdSender> deviceCmd_;
	//FMagicDeviceCmdSender* deviceCmd_;


	// �f�o�C�X�̏�������ƃI�C���[�p���擾�ł���֐�
	// TransformDataToInt32��TransformEulerAngles�̂��߂ɍ��ꂽ�֐��ł��B
	// �g���ۂ�TransformEulerAngles�Ƀf�o�C�X�̏�������΂��̂܂܎g���܂��B
	// ���ƂŃT�}���[�ɂ���sato
	int32 TransformDataToInt32(const uint8_t* Data, int Size);
	FRotator TransformEulerAngles(const uint8_t* Data, int Size);

	
public:
	/// <summary>
	/// �f�o�C�X�̏���ReadData�������́i���ϊ��j
	/// public�Ȃ̂��Ƃłǂ����悤�BDeviceThreadManager�̂��߃p�u���b�N�ɂ��܂���sato
	/// ���̂ւ񂮂��Ⴎ����
	/// </summary>
	FRotator DeviceRotate_;

public:
	FCriticalSection DataMutex;

public:
	/// <summary>
	/// �L�����u���[�V�����R�}���h�𑗐M����֐�
	/// </summary>
	/// <param name="device_">�f�o�C�X</param>
	void SendCmd_Cali(UASerialLibControllerWin* magicdevice_);

	/// <summary>
	/// �I�C���[�p�擾�R�}���h�𑗐M����֐�
	/// </summary>
	/// <param name="device_">�f�o�C�X</param>
	/// <returns>�f�o�C�X���̃I�C���[�p</returns>
	int32 SendCmd_Euler(UASerialLibControllerWin* magicdevice_);

	/// <summary>
	/// �N�H�[�^�j�I���擾�R�}���h�𑗐M����֐�
	/// </summary>
	/// <param name="device_">�f�o�C�X</param>
	/// <returns>�f�o�C�X���̃N�H�[�^�j�I��</returns>
	int32 SendCmd_Quater(UASerialLibControllerWin* magicdevice_);

private:
	/// <summary>
	/// �f�o�C�X��ID
	/// </summary>
	const uint8_t DeviceID_ = 0x02;
	
	/// <summary>
	/// �f�o�C�X�̃o�[�W����
	/// </summary>
	const uint8_t DeviceVersion_ = 0x01;
private:
	/// <summary>
	/// �L�����u���[�V�����擾�R�}���h
	/// </summary>
	uint8_t Calibration_ = 0x20;

	/// <summary>
	/// �I�C���[�p�擾�R�}���h
	/// </summary>
	uint8_t EulerCmd_ = 0x21;

	/// <summary>
	/// �N�H�[�^�j�I���擾�R�}���h
	/// </summary>
	uint8_t QuaternionCmd_ = 0x22;
};
