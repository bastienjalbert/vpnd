/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSDService.h>

@interface _LSDDeviceIdentifierService : _LSDService
+(id)XPCInterface;
+(unsigned short)connectionType;
+(void)clearIdentifiersForUninstallationWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(void)generateIdentifiersForInstallationWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(Class)clientClass;
+(id)vendorNameForDeviceIdentifiersWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
@end
