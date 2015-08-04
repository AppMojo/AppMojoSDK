//
//  AMAdRequest.h
//  AppMojoSDK
//
//  Created by appsynth on 7/2/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "AMTypes.h"


@interface AMAdRequest : NSObject

@property (nonatomic, strong) NSArray *testDevices;           // device IDs for testing on AdMob
@property (nonatomic, strong) NSDate *birthday;
@property (nonatomic, assign) AMGender gender;
@property (nonatomic, copy) NSString *requestAgent;

@property (nonatomic, strong) CLLocation *location;
@property (nonatomic, copy) NSString *locationDescription; // This value can be used as a location description for AdMob Request

@property (nonatomic, assign, getter= isTestOnSimulator) BOOL testOnSimulator;

@end
