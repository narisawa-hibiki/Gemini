// Source/SweetProject/Private/narisawaBranch/DeviceActor.cpp の内容をこれで上書き

#include "narisawaBranch/DeviceActor.h"

// ★★★ 必要なライブラリのヘッダをすべてインクルード ★★★
#include "WindowsSerial/WindowsSerial.h"
#include "ASerialCore/ASerialPacket.h"

ADeviceActor::ADeviceActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADeviceActor::BeginPlay()
{
	Super::BeginPlay();

	// 仕様通り、デバイスID:10, バージョン:1 でインスタンスを生成
	device = MakeUnique<ASerialLibControllerWin>(0x10, 0x01);
	SerialInterface = MakeUnique<WindowsSerial>();
	device->SetInterfacePt(SerialInterface.Get());

	const int32 ConnectedComPort = device->AutoConnectDevice();

	if (ConnectedComPort != -1)
	{
		bIsDeviceConnected = true;
		UE_LOG(LogTemp, Log, TEXT("Device Connection Successful on COM %d"), ConnectedComPort);
	}
	else
	{
		bIsDeviceConnected = false;
		UE_LOG(LogTemp, Warning, TEXT("Device Connection Failed."));
	}
}

void ADeviceActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsDeviceConnected || !device.IsValid())
	{
		return;
	}

	// --- ここからがお手本のコードのロジックです ---

	// 1. デバイスにコマンド(0x31)を送信
	device->WriteData(0x31);

	// 2. データを受信
	ASerialDataStruct::ASerialData ReceiveData;
	int Result = device->ReadDataProcess(&ReceiveData);

	// ＝＝＝＝＝＝デバッグ情報＝＝＝＝＝＝
	uint16 a = device->GetLastErrorCode(); // uint16t は uint16 に修正
	UE_LOG(LogTemp, Log, TEXT("ErrorCode     = %X"), a);
	UE_LOG(LogTemp, Log, TEXT("deviceCONNECT = %d"), Result);
	// ＝＝＝＝＝＝デバッグ情報＝＝＝＝＝＝

	// 3. 受信成功時のみデータを処理
	if (Result == 1)
	{
		// コマンドが0x20で、データ長が十分かチェック
		if (ReceiveData.command == 0x20 && ReceiveData.data_num >= 4) // クォータニオン(float*4=16バイト)ですが、お手本に合わせdata_num>=4としています
		{
			// 4. デバイスからもらった情報をFRotatorに変換
			FRotator Device_Rotate = TransformQuaterAngles(ReceiveData.data);

			// 5. 1000倍されているので1000で割った値を最終的な値にする
			Final_Device_Rotate = FRotator(Device_Rotate.Pitch / 1000.0f, Device_Rotate.Yaw / 1000.0f, Device_Rotate.Roll / 1000.0f);

			// --- お手本のログ表示を再現 ---
			UE_LOG(LogTemp, Log, TEXT("Final_Device_Rotate.Pitch = %.3f"), Final_Device_Rotate.Pitch);
			UE_LOG(LogTemp, Log, TEXT("Final_Device_Rotate.Yaw   = %.3f"), Final_Device_Rotate.Yaw);
			UE_LOG(LogTemp, Log, TEXT("Final_Device_Rotate.Roll  = %.3f"), Final_Device_Rotate.Roll);
		}
	}
}

// データ変換関数（お手本のTransformQuaterAnglesに相当）
FRotator ADeviceActor::TransformQuaterAngles(const uint8* data)
{
	FQuat rotationQuat;
	// メモリコピーでバイト配列をFQuatに変換
	FMemory::Memcpy(&rotationQuat, &data[0], sizeof(FQuat));
	// FQuatをFRotatorに変換して返す
	return rotationQuat.Rotator();
}

void ADeviceActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (device.IsValid() && bIsDeviceConnected)
	{
		device->DisConnectDevice();
	}
	Super::EndPlay(EndPlayReason);
}