//
//  AMBannerView.h
//  AppMojoSDK
//
//  Created by appsynth on 7/3/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#import <UIKit/UIKit.h>


#import "AMAdProtocol.h"
#import "AMBannerDelegate.h"
#import "AMDelegate.h"


@interface AMBannerView : UIView <AMAdProtocol>


#pragma mark - AMAdProtocol

@property (nonatomic, weak) id<AMBannerDelegate> delegate;

- (void) loadAd: (AMAdRequest *) adRequest;
- (void) reloadAd;
- (NSString *) currentAdUnitID;


#pragma mark - AMBannerView

@property (nonatomic, assign) CGSize size;

//@property (nonatomic, assign) CGPoint origin;                       // Origin of banner referred to its superview

@property (nonatomic, weak) UIViewController *rootViewController;   // The root view controller to be presented on

- (instancetype) initWithSize: (CGSize) size;
- (instancetype) initWithSize: (CGSize) size origin: (CGPoint) origin;

@end
