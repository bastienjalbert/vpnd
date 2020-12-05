/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NEHelper, NSObject;

@interface NEHotspotConfigurationHelper : NSObject {

	NEHelper* _helper;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NEHelper * helper; 
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NEHelper *)helper;
-(id)createXPCRequest:(id)arg1 requestType:(long long)arg2 ;
-(id)processQueryNetworksResponse:(id)arg1 ;
-(void)sendRequest:(id)arg1 requestType:(long long)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

