//
//  NBSVerify.h
//  NBSGMKit
//
//  Created by 唐桂帆 on 2021/8/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define Version @"1.0.3"

@interface NBSGMVerify : NSObject

+ (BOOL)verifyCer:(NSString *)cerContent withCa:(NSString *)caContent;

+ (NSString *)getPublicKeyFromCer:(NSString *)cerContent;

+ (BOOL)isCaValidity:(NSString *)caContent;

@end

NS_ASSUME_NONNULL_END
