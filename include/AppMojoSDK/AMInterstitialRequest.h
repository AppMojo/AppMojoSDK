//
//  AMInterstitialRequest.h
//  AppMojoSDK
//
//  Created by appsynth on 7/2/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#import "AMPrivateAdRequest.h"

@interface AMInterstitialRequest : AMPrivateAdRequest

@property (nonatomic, assign) NSInteger dayFrequencyCap;
@property (nonatomic, assign) NSInteger hourFrequencyCap;
@property (nonatomic, assign) NSInteger sessionFrequencyCap;

@end
