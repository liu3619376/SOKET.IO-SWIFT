//
//  MC_SwiftConfig.h
//  MiCall
//
//  Created by cocool on 2021/7/21.
//

#import <Foundation/Foundation.h>



@interface MC_SwiftConfig : NSObject

+ (instancetype)share;



@property (nonatomic, strong) NSString *ipAddress;
@property (nonatomic, assign) NSInteger port;
@property (nonatomic, assign) NSInteger SOCKSEnable;//0 , 1

@property (nonatomic, assign) NSInteger type;
@property (nonatomic, strong) NSString *socketStr;

@end

