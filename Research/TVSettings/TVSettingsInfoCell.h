//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray;

@interface TVSettingsInfoCell : UITableViewCell
{
    NSMutableArray *_titleLabels;	// 8 = 0x8
    NSMutableArray *_valueViews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004ce6c
- (id)_newValueLabel;	// IMP=0x000000010004cd5c
- (id)_newTitleLabel;	// IMP=0x000000010004cc1c
- (void)_updateSubviewsWithTitles:(id)arg1 values:(id)arg2;	// IMP=0x000000010004c5f0
- (void)setTitles:(id)arg1 withValues:(id)arg2;	// IMP=0x000000010004c590
- (void)layoutSubviews;	// IMP=0x000000010004c0c0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010004bff8

@end
