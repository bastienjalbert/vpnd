//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface QuotaApp : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    NSURL *_iconURL;	// 32 = 0x20
    NSURL *_thumbnailURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000e84f0
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x00000001000e83fc

@end

