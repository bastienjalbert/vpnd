/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NEIKEv2Identifier : NSObject <NSCopying> {

	NSData* _identifierData;

}

@property (readonly) unsigned long long identifierType; 
@property (retain) NSData * identifierData;                          //@synthesize identifierData=_identifierData - In the implementation block
@property (readonly) NSString * stringValue; 
+(id)copyTypeDescription;
+(id)createIdentifierWithType:(unsigned long long)arg1 data:(id)arg2 zone:(NSZone*)arg3 ;
+(id)createIdentifierWithType:(unsigned long long)arg1 data:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)stringValue;
-(NSData *)identifierData;
-(void)setIdentifierData:(NSData *)arg1 ;
-(unsigned long long)identifierType;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
@end

