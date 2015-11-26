//
//  AMAdRequest.h
//  AppMojoSDK
//
//  Created by AppMojo on 7/2/15.
//  Copyright (c) 2015 AppMojo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "AMTypes.h"


@interface AMAdRequest : NSObject

/**
 * Test Ads will be returned for devices with device IDs specified in this array.
 */
@property (nonatomic, strong) NSArray *testDevices;           // device IDs for testing on AdMob
@property (nonatomic, strong) NSDate *birthday;
@property (nonatomic, assign) AMGender gender;
@property (nonatomic, copy) NSString *requestAgent;
@property(nonatomic, strong) NSArray *keywords;
@property(nonatomic, copy) NSString *contentURL;

@property (nonatomic, strong) CLLocation *location;

/**
 * Set this proproty to YES if you want a test Ads present on Simulator, instead of actual Ads;
 * otherwise, the actual Ads will be presented.
 * The default value is NO
 */
@property (nonatomic, assign, getter= isTestOnSimulator) BOOL testOnSimulator;

@end
