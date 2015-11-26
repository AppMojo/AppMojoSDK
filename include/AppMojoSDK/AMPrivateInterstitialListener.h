//
//  AMPrivateInterstitialListener.h
//  AppMojoSDK
//
//  Created by appsynth on 7/3/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#ifndef AppMojoSDK_AMPrivateInterstitialListener_h
#define AppMojoSDK_AMPrivateInterstitialListener_h


@class AMInterstitialAdapter;
@class AMError;


@protocol AMPrivateInterstitialListener <NSObject>

/*
 * load
 */
- (void) amInterstitialDidReceiveAd: (AMInterstitialAdapter *) interstitialAdapter;

/*
 * fail
 */
- (void) amInterstitial: (AMInterstitialAdapter *) interstitialAdapter didFailToReceiveAdWithError: (AMError *) error;

/*
 * open
 */
- (void) amInterstitialWillPresentScreen:(AMInterstitialAdapter *) interstitialAdapter;

/*
 * will close
 */
- (void) amInterstitialWillDismissScreen:(AMInterstitialAdapter *) interstitialAdapter;

/*
 * close
 */
- (void) amInterstitialDidDismissScreen:(AMInterstitialAdapter *) interstitialAdapter;

/*
 * left application
 */
- (void) amInterstitialWillLeaveAppication:(AMInterstitialAdapter *) interstitial;

@end

#endif
