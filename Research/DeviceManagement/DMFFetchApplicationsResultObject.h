/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchApplicationsResultObject : CATTaskResultObject {

	NSDictionary* _applicationsByIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * applicationsByIdentifier;              //@synthesize applicationsByIdentifier=_applicationsByIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)applicationsByIdentifier;
-(id)initWithApplicationsByIdentifier:(id)arg1 ;
@end

