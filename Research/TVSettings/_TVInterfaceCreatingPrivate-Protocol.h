//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVInterfaceCreating-Protocol.h"

@class IKViewElement, NSString, NSURL, TVImageLayout, TVImageProxy, TVViewElement, UINavigationController, UIView, UIViewController;

@protocol _TVInterfaceCreatingPrivate <TVInterfaceCreating>

@optional
- (TVImageProxy *)_imageProxyForIKElement:(IKViewElement *)arg1 withLayout:(TVImageLayout *)arg2;
- (TVImageProxy *)_imageProxyForElement:(TVViewElement *)arg1;
- (void)_parseAppConfigurationForElement:(TVViewElement *)arg1;
- (UINavigationController *)_navigationControllerForTabIdentifier:(NSString *)arg1;
- (NSURL *)_styleSheetURLForTemplate:(NSString *)arg1;
- (void)_parseAppConfigurationForIKElement:(IKViewElement *)arg1;
- (Class)_collectionViewCellClassForIKElement:(IKViewElement *)arg1;
- (UIViewController *)_viewControllerForIKElement:(IKViewElement *)arg1 existingViewController:(UIViewController *)arg2;
- (UIView *)_viewForIKElement:(IKViewElement *)arg1 existingView:(UIView *)arg2;
@end

