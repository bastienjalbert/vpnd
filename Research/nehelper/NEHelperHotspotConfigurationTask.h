//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface NEHelperHotspotConfigurationTask : NSObject
{
    _Bool _joinOnce;	// 8 = 0x8
    NSString *_taskIdentifier;	// 16 = 0x10
    NSObject<OS_xpc_object> *_requestMessage;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
}

+ (id)copyBundleIDList;	// IMP=0x0000000100001e4c
+ (void)removeBundleIDFromPreferences:(id)arg1;	// IMP=0x0000000100001ca8
+ (void)addBundleIDToPreferences:(id)arg1;	// IMP=0x0000000100001af4
+ (id)copyPendingConfigurationTaskWithID:(id)arg1;	// IMP=0x0000000100001a7c
+ (void)addPendingConfigurationTaskWithID:(id)arg1 requestMessage:(id)arg2 bundleID:(id)arg3 joinOnce:(_Bool)arg4;	// IMP=0x00000001000019bc
- (void).cxx_destruct;	// IMP=0x0000000100001f64
@property(readonly) _Bool joinOnce; // @synthesize joinOnce=_joinOnce;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSObject<OS_xpc_object> *requestMessage; // @synthesize requestMessage=_requestMessage;
@property(readonly) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (id)initTaskWithID:(id)arg1 requestMessage:(id)arg2 bundleID:(id)arg3 joinOnce:(_Bool)arg4;	// IMP=0x00000001000018e4

@end

