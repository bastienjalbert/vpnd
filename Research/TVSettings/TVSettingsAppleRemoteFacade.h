//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSFormatter;

@interface TVSettingsAppleRemoteFacade : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x000000010007d18c
@property(readonly, nonatomic) NSFormatter *sensitivityFormatter;
- (id)availableSensitivityLabels;	// IMP=0x000000010007d210
@property(readonly, nonatomic) NSArray *availableSensitivityValues;
@property(nonatomic) long long sensitivity;

@end

