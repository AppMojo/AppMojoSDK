//
//  AMListener.h
//  AppMojoSDK
//
//  Created by appsynth on 7/3/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#ifndef AppMojoSDK_AMListener_h
#define AppMojoSDK_AMListener_h

@class AMBanner;

@protocol AMDelegate <NSObject>

@optional
- (void) amAdConfigNotExist: (NSString *) placementID;

@end

#endif
