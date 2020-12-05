//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, TVSBluetoothDevice, TVSBluetoothManager;

@protocol TVSBluetoothManagerDelegate <NSObject>

@optional
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 didRejectPairingPINForDevice:(TVSBluetoothDevice *)arg2;
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 didAcceptPairingPINForDevice:(TVSBluetoothDevice *)arg2;
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 requestPairingPIN:(TVSBluetoothDevice *)arg2;
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 presentPairingPIN:(long long)arg2 forDevice:(TVSBluetoothDevice *)arg3;
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 didCompleteDeviceDisconnection:(TVSBluetoothDevice *)arg2 error:(NSError *)arg3;
- (void)bluetoothManager:(TVSBluetoothManager *)arg1 didCompleteDeviceConnection:(TVSBluetoothDevice *)arg2 error:(NSError *)arg3;
@end

