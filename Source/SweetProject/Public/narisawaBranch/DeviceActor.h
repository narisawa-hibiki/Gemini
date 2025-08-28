// Source/SweetProject/Public/narisawaBranch/DeviceActor.h の内容をこれで上書き

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

// ★★★ プラグインのヘッダをインクルード ★★★
#include "ASerialLibControllerWin.h"

#include "DeviceActor.generated.h"

// 前方宣言
class ASerialLibControllerWin;
class WindowsSerial;

UCLASS()
class SWEETPROJECT_API ADeviceActor : public AActor
{
	GENERATED_BODY()

public:
	ADeviceActor();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	// ASerialライブラリのインスタンス
	TUniquePtr<ASerialLibControllerWin> device;
	TUniquePtr<WindowsSerial> SerialInterface;
	bool bIsDeviceConnected = false;

	// 受信したバイトデータをFRotatorに変換するヘルパー関数
	FRotator TransformQuaterAngles(const uint8* data);

public:
	// 計算後の最終的な回転値を格納する変数
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Device Data")
	FRotator Final_Device_Rotate;
};