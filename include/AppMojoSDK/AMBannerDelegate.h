//
//  AMBannerListener.h
//  AppMojoSDK
//
//  Created by AppMojo on 7/3/15.
//  Copyright (c) 2015 AppMojo. All rights reserved.
//

#ifndef AppMojoSDK_AMBannerListener_h
#define AppMojoSDK_AMBannerListener_h

#import "AMDelegate.h"


@class AMBannerView;
@class AMError;


@protocol AMBannerDelegate <AMDelegate>

@optional
- (void) amAdDidReceiveAd: (AMBannerView *) banner;

- (void) amAd: (AMBannerView *) banner didFailToReceiveAdWithError: (AMError *) error;

- (void) amAdWillPresentScreen: (AMBannerView *) banner;

- (void) amAdWillDismissScreen: (AMBannerView *) banner;

- (void) amAdDidDismissScreen: (AMBannerView *) banner;

- (void) amAdWillLeaveAppication: (AMBannerView *) banner;

@end

#endif
