//
//  AMPrivateBannerListener.h
//  AppMojoSDK
//
//  Created by appsynth on 7/2/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#ifndef AppMojoSDK_AMPrivateBannerListener_h
#define AppMojoSDK_AMPrivateBannerListener_h


#import "AMBannerAdapter.h"
#import "AMError.h"


@protocol AMPrivateBannerListener <NSObject>

/*
 * load
 */
- (void) amBannerDidReceiveAd: (AMBannerAdapter *) banner;

/*
 * fail
 */
- (void) amBanner: (AMBannerAdapter *) banner didFailToReceiveAdWithError: (AMError *) error;

/*
 * open
 */
- (void) amBannerWillPresentScreen:(AMBannerAdapter *) banner;

/*
 * will close
 */
- (void) amBannerWillDismissScreen:(AMBannerAdapter *) banner;

/*
 * close
 */
- (void) amBannerDidDismissScreen:(AMBannerAdapter *) banner;

/*
 * left application
 */
- (void) amBannerWillLeaveAppication:(AMBannerAdapter *) banner;

@end


#endif
