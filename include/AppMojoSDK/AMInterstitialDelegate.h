//
//  AMInterstitialListener.h
//  AppMojoSDK
//
//  Created by appsynth on 7/3/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#ifndef AppMojoSDK_AMInterstitialListener_h
#define AppMojoSDK_AMInterstitialListener_h

#import "AMDelegate.h"


@class AMInterstitial;
@class AMError;


typedef NS_ENUM(NSInteger, AMFrequencyCapReason) {
    kAMFrequencyCapReasonDay = 1,
    kAMFrequencyCapReasonHour,
    kAMFrequencyCapReasonSession,
};



@protocol AMInterstitialDelegate <AMDelegate>

@optional
- (void) amInterstitialDidReceiveAd: (AMInterstitial *) ad;

- (void) amInterstitial: (AMInterstitial *) ad didFailToReceiveAdWithError: (AMError *) error;

- (void) amInterstitialWillPresentScreen: (AMInterstitial *) ad;

- (void) amInterstitialWillDismissScreen: (AMInterstitial *) ad;

- (void) amInterstitialDidDismissScreen: (AMInterstitial *) ad;

- (void) amInterstitialWillLeaveAppication: (AMInterstitial *) ad;

- (void) amInterstitial: (AMInterstitial *) ad didReachFrequencyCap: (AMFrequencyCapReason) reason;

@end

#endif
