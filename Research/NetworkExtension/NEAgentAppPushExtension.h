/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEAgentExtension.h>
#import <libobjc.A.dylib/NEExtensionAppPushProviderHostDelegate.h>
#import <libobjc.A.dylib/NEAgentSessionDelegate.h>
#import <libobjc.A.dylib/NEAppPushPluginDriver.h>

@class NSArray, NSXPCInterface, NSString;

@interface NEAgentAppPushExtension : NEAgentExtension <NEExtensionAppPushProviderHostDelegate, NEAgentSessionDelegate, NEAppPushPluginDriver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * uuids; 
@property (nonatomic,readonly) NSXPCInterface * driverInterface; 
@property (nonatomic,readonly) NSXPCInterface * managerInterface; 
-(void)setProviderConfiguration:(id)arg1 ;
-(void)handleProviderError:(id)arg1 ;
-(void)handleProviderError:(id)arg1 forMessageID:(id)arg2 ;
-(void)reportIncomingCall:(id)arg1 ;
-(void)sendExtensionFailed;
-(void)handleProviderStopped;
-(void)startConnectionWithProviderConfig:(id)arg1 ;
-(void)stopWithReason:(int)arg1 ;
-(void)sendOutgoingCallMessage:(id)arg1 andMessageID:(id)arg2 ;
-(void)sendTimerEvent;
-(void)didReceiveIncomingCallWithUserInfo:(id)arg1 ;
-(NSXPCInterface *)driverInterface;
-(NSXPCInterface *)managerInterface;
@end

