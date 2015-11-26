//
//  AMBannerView.h
//  AppMojoSDK
//
//  Created by AppMojo on 7/3/15.
//  Copyright (c) 2015 AppMojo. All rights reserved.
//

#import <UIKit/UIKit.h>


#import "AMAdProtocol.h"
#import "AMBannerDelegate.h"


@interface AMBannerView : UIView <AMAdProtocol>


#pragma mark - AMAdProtocol

@property (nonatomic, weak) id<AMBannerDelegate> delegate;
@property (nonatomic, copy) IBInspectable NSString *placementID;

- (void) loadAd: (AMAdRequest *) adRequest;
- (void) reloadAd;
- (NSString *) currentAdUnitID;


#pragma mark - AMBannerView

@property (nonatomic, assign) CGSize size;

/*
 * Origin of banner referred to its superview
 */
//@property (nonatomic, assign) CGPoint origin;

/*
 * The root view controller to be presented on
 */
@property (nonatomic, weak) UIViewController *rootViewController;

/**
 * Origin default is (0,0)
 */
- (instancetype) initWithSize: (CGSize) size;
- (instancetype) initWithSize: (CGSize) size origin: (CGPoint) origin;

@end
