//
//  AMAppEngine.h
//  AppMojoSDK
//
//  Created by appsynth on 7/20/15.
//  Copyright (c) 2015 Appsynth. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AMAppEngine : NSObject

+ (void) startWithAppID: (NSString *) appID appSecret: (NSString *) appSecret;

@end
