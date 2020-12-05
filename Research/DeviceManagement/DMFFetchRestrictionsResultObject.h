/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchRestrictionsResultObject : CATTaskResultObject {

	NSDictionary* _restrictions;
	NSDictionary* _globalRestrictions;
	NSDictionary* _profileRestrictions;

}

@property (nonatomic,copy,readonly) NSDictionary * restrictions;                     //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * globalRestrictions;               //@synthesize globalRestrictions=_globalRestrictions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * profileRestrictions;              //@synthesize profileRestrictions=_profileRestrictions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)restrictions;
-(NSDictionary *)globalRestrictions;
-(id)initWithRestrictions:(id)arg1 ;
-(NSDictionary *)profileRestrictions;
@end

