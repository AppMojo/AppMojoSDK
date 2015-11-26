//
//  AMInterstitialAdapter.h
//  AppMojoSDK
//
//  Created by appsynth on 7/3/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol AMPrivateInterstitialListener;
@class AMInterstitialRequest;


/**
 * This is abstract class. The implementation will be in built-in class for a particular ad network,
 * e.g., AMAdMobInterstitialAdapter, AMXXXInterstitialAdapter
 */
@interface AMInterstitialAdapter : NSObject

/*
 * Abstract method
 */
- (id) loadInterstitialWithRequest: (AMInterstitialRequest *) interstitialRequest
                          listener: (id<AMPrivateInterstitialListener>) listener;

/*
 * Abstract method
 */
- (void) presentFromRootViewController: (UIViewController *) rootViewController;

/*
 * Abstract method
 */
- (BOOL) isReady;

/*
 * Abstract method
 */
- (BOOL) hasBeenUsed;

@end

