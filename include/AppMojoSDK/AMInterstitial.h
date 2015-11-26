//
//  AMInterstitial.h
//  AppMojoSDK
//
//  Created by appsynth on 7/3/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "AMAdProtocol.h"
#import "AMInterstitialDelegate.h"


@class AMController;


@interface AMInterstitial : NSObject <AMAdProtocol>


#pragma mark - AMAdProtocol

@property (nonatomic, weak) id<AMInterstitialDelegate> delegate;
@property (nonatomic, copy) IBInspectable NSString *placementID;
- (void) loadAd: (AMAdRequest *) adRequest;
- (void) reloadAd;
- (NSString *) currentAdUnitID;


#pragma mark - AMInterstitial

- (void) presentFromRootViewController:(UIViewController *) rootViewController;
- (BOOL) isReady;
- (BOOL) hasBeenUsed;

@end
