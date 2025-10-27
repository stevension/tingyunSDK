//
//  NBSAppAgentLogUtil.h
//

#ifndef NBSAppAgentLogUtil_h
#define NBSAppAgentLogUtil_h

#ifdef __FILE_NAME__
#define __TINGYUN_LOG_FILE_NAME__ __FILE_NAME__
#else
#define __TINGYUN_LOG_FILE_NAME__ __FILE__
#endif

typedef enum {
    NBSLogLevelDebug        = 1 << 0,
    NBSLogLevelInfo         = 1 << 1,
    NBSLogLevelWarn         = 1 << 2,
    NBSLogLevelError        = 1 << 3,
}NBSLogLevel;

#define NBS_CLOG(format, ...) ([[NSString stringWithFormat:format, ##__VA_ARGS__, nil] UTF8String])

#define TINGYUNAPP_LOG(_level, _tag, _format, ...)\
do{\
nbs_tingyun_log_write(_level, _tag, __TINGYUN_LOG_FILE_NAME__, __FUNCTION__, __LINE__, _format);\
}while(0);\

#define TINGYUNAPP_LOG_C(_level, _tag, _format, ...)\
do{\
nbs_tingyun_log_write_c(_level, _tag, __TINGYUN_LOG_FILE_NAME__, __FUNCTION__, __LINE__, _format, ##__VA_ARGS__);\
}while(0);\


#ifdef __cplusplus
extern "C" {
#endif
void nbs_tingyun_log_write_c(int logLevel,const char *tag, const char *fileName, const char *funcName, int line, const char *format, ...);
void nbs_tingyun_log_write(int logLevel,const char *tag, const char *fileName, const char *funcName, int line, const char *format);
#ifdef __cplusplus
}
#endif

#endif /* NBSAppAgentLogUtil_h */
