/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEConfigurationManager, NEConfiguration, NSString, NEDNSSettings, NSArray;

@interface NEDNSSettingsManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	NEConfigurationManager* _configurationManager;
	NEConfiguration* _configuration;

}

@property (readonly) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (retain) NEConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL hasLoaded;                                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * localizedDescription; 
@property (retain) NEDNSSettings * dnsSettings; 
@property (copy) NSArray * onDemandRules; 
+(id)sharedManager;
-(id)description;
-(id)init;
-(NSString *)localizedDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(NEConfiguration *)configuration;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(BOOL)isEnabled;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NEDNSSettings *)dnsSettings;
-(NSArray *)onDemandRules;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDnsSettings:(NEDNSSettings *)arg1 ;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(NEConfigurationManager *)configurationManager;
-(BOOL)hasLoaded;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createEmptyConfigurationWithGrade:(long long)arg1 ;
-(id)initWithGrade:(long long)arg1 ;
@end
