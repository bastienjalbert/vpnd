/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMMediaSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowBookstore;
	NSNumber* _payloadAllowBookstoreErotica;
	NSNumber* _payloadAllowEnterpriseBookBackup;
	NSNumber* _payloadAllowEnterpriseBookMetadataSync;

}

@property (nonatomic,copy) NSNumber * payloadAllowBookstore;                               //@synthesize payloadAllowBookstore=_payloadAllowBookstore - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowBookstoreErotica;                        //@synthesize payloadAllowBookstoreErotica=_payloadAllowBookstoreErotica - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowEnterpriseBookBackup;                    //@synthesize payloadAllowEnterpriseBookBackup=_payloadAllowEnterpriseBookBackup - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowEnterpriseBookMetadataSync;              //@synthesize payloadAllowEnterpriseBookMetadataSync=_payloadAllowEnterpriseBookMetadataSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withAllowBookstore:(id)arg2 withAllowBookstoreErotica:(id)arg3 withAllowEnterpriseBookBackup:(id)arg4 withAllowEnterpriseBookMetadataSync:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowBookstore:(NSNumber *)arg1 ;
-(void)setPayloadAllowBookstoreErotica:(NSNumber *)arg1 ;
-(void)setPayloadAllowEnterpriseBookBackup:(NSNumber *)arg1 ;
-(void)setPayloadAllowEnterpriseBookMetadataSync:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowBookstore;
-(NSNumber *)payloadAllowBookstoreErotica;
-(NSNumber *)payloadAllowEnterpriseBookBackup;
-(NSNumber *)payloadAllowEnterpriseBookMetadataSync;
@end

