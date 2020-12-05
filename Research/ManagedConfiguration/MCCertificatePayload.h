/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSString, NSNumber, NSDate;

@interface MCCertificatePayload : MCPayload {

	NSData* _certificatePersistentID;
	NSString* _installedOnDeviceID;
	NSNumber* _isIdentity;
	NSNumber* _isRoot;
	NSNumber* _expiryInterval;
	NSString* _certSubject;
	NSString* _certIssuer;

}

@property (nonatomic,copy) NSString * installedOnDeviceID;                  //@synthesize installedOnDeviceID=_installedOnDeviceID - In the implementation block
@property (nonatomic,retain) NSData * certificatePersistentID;              //@synthesize certificatePersistentID=_certificatePersistentID - In the implementation block
@property (nonatomic,readonly) BOOL isRoot; 
@property (nonatomic,readonly) BOOL isFullyTrustedRootCert; 
@property (nonatomic,readonly) BOOL isIdentity; 
@property (nonatomic,retain,readonly) NSDate * expiry; 
@property (nonatomic,readonly) BOOL isSigned; 
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)verboseDescription;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(SecCertificateRef)copyCertificate;
-(NSData *)certificatePersistentID;
-(NSDate *)expiry;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(BOOL)isIdentity;
-(BOOL)isRoot;
-(SecIdentityRef)copyIdentityFromKeychain;
-(id)certificateSubject;
-(id)issuer;
-(NSString *)installedOnDeviceID;
-(BOOL)isSigned;
-(BOOL)isFullyTrustedRootCert;
-(void)setCertificatePersistentID:(NSData *)arg1 ;
-(void)setInstalledOnDeviceID:(NSString *)arg1 ;
@end

