/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMApplicationListInstalledApplicationsCommand_Status : CEMPayloadBase {

	NSArray* _statusInstalledApplicationList;

}

@property (nonatomic,copy) NSArray * statusInstalledApplicationList;              //@synthesize statusInstalledApplicationList=_statusInstalledApplicationList - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithInstalledApplicationList:(id)arg1 ;
+(id)buildRequiredOnlyWithInstalledApplicationList:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusInstalledApplicationList:(NSArray *)arg1 ;
-(NSArray *)statusInstalledApplicationList;
@end

