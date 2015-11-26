//
//  AMPrivateAdRequest.h
//  AppMojoSDK
//
//  Created by AppMojo on 7/2/15.
//  Copyright (c) 2015 AppMojo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

#import "AMTypes.h"

@class AMAdRequest;


@interface AMPrivateAdRequest : NSObject


#pragma mark - Ad Request

@property(nonatomic, strong) NSArray *testDevices;
@property(nonatomic, strong) NSDate *birthday;
@property(nonatomic, assign) AMGender gender;
@property(nonatomic, copy) NSString *requestAgent;
@property(nonatomic, strong) NSArray *keywords;
@property(nonatomic, copy) NSString *contentURL;

@property(nonatomic, strong) CLLocation *location;
@property (nonatomic, assign, getter = isTestOnSimulator) BOOL testOnSimulator;


#pragma mark - Ad ID

@property(nonatomic, copy) NSString *adUnitID;
@property(nonatomic, assign) AMAdNetwork adNetwork;

- (instancetype) initWithAMAdRequest: (AMAdRequest *) amAdRequest;

@end
