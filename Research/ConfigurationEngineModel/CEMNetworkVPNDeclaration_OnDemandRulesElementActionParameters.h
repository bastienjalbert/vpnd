/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters : CEMPayloadBase {

	NSArray* _payloadDomains;
	NSString* _payloadDomainAction;
	NSArray* _payloadRequiredDNSServers;
	NSString* _payloadRequiredURLStringProbe;

}

@property (nonatomic,copy) NSArray * payloadDomains;                              //@synthesize payloadDomains=_payloadDomains - In the implementation block
@property (nonatomic,copy) NSString * payloadDomainAction;                        //@synthesize payloadDomainAction=_payloadDomainAction - In the implementation block
@property (nonatomic,copy) NSArray * payloadRequiredDNSServers;                   //@synthesize payloadRequiredDNSServers=_payloadRequiredDNSServers - In the implementation block
@property (nonatomic,copy) NSString * payloadRequiredURLStringProbe;              //@synthesize payloadRequiredURLStringProbe=_payloadRequiredURLStringProbe - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithDomains:(id)arg1 withDomainAction:(id)arg2 withRequiredDNSServers:(id)arg3 withRequiredURLStringProbe:(id)arg4 ;
+(id)buildRequiredOnlyWithDomains:(id)arg1 withDomainAction:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDomains:(NSArray *)arg1 ;
-(void)setPayloadDomainAction:(NSString *)arg1 ;
-(void)setPayloadRequiredDNSServers:(NSArray *)arg1 ;
-(void)setPayloadRequiredURLStringProbe:(NSString *)arg1 ;
-(NSArray *)payloadDomains;
-(NSString *)payloadDomainAction;
-(NSArray *)payloadRequiredDNSServers;
-(NSString *)payloadRequiredURLStringProbe;
@end

