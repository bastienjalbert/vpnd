//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

#import "NEFilterPluginDelegate-Protocol.h"

@class NEFilterPlugin, NEFilterSettings, NESMFilterSessionState, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_nw_interpose, OS_xpc_object;

@interface NESMFilterSession : NESMSession <NEFilterPluginDelegate>
{
    _Bool _isInstalled;	// 8 = 0x8
    _Bool _acceptAgentClients;	// 9 = 0x9
    _Bool _externallyStopped;	// 10 = 0xa
    int _limitToPID;	// 12 = 0xc
    unsigned int _controlUnit;	// 16 = 0x10
    NEFilterSettings *_settings;	// 24 = 0x18
    NESMFilterSessionState *_stateHandler;	// 32 = 0x20
    NSMutableDictionary *_cachedStateHandlers;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    NEFilterPlugin *_plugin;	// 56 = 0x38
    NEFilterPlugin *_packetPlugin;	// 64 = 0x40
    NSObject<OS_xpc_object> *_lastStartMessage;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_restartTimer;	// 80 = 0x50
    unsigned long long _restartIntervalMsecs;	// 88 = 0x58
    unsigned long long _restartIntervalAttempts;	// 96 = 0x60
    NSObject<OS_nw_interpose> *_interpose;	// 104 = 0x68
}

+ (void)deallocateFilterControlUnit:(unsigned int)arg1;	// IMP=0x000000010006e230
+ (unsigned int)allocateFilterControlUnitForConfiguration:(id)arg1;	// IMP=0x000000010006e0a8
+ (unsigned int)getFilterControlUnitFlagsForConfiguration:(id)arg1;	// IMP=0x000000010006dfe8
- (void).cxx_destruct;	// IMP=0x0000000100072504
@property(retain) NSObject<OS_nw_interpose> *interpose; // @synthesize interpose=_interpose;
@property unsigned long long restartIntervalAttempts; // @synthesize restartIntervalAttempts=_restartIntervalAttempts;
@property unsigned long long restartIntervalMsecs; // @synthesize restartIntervalMsecs=_restartIntervalMsecs;
@property(retain) NSObject<OS_dispatch_source> *restartTimer; // @synthesize restartTimer=_restartTimer;
@property(retain) NSObject<OS_xpc_object> *lastStartMessage; // @synthesize lastStartMessage=_lastStartMessage;
@property _Bool externallyStopped; // @synthesize externallyStopped=_externallyStopped;
@property _Bool acceptAgentClients; // @synthesize acceptAgentClients=_acceptAgentClients;
@property(readonly) unsigned int controlUnit; // @synthesize controlUnit=_controlUnit;
@property(retain) NEFilterPlugin *packetPlugin; // @synthesize packetPlugin=_packetPlugin;
@property(retain) NEFilterPlugin *plugin; // @synthesize plugin=_plugin;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain) NSMutableDictionary *cachedStateHandlers; // @synthesize cachedStateHandlers=_cachedStateHandlers;
@property(retain) NESMFilterSessionState *stateHandler; // @synthesize stateHandler=_stateHandler;
@property int limitToPID; // @synthesize limitToPID=_limitToPID;
@property(retain) NEFilterSettings *settings; // @synthesize settings=_settings;
@property _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
- (void)startWithCommand:(id)arg1 isOnDemand:(_Bool)arg2;	// IMP=0x0000000100072270
- (id)plugin:(id)arg1 didApplySettings:(id)arg2;	// IMP=0x00000001000720a8
- (void)handleUserLogin;	// IMP=0x0000000100072014
- (void)invalidate;	// IMP=0x0000000100071fb0
- (id)pluginType;	// IMP=0x0000000100071f14
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x0000000100071bdc
- (void)requestUninstall;	// IMP=0x0000000100071b80
- (void)uninstall;	// IMP=0x0000000100071b1c
- (void)install;	// IMP=0x00000001000719d0
- (_Bool)pinPlugin:(id)arg1 toConfigurationWithAuditTokens:(id)arg2;	// IMP=0x0000000100071910
- (_Bool)handleAgentClientConnection:(id)arg1 WithMessage:(id)arg2;	// IMP=0x00000001000713fc
- (void)plugin:(id)arg1 didInitializeWithUUIDs:(id)arg2;	// IMP=0x00000001000713f8
- (void)pluginDidAcknowledgeSleep:(id)arg1;	// IMP=0x00000001000713b8
- (id)pluginDidRequestPacketFilterChannel:(id)arg1;	// IMP=0x00000001000711b8
- (void)plugin:(id)arg1 didSetStatus:(long long)arg2 andError:(long long)arg3;	// IMP=0x000000010007107c
- (void)plugin:(id)arg1 didStartWithPID:(int)arg2 error:(id)arg3;	// IMP=0x0000000100070e0c
- (void)pluginDidRequestAgentClientServer:(id)arg1;	// IMP=0x0000000100070dfc
- (id)pluginDidRequestContentFilterSocket:(id)arg1;	// IMP=0x0000000100070cdc
- (void)pluginDidDispose:(id)arg1;	// IMP=0x0000000100070c70
- (void)handleInstalledAppsChanged;	// IMP=0x0000000100070b1c
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x0000000100070a40
- (void)updateDefaultDrop:(_Bool)arg1;	// IMP=0x0000000100070a34
- (void)updateLayer2DefaultDrop:(_Bool)arg1;	// IMP=0x0000000100070930
- (void)updateIPDefaultDrop:(_Bool)arg1;	// IMP=0x000000010007079c
- (_Bool)checkPluginInstalled:(_Bool)arg1;	// IMP=0x0000000100070378
- (void)handleWakeup;	// IMP=0x0000000100070338
- (_Bool)handleSleep;	// IMP=0x00000001000702ec
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x000000010007021c
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010006fdb0
- (void)handleInitializeState;	// IMP=0x000000010006fda0
- (_Bool)initializePlugins;	// IMP=0x000000010006fac0
- (id)createFilterPluginWithClass:(long long)arg1;	// IMP=0x000000010006f97c
- (id)createAgentWithClass:(long long)arg1;	// IMP=0x000000010006f458
- (_Bool)checkContentFilterProviderWithClass:(long long)arg1;	// IMP=0x000000010006f108
- (_Bool)hasProviderWithBundleIdentifier:(id)arg1;	// IMP=0x000000010006ef68
- (void)restart;	// IMP=0x000000010006e910
- (void)resetRestartTimer:(_Bool)arg1;	// IMP=0x000000010006e854
- (void)deallocateControlUnit;	// IMP=0x000000010006e744
- (_Bool)allocateControlUnit;	// IMP=0x000000010006e47c
- (int)type;	// IMP=0x000000010006e474
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2;	// IMP=0x000000010006e338
- (void)updateFilterControlUnit;	// IMP=0x000000010006e274

@end

