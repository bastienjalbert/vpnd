//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MCProvisioningProfileJanitor : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_misValidationQueue;	// 16 = 0x10
}

+ (id)sharedJanitor;	// IMP=0x0000000100058bc8
- (void).cxx_destruct;	// IMP=0x000000010005a54c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *misValidationQueue; // @synthesize misValidationQueue=_misValidationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)earliestRequiredManagedAppValidationDate;	// IMP=0x000000010005a418
- (void)revalidateManagedApps;	// IMP=0x000000010005a40c
- (void)_enumerateManagedAppUPPs:(CDUnknownBlockType)arg1;	// IMP=0x0000000100059de0
- (void)_misValidateUPPProfileUUIDs:(id)arg1 profileType:(id)arg2;	// IMP=0x0000000100059b48
- (void)_workQueueUpdateMISUPPTrustWithTrustCodeSigningIdentities:(id)arg1 validateApps:(id)arg2 validateManagedApps:(_Bool)arg3;	// IMP=0x0000000100058e04
- (void)updateMISTrust;	// IMP=0x0000000100058dec
- (void)updateMISTrustAndValidateApps:(id)arg1 validateManagedApps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100058c34
- (id)init;	// IMP=0x0000000100058b00

@end

