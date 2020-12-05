/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface NEBundleProxy : NSObject <NSSecureCoding> {

	BOOL _isWatchKitApp;
	NSString* _identifier;
	NSURL* _url;
	NSArray* _machOUUIDs;
	NSString* _name;

}

@property (nonatomic,retain,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain,readonly) NSArray * machOUUIDs;               //@synthesize machOUUIDs=_machOUUIDs - In the implementation block
@property (nonatomic,retain,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isWatchKitApp;                          //@synthesize isWatchKitApp=_isWatchKitApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSURL *)url;
-(NSArray *)machOUUIDs;
-(id)initWithIdentifier:(id)arg1 url:(id)arg2 machOUUIDs:(id)arg3 name:(id)arg4 ;
-(BOOL)isWatchKitApp;
-(void)setIsWatchKitApp:(BOOL)arg1 ;
@end

