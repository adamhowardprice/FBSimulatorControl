//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@class NSBundle;
@class NSDictionary;
@class NSString;
@class SimRuntimePairingReuirements;

@interface SimRuntime : NSObject
{
    unsigned int _version;
    unsigned int _minHostVersion;
    unsigned int _maxHostVersion;
    unsigned int _minCoreSimulatorFrameworkVersion;
    unsigned int _maxCoreSimulatorFrameworkVersion;
    NSString *_name;
    NSString *_identifier;
    NSBundle *_bundle;
    NSString *_root;
    NSString *_versionString;
    NSString *_buildVersionString;
    NSString *_platformIdentifier;
    NSString *_platformName;
    NSDictionary *_supportedFeatures;
    NSDictionary *_supportedFeaturesConditionalOnDeviceType;
    NSDictionary *_requiredHostServices;
    NSDictionary *_forwardHostNotifications;
    NSDictionary *_forwardHostNotificationsWithState;
    NSString *_platformPath;
    NSArray *_supportedProductFamilyIDs;
    SimRuntimePairingReuirements *_pairingRequirements;
    NSArray *_preferredPairingDeviceTypes;
    NSDictionary *_environment_extra;
    void *_libLaunchHostHandle;
    NSDictionary *_aliases;
}

+ (id)updatedMaxCoreSimulatorVersions;
+ (id)updatedMaxHostVersions;
+ (id)supportedRuntimesByAlias;
+ (id)supportedRuntimesByIdentifier;
+ (id)supportedRuntimes;
@property (nonatomic, assign) unsigned int maxCoreSimulatorFrameworkVersion;
@property (nonatomic, assign) unsigned int minCoreSimulatorFrameworkVersion;
@property (nonatomic, assign) unsigned int maxHostVersion;
@property (nonatomic, assign) unsigned int minHostVersion;
@property (copy, nonatomic) NSDictionary *aliases;
@property (nonatomic, assign) void *libLaunchHostHandle;
@property (copy, nonatomic) NSDictionary *environment_extra;
@property (copy, nonatomic) NSArray *preferredPairingDeviceTypes;
@property (retain, nonatomic) SimRuntimePairingReuirements *pairingRequirements;
@property (copy, nonatomic) NSArray *supportedProductFamilyIDs;
@property (copy, nonatomic) NSString *platformPath;
@property (copy, nonatomic) NSDictionary *forwardHostNotificationsWithState;
@property (copy, nonatomic) NSDictionary *forwardHostNotifications;
@property (copy, nonatomic) NSDictionary *requiredHostServices;
@property (copy, nonatomic) NSDictionary *supportedFeaturesConditionalOnDeviceType;
@property (copy, nonatomic) NSDictionary *supportedFeatures;
@property (nonatomic, assign) unsigned int version;
@property (copy, nonatomic) NSString *platformName;
@property (copy, nonatomic) NSString *platformIdentifier;
@property (copy, nonatomic) NSString *buildVersionString;
@property (copy, nonatomic) NSString *versionString;
@property (copy, nonatomic) NSString *root;
@property (retain, nonatomic) NSBundle *bundle;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
- (id)platformRuntimeOverlay;
- (CDUnknownFunctionPointerType)launch_sim_set_death_handler;
- (CDUnknownFunctionPointerType)launch_sim_waitpid;
- (CDUnknownFunctionPointerType)launch_sim_spawn;
- (CDUnknownFunctionPointerType)launch_sim_getenv;
- (CDUnknownFunctionPointerType)launch_sim_bind_session_to_port;
- (CDUnknownFunctionPointerType)launch_sim_find_endpoint;
- (CDUnknownFunctionPointerType)launch_sim_unregister_endpoint;
- (CDUnknownFunctionPointerType)launch_sim_register_endpoint;
- (BOOL)isAvailableWithError:(id *)arg1;
@property (readonly, nonatomic) BOOL available;
- (id)dyld_simPath;
- (BOOL)createInitialContentPath:(id)arg1 error:(id *)arg2;
- (id)sampleContentPath;
- (long long)compare:(id)arg1;
- (BOOL)supportsFeatureConditionally:(id)arg1;
- (BOOL)supportsFeature:(id)arg1;
- (BOOL)supportsDeviceType:(id)arg1;
- (id)environment;
- (id)description;
- (id)initWithBundle:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)init;

@end
