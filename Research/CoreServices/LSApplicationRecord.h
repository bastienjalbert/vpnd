/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleRecord.h>

@class NSArray, NSURL, NSDictionary, LSiTunesMetadata, NSUUID, _LSLazyPropertyList, NSString, NSData, LSApplicationProxy, _LSApplicationState, NSSet, _LSDiskUsage, LSAppClipMetadata;

@interface LSApplicationRecord : LSBundleRecord

@property (readonly) NSArray * if_userActivityTypes; 
@property (readonly) NSURL * bundleContainerURL; 
@property (readonly) NSDictionary * additionalEnvironmentVariables; 
@property (readonly) LSiTunesMetadata * iTunesMetadata; 
@property (nonatomic,readonly) NSUUID * deviceIdentifierForVendor; 
@property (nonatomic,readonly) NSUUID * deviceIdentifierForAdvertising; 
@property (readonly) NSArray * directionsModes; 
@property (readonly) NSArray * audioComponents; 
@property (readonly) NSArray * externalAccessoryProtocols; 
@property (readonly) NSArray * staticShortcutItems; 
@property (readonly) NSArray * VPNPlugins; 
@property (readonly) NSArray * appTags; 
@property (readonly) NSDictionary * requiredDeviceCapabilities; 
@property (readonly) NSArray * deviceFamilies; 
@property (readonly) BOOL supportsExternallyPlayableContent; 
@property (readonly) BOOL supportsOpenInPlace; 
@property (getter=isFileSharingEnabled,readonly) BOOL fileSharingEnabled; 
@property (readonly) BOOL supportsPurgeableLocalStorage; 
@property (getter=wasRenamed,readonly) BOOL renamed; 
@property (readonly) _LSLazyPropertyList * _rawIconDictionary; 
@property (readonly) BOOL supportsAlternateIconNames; 
@property (readonly) NSString * alternateIconName; 
@property (readonly) NSDictionary * iconDictionary; 
@property (readonly) BOOL supportsControllerUserInteraction; 
@property (readonly) NSArray * supportedGameControllers; 
@property (getter=isWrapper,readonly) BOOL wrapper; 
@property (getter=isWrapped,readonly) BOOL wrapped; 
@property (readonly) unsigned long long applicationDSID; 
@property (readonly) unsigned long long applicationDownloaderDSID; 
@property (readonly) unsigned long long applicationFamilyID; 
@property (readonly) unsigned long long installType; 
@property (getter=isAdHocCodeSigned,readonly) BOOL adHocCodeSigned; 
@property (readonly) BOOL hasSettingsBundle; 
@property (readonly) BOOL applicationHasMIDBasedSINF; 
@property (readonly) BOOL applicationMissingRequiredSINF; 
@property (readonly) BOOL hasCustomNotification; 
@property (readonly) unsigned long long placeholderFailureReason; 
@property (getter=isRemovableByInstallMachinery,readonly) BOOL removableByInstallMachinery; 
@property (readonly) NSData * uniqueInstallIdentifier; 
@property (readonly) NSData * installSessionIdentifier; 
@property (readonly) NSString * companionBundleIdentifier; 
@property (readonly) unsigned char watchKitApplicationType; 
@property (readonly) NSString * watchKitVersion; 
@property (readonly) NSString * complicationPrincipalClassName; 
@property (readonly) NSArray * supportedComplicationFamilies; 
@property (readonly) BOOL hasComplication; 
@property (readonly) BOOL hasGlance; 
@property (readonly) BOOL shouldSkipWatchAppInstall; 
@property (getter=isWatchOnly,readonly) BOOL watchOnly; 
@property (readonly) BOOL runsIndependentlyOfCompanionApp; 
@property (readonly) NSString * watchKitApplicationTintColorName; 
@property (readonly) NSString * typeForInstallMachinery; 
@property (readonly) NSDictionary * _localizedNamesWithContext; 
@property (readonly) NSString * _deviceIdentifierVendorName; 
@property (readonly) _LSLazyPropertyList * _rawEnvironmentVariables; 
@property (readonly) unsigned long long _rawBundleFlags; 
@property (readonly) unsigned _rawPlistFlags; 
@property (readonly) unsigned char _rawIconFlags; 
@property (readonly) LSBundleMoreFlags _rawMoreFlags; 
@property (readonly) int _bundleModTime; 
@property (readonly) NSArray * _iconFileNames; 
@property (readonly) NSString * _preferredLaunchArchitecture; 
@property (nonatomic,readonly) LSApplicationProxy * compatibilityObject; 
@property (readonly) NSString * teamIdentifier; 
@property (readonly) NSArray * counterpartIdentifiers; 
@property (readonly) NSString * minimumSystemVersion; 
@property (readonly) NSString * maximumSystemVersion; 
@property (readonly) NSString * exactBundleVersion; 
@property (readonly) NSString * shortVersionString; 
@property (getter=isBeta,readonly) BOOL beta; 
@property (getter=isUpdate,readonly) BOOL update; 
@property (getter=isPlaceholder,readonly) BOOL placeholder; 
@property (getter=isSystemPlaceholder,readonly) BOOL systemPlaceholder; 
@property (readonly) BOOL hasParallelPlaceholder; 
@property (readonly) _LSApplicationState * applicationState; 
@property (getter=isDeletable,readonly) BOOL deletable; 
@property (getter=isDeletableSystemApplication,readonly) BOOL deletableSystemApplication; 
@property (getter=isAppStoreVendable,nonatomic,readonly) BOOL appStoreVendable; 
@property (getter=isLaunchProhibited,readonly) BOOL launchProhibited; 
@property (readonly) NSString * appStoreToolsBuildVersion; 
@property (readonly) NSSet * userActivityTypes; 
@property (readonly) BOOL canHandleWebAuthentication; 
@property (readonly) NSSet * applicationExtensionRecords; 
@property (readonly) BOOL supportsMultiwindow; 
@property (getter=isArcadeApp,readonly) BOOL arcadeApp; 
@property (readonly) _LSDiskUsage * diskUsage; 
@property (readonly) BOOL supportsOnDemandResources; 
@property (readonly) BOOL supportsAudiobooks; 
@property (readonly) NSArray * backgroundTaskSchedulerPermittedIdentifiers; 
@property (readonly) NSArray * carPlayInstrumentClusterURLSchemes; 
@property (readonly) BOOL supportsCarPlayDashboardScene; 
@property (readonly) BOOL supportsCarPlayInstrumentClusterScene; 
@property (readonly) LSAppClipMetadata * appClipMetadata; 
@property (readonly) BOOL shouldShowSecurityPromptsOnSignIn; 
@property (getter=isWebBrowser,readonly) BOOL webBrowser; 
@property (getter=isMailClient,readonly) BOOL mailClient; 
@property (readonly) BOOL supportsSpotlightQueryContinuation; 
@property (readonly) BOOL requiresNativeExecution; 
+(BOOL)supportsSecureCoding;
+(id)enumeratorWithOptions:(unsigned long long)arg1 ;
+(id)_propertyClasses;
+(id)applicationRecordsForUserActivityType:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)applicationRecordsForUserActivityDomainName:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)enumeratorOnVolumeAtURL:(id)arg1 options:(unsigned long long)arg2 ;
+(id)systemPlaceholderEnumerator;
+(id)_alternateIconQueue;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(NSArray *)if_userActivityTypes;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_containerClass;
-(NSUUID *)deviceIdentifierForVendor;
-(NSURL *)bundleContainerURL;
-(NSArray *)appTags;
-(NSDictionary *)requiredDeviceCapabilities;
-(NSString *)shortVersionString;
-(NSString *)teamIdentifier;
-(NSArray *)deviceFamilies;
-(BOOL)isBeta;
-(NSArray *)externalAccessoryProtocols;
-(BOOL)supportsMultiwindow;
-(unsigned long long)installType;
-(BOOL)isPlaceholder;
-(BOOL)isLaunchProhibited;
-(BOOL)isWrapped;
-(_LSApplicationState *)applicationState;
-(BOOL)isUpdate;
-(id)initWithBundleIdentifier:(id)arg1 allowPlaceholder:(BOOL)arg2 error:(id*)arg3 ;
-(NSArray *)counterpartIdentifiers;
-(id)supportedIntents;
-(id)supportedIntentMediaCategories;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(id)intentsRestrictedWhileLocked;
-(NSSet *)applicationExtensionRecords;
-(id)localizedNameWithContext:(id)arg1 ;
-(BOOL)isDeletable;
-(unsigned long long)applicationDSID;
-(BOOL)hasSettingsBundle;
-(void)clearAdvertisingIdentifier;
-(NSUUID *)deviceIdentifierForAdvertising;
-(LSiTunesMetadata *)iTunesMetadata;
-(unsigned long long)placeholderFailureReason;
-(BOOL)isSystemPlaceholder;
-(id)initWithURL:(id)arg1 allowPlaceholder:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)hasParallelPlaceholder;
-(BOOL)runsIndependentlyOfCompanionApp;
-(id)managedPersonas;
-(BOOL)isAppStoreVendable;
-(BOOL)isAdHocCodeSigned;
-(NSArray *)_iconFileNames;
-(NSString *)exactBundleVersion;
-(id)_initWithContext:(LSContext*)arg1 bundleID:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 error:(id*)arg4 ;
-(NSString *)_preferredLaunchArchitecture;
-(_LSDiskUsage *)diskUsage;
-(unsigned long long)applicationDownloaderDSID;
-(unsigned long long)applicationFamilyID;
-(NSSet *)userActivityTypes;
-(unsigned long long)_rawBundleFlags;
-(BOOL)supportsOnDemandResources;
-(BOOL)isFileSharingEnabled;
-(BOOL)applicationHasMIDBasedSINF;
-(BOOL)applicationMissingRequiredSINF;
-(NSDictionary *)additionalEnvironmentVariables;
-(void)setAlternateIconName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)alternateIconName;
-(void)getDeviceManagementPolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)bundleMetadataReturningError:(id*)arg1 ;
-(int)_bundleModTime;
-(NSString *)typeForInstallMachinery;
-(BOOL)_usesSystemPersona;
-(BOOL)getGenericTranslocationTargetURL:(id*)arg1 error:(id*)arg2 ;
-(NSString *)_deviceIdentifierVendorName;
-(id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 context:(LSContext*)arg3 tableID:(unsigned)arg4 unitID:(unsigned)arg5 bundleBaseData:(const LSBundleBaseData*)arg6 error:(id*)arg7 ;
-(id)managedPersonasWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(void)_LSRecord_resolve_managedPersonas;
-(BOOL)_containerized;
-(id)_compatibilityObjectWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)iconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSDictionary *)iconDictionary;
-(void)_LSRecord_resolve_iconDictionary;
-(id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 placeholderBehavior:(long long)arg3 systemPlaceholder:(BOOL)arg4 itemID:(unsigned long long)arg5 forceInBundleContainer:(BOOL)arg6 context:(LSContext*)arg7 error:(id*)arg8 ;
-(id)teamIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)counterpartIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)minimumSystemVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSString *)minimumSystemVersion;
-(id)maximumSystemVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSString *)maximumSystemVersion;
-(id)exactBundleVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)shortVersionStringWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(BOOL)isSystemPlaceholderWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)applicationStateWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(BOOL)isDeletableWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(BOOL)isDeletableSystemApplicationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(BOOL)isDeletableSystemApplication;
-(BOOL)isAppStoreVendableWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)appStoreToolsBuildVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSString *)appStoreToolsBuildVersion;
-(id)userActivityTypesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)applicationExtensionRecordsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)diskUsageWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)backgroundTaskSchedulerPermittedIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSArray *)backgroundTaskSchedulerPermittedIdentifiers;
-(unsigned long long)_rawBundleFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned)_rawPlistFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned)_rawPlistFlags;
-(unsigned char)_rawIconFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned char)_rawIconFlags;
-(LSBundleMoreFlags)_rawMoreFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(LSBundleMoreFlags)_rawMoreFlags;
-(int)_bundleModTimeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)_iconFileNamesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)_localizedNamesWithContextWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSDictionary *)_localizedNamesWithContext;
-(id)_preferredLaunchArchitectureWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)_rawEnvironmentVariablesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(_LSLazyPropertyList *)_rawEnvironmentVariables;
-(id)_deviceIdentifierVendorNameWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)_persistentIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(NSArray *)supportedGameControllers;
-(id)initWithBundleIdentifierOfSystemPlaceholder:(id)arg1 error:(id*)arg2 ;
-(id)initWithStoreItemIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)_LSRecord_resolve_teamIdentifier;
-(void)_LSRecord_resolve_counterpartIdentifiers;
-(void)_LSRecord_resolve_minimumSystemVersion;
-(void)_LSRecord_resolve_maximumSystemVersion;
-(void)_LSRecord_resolve_exactBundleVersion;
-(void)_LSRecord_resolve_shortVersionString;
-(void)_LSRecord_resolve_isSystemPlaceholder;
-(void)_LSRecord_resolve_applicationState;
-(void)_LSRecord_resolve_isDeletable;
-(void)_LSRecord_resolve_isDeletableSystemApplication;
-(void)_LSRecord_resolve_isAppStoreVendable;
-(void)_LSRecord_resolve_appStoreToolsBuildVersion;
-(void)_LSRecord_resolve_userActivityTypes;
-(BOOL)canHandleWebAuthentication;
-(void)_LSRecord_resolve_applicationExtensionRecords;
-(BOOL)isArcadeApp;
-(void)_LSRecord_resolve_diskUsage;
-(BOOL)supportsAudiobooks;
-(void)_LSRecord_resolve_backgroundTaskSchedulerPermittedIdentifiers;
-(NSArray *)carPlayInstrumentClusterURLSchemes;
-(BOOL)supportsCarPlayDashboardScene;
-(BOOL)supportsCarPlayInstrumentClusterScene;
-(LSAppClipMetadata *)appClipMetadata;
-(BOOL)shouldShowSecurityPromptsOnSignIn;
-(BOOL)isWebBrowser;
-(BOOL)isMailClient;
-(BOOL)supportsSpotlightQueryContinuation;
-(BOOL)requiresNativeExecution;
-(id)bundleVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve__rawBundleFlags;
-(void)_LSRecord_resolve__rawPlistFlags;
-(void)_LSRecord_resolve__rawIconFlags;
-(void)_LSRecord_resolve__rawMoreFlags;
-(void)_LSRecord_resolve__bundleModTime;
-(void)_LSRecord_resolve__iconFileNames;
-(void)_LSRecord_resolve__localizedNamesWithContext;
-(void)_LSRecord_resolve__preferredLaunchArchitecture;
-(void)_LSRecord_resolve__rawEnvironmentVariables;
-(void)_LSRecord_resolve__deviceIdentifierVendorName;
-(id)bundleContainerURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_bundleContainerURL;
-(id)iTunesMetadataWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_iTunesMetadata;
-(id)directionsModesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSArray *)directionsModes;
-(id)audioComponentsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSArray *)audioComponents;
-(id)externalAccessoryProtocolsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)staticShortcutItemsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSArray *)staticShortcutItems;
-(id)VPNPluginsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSArray *)VPNPlugins;
-(id)appTagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)requiredDeviceCapabilitiesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)deviceFamiliesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve_directionsModes;
-(void)_LSRecord_resolve_audioComponents;
-(void)_LSRecord_resolve_externalAccessoryProtocols;
-(void)_LSRecord_resolve_staticShortcutItems;
-(void)_LSRecord_resolve_VPNPlugins;
-(void)_LSRecord_resolve_appTags;
-(void)_LSRecord_resolve_requiredDeviceCapabilities;
-(void)_LSRecord_resolve_deviceFamilies;
-(BOOL)supportsExternallyPlayableContent;
-(BOOL)supportsOpenInPlace;
-(BOOL)supportsPurgeableLocalStorage;
-(id)localizedNameWithContext:(id)arg1 preferredLocalizations:(id)arg2 ;
-(BOOL)wasRenamed;
-(id)_rawIconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(_LSLazyPropertyList *)_rawIconDictionary;
-(void)_LSRecord_resolve__rawIconDictionary;
-(BOOL)supportsAlternateIconNames;
-(id)supportedGameControllersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(BOOL)supportsControllerUserInteraction;
-(void)_LSRecord_resolve_supportedGameControllers;
-(BOOL)isWrapper;
-(unsigned long long)applicationDSIDWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned long long)applicationDownloaderDSIDWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned long long)applicationFamilyIDWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned long long)installTypeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(unsigned long long)placeholderFailureReasonWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)uniqueInstallIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSData *)uniqueInstallIdentifier;
-(id)installSessionIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSData *)installSessionIdentifier;
-(void)_LSRecord_resolve_applicationDSID;
-(void)_LSRecord_resolve_applicationDownloaderDSID;
-(void)_LSRecord_resolve_applicationFamilyID;
-(void)_LSRecord_resolve_installType;
-(BOOL)hasCustomNotification;
-(void)_LSRecord_resolve_placeholderFailureReason;
-(BOOL)isRemovableByInstallMachinery;
-(void)_LSRecord_resolve_uniqueInstallIdentifier;
-(void)_LSRecord_resolve_installSessionIdentifier;
-(id)companionBundleIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSString *)companionBundleIdentifier;
-(id)initWithBundleIdentifierOfCompanionApplication:(id)arg1 error:(id*)arg2 ;
-(void)_LSRecord_resolve_companionBundleIdentifier;
-(unsigned char)watchKitApplicationType;
-(NSString *)watchKitVersion;
-(NSString *)complicationPrincipalClassName;
-(NSArray *)supportedComplicationFamilies;
-(BOOL)hasComplication;
-(BOOL)hasGlance;
-(BOOL)shouldSkipWatchAppInstall;
-(BOOL)isWatchOnly;
-(NSString *)watchKitApplicationTintColorName;
-(id)typeForInstallMachineryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)initForInstallMachineryWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)initForInstallMachineryWithBundleIdentifier:(id)arg1 placeholder:(BOOL)arg2 error:(id*)arg3 ;
-(void)_LSRecord_resolve_typeForInstallMachinery;
@end

