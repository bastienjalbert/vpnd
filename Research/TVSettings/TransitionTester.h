//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _TSKSplitViewController;

@interface TransitionTester : NSObject
{
    long long _animationCount;	// 8 = 0x8
    long long _testsRun;	// 16 = 0x10
    long long _totalTestsToRun;	// 24 = 0x18
    _TSKSplitViewController *_mainViewController;	// 32 = 0x20
}

+ (id)sharedTransitionTester;	// IMP=0x000000010005a59c
- (void).cxx_destruct;	// IMP=0x000000010005ab40
@property __weak _TSKSplitViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(nonatomic) long long totalTestsToRun; // @synthesize totalTestsToRun=_totalTestsToRun;
@property(nonatomic) long long testsRun; // @synthesize testsRun=_testsRun;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010005a828
- (void)startPopTransition;	// IMP=0x000000010005a7c8
- (void)startPushTransition;	// IMP=0x000000010005a68c
- (void)runTest;	// IMP=0x000000010005a5e0

@end

