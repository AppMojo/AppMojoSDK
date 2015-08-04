//
//  AMSize.h
//  AppMojoSDK
//
//  Created by appsynth on 7/4/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


#pragma mark - Standard Sizes

extern CGFloat const kAMAdSizeUnspecified;

// The constants are mimic from AdMob SDK (GoogleMobileAds.framework)

// 320x50 - AdMob, Mopub
extern CGSize const kAMAdSizeBanner;

// 320x100 - AdMob
extern CGSize const kAMAdSizeLargeBanner;

// 300x250 - AdMob Mopub
extern CGSize const kAMAdSizeMediumRectangle;

// 468x60 - AdMob
extern CGSize const kAMAdSizeFullBanner;

// 728x90 - Admob, Mopub
extern CGSize const kAMAdSizeLeaderboard;

// 120x600 - Admob (mediation only)
extern CGSize const kAMAdSizeSkyscraper;

// 160x600 - Mopub
extern CGSize const kAMAdSizeWideSkyscraper;

//The height is typically 50 pixels on an iPhone/iPod UI, and 90 pixels tall on an iPad UI.
extern CGSize const kAMAdSizeSmartBannerPortrait;

// The height is typically 32 pixels on an iPhone/iPod UI, and 90 pixels tall on an iPad UI.
extern CGSize const kAMAdSizeSmartBannerLandscape;

/// Invalid ad size marker.
extern CGSize const kAMAdSizeInvalid;




