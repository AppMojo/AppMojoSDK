//
//  AMBannerRequest.h
//  AppMojoSDK
//
//  Created by appsynth on 7/2/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#import "AMPrivateAdRequest.h"

@interface AMBannerRequest : AMPrivateAdRequest

@property (nonatomic, assign) CGSize adSize;
@property (nonatomic, assign) NSInteger refreshRate;

/*
 * This property is required by GADBannerView (AdMob SDK)
 */
@property (nonatomic, weak) UIViewController *rootViewControler;

@end
