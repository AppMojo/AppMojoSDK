//
//  AMBannerAdapter.h
//  AppMojoSDK
//
//  Created by AppMojo on 7/3/15.
//  Copyright (c) 2015 AppMojo. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol AMPrivateBannerListener;
@class AMBannerRequest;


/**
 * This is abstract class. The implementation will be in built-in class for a particular ad network, 
 * e.g., AMAdMobBannerAdapter, AMXXXBannerAdapter
 */
@interface AMBannerAdapter : NSObject

/*
 * Abstact method
 */
- (id) loadBannerWithRequest: (AMBannerRequest *) bannerRequest
                    listener: (id<AMPrivateBannerListener>) listener;
    
@end
