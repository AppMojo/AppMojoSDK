//
//  AMBannerListener.h
//  AppMojoSDK
//
//  Created by appsynth on 7/3/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#ifndef AppMojoSDK_AMBannerListener_h
#define AppMojoSDK_AMBannerListener_h

#import "AMDelegate.h"


@class AMBannerView;
@class AMError;


@protocol AMBannerDelegate <AMDelegate>

@optional
- (void) amAdDidReceiveAd: (AMBannerView *) bannerView;

- (void) amAd: (AMBannerView *) ad didFailToReceiveAdWithError: (AMError *) error;

- (void) amAdWillPresentScreen: (AMBannerView *) ad;

- (void) amAdWillDismissScreen: (AMBannerView *) ad;

- (void) amAdDidDismissScreen: (AMBannerView *) ad;

- (void) amAdWillLeaveAppication: (AMBannerView *) ad;

@end

#endif
