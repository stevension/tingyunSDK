//
//  NBSGMSM3.h
//  NBSGMKit
//
//  Created by 唐桂帆 on 2021/4/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NBSGMSM3 : NSObject
/// 提取文本字符串的摘要值。返回值：摘要值，16进制编码格式
/// @param plaintext 待提取摘要的字符串
+ (nullable NSString *)hashWithString:(NSString *)plaintext;

/// 提取数据或文件的摘要值。返回值：摘要值，16进制编码格式
/// @param plainData 待提取摘要的数据
+ (nullable NSString *)hashWithData:(NSData *)plainData;
@end

NS_ASSUME_NONNULL_END
