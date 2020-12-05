/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSUUID;

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding> {

	BOOL _fastOpenRequested;
	BOOL _multipathRequested;
	NSData* _sourceAppUniqueIdentifier;
	NSString* _sourceAppSigningIdentifier;
	NSData* _sourceAppAuditToken;
	NSUUID* _filterFlowIdentifier;

}

@property (readonly) BOOL fastOpenRequested;                             //@synthesize fastOpenRequested=_fastOpenRequested - In the implementation block
@property (readonly) BOOL multipathRequested;                            //@synthesize multipathRequested=_multipathRequested - In the implementation block
@property (readonly) NSData * sourceAppUniqueIdentifier;                 //@synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier - In the implementation block
@property (readonly) NSString * sourceAppSigningIdentifier;              //@synthesize sourceAppSigningIdentifier=_sourceAppSigningIdentifier - In the implementation block
@property (readonly) NSData * sourceAppAuditToken;                       //@synthesize sourceAppAuditToken=_sourceAppAuditToken - In the implementation block
@property (readonly) NSUUID * filterFlowIdentifier;                      //@synthesize filterFlowIdentifier=_filterFlowIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initFromFlow:(NEFlowRef)arg1 ;
-(NSData *)sourceAppUniqueIdentifier;
-(NSData *)sourceAppAuditToken;
-(NSString *)sourceAppSigningIdentifier;
-(NSUUID *)filterFlowIdentifier;
-(BOOL)fastOpenRequested;
-(BOOL)multipathRequested;
-(id)initWithUniqueIdentifier:(id)arg1 signingIdentifier:(id)arg2 fastOpenRequested:(BOOL)arg3 multipathRequested:(BOOL)arg4 audit_token:(id)arg5 filterFlowID:(id)arg6 ;
-(id)initWithProcessUUID:(id)arg1 signingIdentifier:(id)arg2 ;
@end

