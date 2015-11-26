//
//  AMAppEngine.h
//  AppMojoSDK
//
//  Created by AppMojo on 7/20/15.
//  Copyright (c) 2015 AppMojo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AMAppEngine : NSObject

+ (void) startWithAppID: (NSString *) appID appSecret: (NSString *) appSecret;

@end
