//
//  AMListener.h
//  AppMojoSDK
//
//  Created by AppMojo on 7/3/15.
//  Copyright (c) 2015 AppMojo. All rights reserved.
//

#ifndef AppMojoSDK_AMListener_h
#define AppMojoSDK_AMListener_h

@protocol AMDelegate <NSObject>

@optional
- (void) amAdConfigNotExist: (NSString *) placementID;

@end

#endif
