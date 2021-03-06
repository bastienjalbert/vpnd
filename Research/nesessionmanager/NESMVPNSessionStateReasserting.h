//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateReasserting : NESMVPNSessionState
{
    _Bool _setConfigurationInProgress;	// 40 = 0x28
}

@property _Bool setConfigurationInProgress; // @synthesize setConfigurationInProgress=_setConfigurationInProgress;
- (void)handleSetConfigurationResult:(_Bool)arg1;	// IMP=0x000000010006abb4
- (_Bool)handleSetConfiguration;	// IMP=0x000000010006ab54
- (void)handleUserLogout;	// IMP=0x000000010006ab20
- (void)handleUserSwitch;	// IMP=0x000000010006aaec
- (void)handleWakeup;	// IMP=0x000000010006aa5c
- (_Bool)handleSleep;	// IMP=0x000000010006a84c
- (void)handlePluginStatusDidChangeToConnected:(id)arg1;	// IMP=0x000000010006a7c4
- (void)handleTimeout;	// IMP=0x000000010006a714
- (void)handleInterfaceAvailable:(id)arg1 changed:(_Bool)arg2;	// IMP=0x000000010006a534
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010006a49c
- (id)init;	// IMP=0x000000010006a460

@end

