/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSXPCListener.h>

@class NSString;

@interface NEProviderXPCListener : NSXPCListener {

	NSString* _extensionContextClassName;

}

@property (nonatomic,readonly) NSString * extensionContextClassName;              //@synthesize extensionContextClassName=_extensionContextClassName - In the implementation block
-(id)initWithExtensionContextClassName:(id)arg1 ;
-(NSString *)extensionContextClassName;
@end

