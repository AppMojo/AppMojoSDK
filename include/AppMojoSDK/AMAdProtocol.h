//
//  AMAdProtocol.h
//  AppMojoSDK
//
//  Created by appsynth on 7/3/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#ifndef AppMojoSDK_AMAdProtocol_h
#define AppMojoSDK_AMAdProtocol_h


@class AMAdRequest;

@protocol AMDelegate;


@protocol AMAdProtocol <NSObject>

- (void) loadAd: (AMAdRequest *) adRequest;
- (void) reloadAd;
- (NSString *) currentAdUnitID;

/* 
 * AppMojo Unique identifer
 */
@property (nonatomic, copy) NSString *placementID;

/* 
 * This listener will be subclassed as AMBannerView and AMInterstitial protocol
 */
@property (nonatomic, weak) id <AMDelegate> delegate;

@end

#endif