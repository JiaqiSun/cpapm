//
//  NetProtocol.h
//  cpapm
//
//  Created by yangyouyong on 2017/12/28.
//  Copyright © 2017年 cpbee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NetAnt.h"

@interface NetProtocol : NSURLProtocol

+(void)open;
+(void)close;

+(void)addDelegate:(id<NetAntDelegate>)delegate;
+(void)removeDelegate:(id<NetAntDelegate>)delegate;

+(NSArray *)delegates;

@end
