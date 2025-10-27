//
//  TingyunLog.h
//

#import <Foundation/Foundation.h>

#ifndef TingyunApp_Log_h
#define TingyunApp_Log_h

#import <tingyunApp/NBSAppAgent.h>
#import <TingyunLog/TingyunLogUtil.h>
#import <TingyunLog/TingyunLog_C.h>

#pragma mark - Objective-C
#define TINGYUNAPP_LOG_DEBUG(tag, format, ...)  @autoreleasepool{TINGYUNAPP_LOG(NBSLogLevelDebug, [tag UTF8String], NBS_CLOG(format, ##__VA_ARGS__))}

#define TINGYUNAPP_LOG_INFO(tag, format, ...)   @autoreleasepool{TINGYUNAPP_LOG(NBSLogLevelInfo, [tag UTF8String],  NBS_CLOG(format, ##__VA_ARGS__))}

#define TINGYUNAPP_LOG_WARN(tag, format, ...)   @autoreleasepool{TINGYUNAPP_LOG(NBSLogLevelWarn, [tag UTF8String],  NBS_CLOG(format, ##__VA_ARGS__))}

#define TINGYUNAPP_LOG_ERROR(tag, format, ...)  @autoreleasepool{TINGYUNAPP_LOG(NBSLogLevelError, [tag UTF8String],  NBS_CLOG(format, ##__VA_ARGS__))}

#pragma mark - example
/**
 *TINGYUNAPP_LOG_DEBUG(@"login",@"username:%@",@"steven")
 */


@interface NBSAppAgent (TYLog)

///向控制台输出日志，默认关闭
+ (void)enableConsoleLog;

/**
 Swift 日志记录方法
 */
#pragma mark - Swift
/**
 *debug日志
 */
+ (void)debugLog:(NSString *)format tag:(NSString *)tag fileName:(NSString *)fileName funcName:(NSString *)funcName line:(int)line;

/**
 *info日志
 */
+ (void)infoLog:(NSString *)format tag:(NSString *)tag fileName:(NSString *)fileName funcName:(NSString *)funcName line:(int)line;

/**
 *warn日志
 */
+ (void)warnLog:(NSString *)format tag:(NSString *)tag fileName:(NSString *)fileName funcName:(NSString *)funcName line:(int)line;

/**
 *error日志
 */
+ (void)errorLog:(NSString *)format tag:(NSString *)tag fileName:(NSString *)fileName funcName:(NSString *)funcName line:(int)line;

@end

#endif /* TingyunApp_Log_h */
