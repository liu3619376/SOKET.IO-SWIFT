//
//  MC_SwiftConfig.m
//  MiCall
//
//  Created by cocool on 2021/7/21.
//

#import "MC_SwiftConfig.h"

@implementation MC_SwiftConfig



+ (instancetype)share{
 
    static MC_SwiftConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [[self alloc]init];
    });
    return config;
    
}


@end
