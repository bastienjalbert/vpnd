/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchLocationRequest : DMFTaskRequest {

	NSString* _originator;

}

@property (nonatomic,copy) NSString * originator;              //@synthesize originator=_originator - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
@end

