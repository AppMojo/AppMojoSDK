//
//  AMPrivateBannerListener.h
//  AppMojoSDK
//
//  Created by AppMojo on 7/2/15.
//  Copyright (c) 2015 AppMojo. All rights reserved.
//

#ifndef AppMojoSDK_AMPrivateBannerListener_h
#define AppMojoSDK_AMPrivateBannerListener_h


@class AMBannerAdapter;
@class AMError;


@protocol AMPrivateBannerListener <NSObject>

/*
 * load
 */
- (void) amBannerDidReceiveAd: (AMBannerAdapter *) bannerAdapter;

/*
 * fail
 */
- (void) amBanner: (AMBannerAdapter *) banner didFailToReceiveAdWithError: (AMError *) error;

/*
 * open
 */
- (void) amBannerWillPresentScreen:(AMBannerAdapter *) bannerAdapter;

/*
 * will close
 */
- (void) amBannerWillDismissScreen:(AMBannerAdapter *) bannerAdapter;

/*
 * close
 */
- (void) amBannerDidDismissScreen:(AMBannerAdapter *) bannerAdapter;

/*
 * left application
 */
- (void) amBannerWillLeaveAppication:(AMBannerAdapter *) bannerAdapter;

@end


#endif
