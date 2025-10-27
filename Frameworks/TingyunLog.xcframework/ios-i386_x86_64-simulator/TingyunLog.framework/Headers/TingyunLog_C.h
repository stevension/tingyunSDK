//
//  TingyunLog_C.h
//

#ifndef TingyunLog_C_h
#define TingyunLog_C_h

#import <TingyunLog/TingyunLogUtil.h>

#pragma mark - C&&C++

#define TINGYUNAPP_LOG_DEBUG_C(tag, format, ...)  TINGYUNAPP_LOG_C(NBSLogLevelDebug, tag, format, ##__VA_ARGS__)
#define TINGYUNAPP_LOG_INFO_C(tag, format, ...)   TINGYUNAPP_LOG_C(NBSLogLevelInfo, tag, format, ##__VA_ARGS__)
#define TINGYUNAPP_LOG_WARN_C(tag, format, ...)   TINGYUNAPP_LOG_C(NBSLogLevelWarn, tag, format, ##__VA_ARGS__)
#define TINGYUNAPP_LOG_ERROR_C(tag, format, ...)  TINGYUNAPP_LOG_C(NBSLogLevelError, tag, format, ##__VA_ARGS__)

#pragma mark - example
/**
 *TINGYUNAPP_LOG_DEBUG_C("login","username:%s","steven")
 */
#endif /* TingyunLog_C_h */
