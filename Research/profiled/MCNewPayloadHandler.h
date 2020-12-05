//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCPayload, MCProfileHandler, NSArray;

@interface MCNewPayloadHandler : NSObject
{
    MCPayload *_payload;	// 8 = 0x8
    MCProfileHandler *_profileHandler;	// 16 = 0x10
    NSArray *_userInputResponses;	// 24 = 0x18
}

+ (id)prioritizeUserInput:(id)arg1 key:(id)arg2 overField:(id)arg3;	// IMP=0x000000010001ad44
+ (id)promptDictionaryForKey:(id)arg1 title:(id)arg2 description:(id)arg3 retypeDescription:(id)arg4 finePrint:(id)arg5 defaultValue:(id)arg6 placeholderValue:(id)arg7 minimumLength:(unsigned long long)arg8 fieldType:(int)arg9 flags:(int)arg10;	// IMP=0x000000010001ac2c
- (void).cxx_destruct;	// IMP=0x000000010001adf8
@property(retain, nonatomic) NSArray *userInputResponses; // @synthesize userInputResponses=_userInputResponses;
@property(readonly, nonatomic) __weak MCProfileHandler *profileHandler; // @synthesize profileHandler=_profileHandler;
@property(readonly, retain, nonatomic) MCPayload *payload; // @synthesize payload=_payload;
- (id)_temporaryPersistentIDForIdentityUUID:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010001a9bc
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010001a8d8
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x000000010001a880
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010001a79c
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x000000010001a744
- (void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010001a6a4
- (void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;	// IMP=0x000000010001a624
- (void)remove;	// IMP=0x000000010001a620
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x000000010001a614
- (void)unsetAside;	// IMP=0x000000010001a610
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x000000010001a604
- (void)setAside;	// IMP=0x000000010001a600
- (_Bool)isInstalled;	// IMP=0x000000010001a5f8
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010001a5f4
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010001a5f0
- (void)unstageFromInstallationWithInstaller:(id)arg1;	// IMP=0x000000010001a5ec
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001a5e4
- (_Bool)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x000000010001a5dc
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010001a5d4
- (id)userInputFields;	// IMP=0x000000010001a5c0
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x000000010001a524

@end

