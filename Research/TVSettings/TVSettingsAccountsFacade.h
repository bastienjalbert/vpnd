//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMHomeDelegate-Protocol.h"
#import "HMHomeManagerDelegate-Protocol.h"

@class AMSBag, HMHomeManager, NSArray, NSString, TVSettingsUser;

@interface TVSettingsAccountsFacade : NSObject <HMHomeManagerDelegate, HMHomeDelegate>
{
    _Bool _isAddingLocalUser;	// 8 = 0x8
    _Bool _isRemovingLocalUser;	// 9 = 0x9
    _Bool _doesAnyUserNeedHomeInviteInfomation;	// 10 = 0xa
    TVSettingsUser *_currentUser;	// 16 = 0x10
    NSArray *_users;	// 24 = 0x18
    NSString *_homeName;	// 32 = 0x20
    HMHomeManager *_homeManager;	// 40 = 0x28
    AMSBag *_amsBag;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000553cc
@property(retain, nonatomic) AMSBag *amsBag; // @synthesize amsBag=_amsBag;
@property(nonatomic) _Bool doesAnyUserNeedHomeInviteInfomation; // @synthesize doesAnyUserNeedHomeInviteInfomation=_doesAnyUserNeedHomeInviteInfomation;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
@property(nonatomic) _Bool isRemovingLocalUser; // @synthesize isRemovingLocalUser=_isRemovingLocalUser;
@property(nonatomic) _Bool isAddingLocalUser; // @synthesize isAddingLocalUser=_isAddingLocalUser;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) TVSettingsUser *currentUser; // @synthesize currentUser=_currentUser;
- (void)_updateHomeInviteForUsersThatNeedIt;	// IMP=0x0000000100054a8c
- (void)_setCurrentUser:(id)arg1 users:(id)arg2 doesAnyUserNeedHomeInviteInfomation:(_Bool)arg3;	// IMP=0x00000001000548a0
- (void)_asyncReloadUsers;	// IMP=0x00000001000543f8
- (void)_initialLoad;	// IMP=0x000000010005434c
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x0000000100054270
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x0000000100054134
- (void)homeDidUpdateName:(id)arg1;	// IMP=0x0000000100054014
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x0000000100053fac
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x0000000100053f44
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x0000000100053edc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100053d10
- (void)removeLocalUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000537ac
- (void)addLocalUserWithPresentingViewController:(id)arg1;	// IMP=0x00000001000532c4
- (void)switchCurrentUserToUser:(id)arg1;	// IMP=0x00000001000531bc
- (void)dealloc;	// IMP=0x0000000100053138
- (id)init;	// IMP=0x0000000100052f24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

