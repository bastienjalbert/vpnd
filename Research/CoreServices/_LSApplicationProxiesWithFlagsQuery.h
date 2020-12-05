/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_LSBundleQuery.h>

@interface _LSApplicationProxiesWithFlagsQuery : _LSBundleQuery {

	unsigned _plistFlags;
	unsigned long long _bundleFlags;

}

@property (nonatomic,readonly) unsigned plistFlags;                         //@synthesize plistFlags=_plistFlags - In the implementation block
@property (nonatomic,readonly) unsigned long long bundleFlags;              //@synthesize bundleFlags=_bundleFlags - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)queryWithPlistFlags:(unsigned)arg1 bundleFlags:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)bundleFlags;
-(unsigned)plistFlags;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
@end
