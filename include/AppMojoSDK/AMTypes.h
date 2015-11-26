//
//  AMTypes.h
//  AppMojoSDK
//
//  Created by AppMojo on 7/2/15.
//  Copyright (c) 2015 AppMojo. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef AppMojoSDK_AMTypes_h
#define AppMojoSDK_AMTypes_h

typedef NS_ENUM(NSInteger, AMGender) {
    kAMGenderUnknown,
    kAMGenderMale,
    kAMGenderFemale
};

typedef NS_ENUM(NSInteger, AMAdNetwork) {
    kAMAdNetworkUnknown,
    kAMAdNetworkAdmob,
    kAMAdNetworkFacebook,
    kAMAdNetworkAmazon,
    kAMAdNetworkMopub
};

#endif
