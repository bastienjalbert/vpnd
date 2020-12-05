//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "AKAppleIDAuthenticationInAppContextDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableSet, NSString, TVSettingsICloudAccountFacade, TVSiCloudAccountManager, UITapGestureRecognizer;

@interface TVSettingsiCloudAccountViewController : TSKViewController <AKAppleIDAuthenticationInAppContextDelegate, UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_menuGestureRecognizer;	// 8 = 0x8
    _Bool _authenticationInProgress;	// 16 = 0x10
    _Bool _signOutInProgress;	// 17 = 0x11
    TVSiCloudAccountManager *_accountManager;	// 24 = 0x18
    TVSettingsICloudAccountFacade *_iCloudAccountFacade;	// 32 = 0x20
    NSMutableSet *_updatingResidentDevices;	// 40 = 0x28
}

+ (void)_killTVPhotos;	// IMP=0x000000010000ee80
+ (void)_cleanupTVPhotosApp;	// IMP=0x000000010000ec98
- (void).cxx_destruct;	// IMP=0x000000010000f594
@property(retain, nonatomic) NSMutableSet *updatingResidentDevices; // @synthesize updatingResidentDevices=_updatingResidentDevices;
@property(nonatomic, getter=isSignOutInProgress) _Bool signOutInProgress; // @synthesize signOutInProgress=_signOutInProgress;
@property(getter=isAuthenticationInProgress) _Bool authenticationInProgress; // @synthesize authenticationInProgress=_authenticationInProgress;
@property(readonly, nonatomic) TVSettingsICloudAccountFacade *iCloudAccountFacade; // @synthesize iCloudAccountFacade=_iCloudAccountFacade;
@property(readonly, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void)contextDidDismissLoginAlertController:(id)arg1;	// IMP=0x000000010000f508
- (void)contextWillDismissLoginAlertController:(id)arg1;	// IMP=0x000000010000f504
- (void)contextDidPresentLoginAlertController:(id)arg1;	// IMP=0x000000010000f4cc
- (_Bool)_myPhotoStreamAvailable;	// IMP=0x000000010000f400
- (_Bool)_iCloudHomeScreenSyncEnabled;	// IMP=0x000000010000f388
- (_Bool)_iCloudSettingsEnabled;	// IMP=0x000000010000f310
- (void)_updateSignInItem:(id)arg1 value:(id)arg2;	// IMP=0x000000010000ee8c
- (void)_signOut:(id)arg1;	// IMP=0x000000010000e6c8
- (void)_enableAuthenticatedSettingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e3c4
- (void)_toggleiCloudHomeScreenSync:(id)arg1;	// IMP=0x000000010000e268
- (void)_enableMyPhotoStream:(id)arg1;	// IMP=0x000000010000e11c
- (void)_enableSharedPhotoStream:(id)arg1;	// IMP=0x000000010000dfd0
- (void)_enableICloudPhotoLibrary:(id)arg1;	// IMP=0x000000010000de84
- (void)_presentiCloudHomeScreenSyncOnAlertController;	// IMP=0x000000010000d9d0
- (void)_authenticateItunesWithAuthenticationResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d6ec
- (void)_authenticateGameCenterWithAuthenticationResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d528
- (void)_completeSignInWithAuthenticationResults:(id)arg1;	// IMP=0x000000010000cc14
- (void)_handleCDPWithAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cabc
- (void)_signIn:(id)arg1;	// IMP=0x000000010000c680
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010000c61c
- (id)loadSettingGroups;	// IMP=0x000000010000b98c
- (void)viewDidLoad;	// IMP=0x000000010000b89c
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010000b7fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

