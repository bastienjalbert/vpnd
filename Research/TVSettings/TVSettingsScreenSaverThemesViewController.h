//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKScreenSaverThemePreviewViewController, TVSettingsScreenSaverFacade;

@interface TVSettingsScreenSaverThemesViewController : TSKViewController
{
    TVSettingsScreenSaverFacade *_facade;	// 8 = 0x8
    TSKScreenSaverThemePreviewViewController *_themePreviewViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000ac5bc
@property(retain, nonatomic) TSKScreenSaverThemePreviewViewController *themePreviewViewController; // @synthesize themePreviewViewController=_themePreviewViewController;
@property(readonly, nonatomic) TVSettingsScreenSaverFacade *facade; // @synthesize facade=_facade;
- (void)_didSelectThemeItem:(id)arg1;	// IMP=0x00000001000ac4ec
- (id)_themes;	// IMP=0x00000001000ac110
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000abee8
- (id)loadSettingGroups;	// IMP=0x00000001000abe4c
- (id)initWithFacade:(id)arg1;	// IMP=0x00000001000abd5c

@end
