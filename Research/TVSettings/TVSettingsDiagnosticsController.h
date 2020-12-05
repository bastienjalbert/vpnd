//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface TVSettingsDiagnosticsController : NSObject
{
    _Bool _pingOutstanding;	// 8 = 0x8
    long long _sessionState;	// 16 = 0x10
    NSTimer *_timer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100065048
@property _Bool pingOutstanding; // @synthesize pingOutstanding=_pingOutstanding;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property long long sessionState; // @synthesize sessionState=_sessionState;
- (void)launchWithTicketNumber:(id)arg1;	// IMP=0x0000000100064ec4
- (void)launch;	// IMP=0x0000000100064eb4
- (_Bool)checkTicketNumber:(id)arg1;	// IMP=0x0000000100064cac
- (void)_pollForSession:(id)arg1;	// IMP=0x00000001000649d0
- (void)pollForSession;	// IMP=0x0000000100064984
- (void)didBecomeActive:(id)arg1;	// IMP=0x0000000100064978
- (void)dealloc;	// IMP=0x0000000100064900
- (void)invalidate;	// IMP=0x0000000100064868
- (id)init;	// IMP=0x0000000100064724

@end

