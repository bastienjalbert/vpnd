//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPluginDriver-Protocol.h"

@protocol NEFilterPluginDriver <NEPluginDriver>
- (void)getFilterClientConnectionWithCompletionHandler:(int)arg1 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSData *))arg2;
- (void)startFilter;
@end
