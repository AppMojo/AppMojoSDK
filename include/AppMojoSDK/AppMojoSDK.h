//
//  AppMojoSDK.h
//  AppMojoSDK
//
//  Created by AppMojo on 7/1/15.
//  Copyright (c) 2015 AppMojo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_7_0
#error The AppMojo SDK requires a deployment target of iOS 7.0 or later.
#endif

/**
 * These are the class that user can play with
 */
#import "AMSize.h"
#import "AMBannerView.h"
#import "AMInterstitial.h"
#import "AMBannerDelegate.h"
#import "AMInterstitialDelegate.h"
#import "AMAdRequest.h"
#import "AMAppEngine.h"
#import "AMError.h"
#import "AMTypes.h"
#import "AMDelegate.h"
#import "AMAdProtocol.h"

