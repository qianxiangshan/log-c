
#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

typedef enum LOG_LEVEL_E_{
    NONE=0,
    FATAL=1,
    ERROR=2,
    INFO=3,
    WARN=4,
    TRACE=5
}LOG_LEVEL_E;

//全局变量
LOG_LEVEL_E log_level_g;


#define LOG_LEVEL_SET(log_level) \
     log_level_g=log_level


#define LOG_FATAL(fmt,...) \
    do {           \
        if (FATAL > log_level_g){ \
            break; \
        }   \
        time_t timep; \
        struct tm *p; \
        time(&timep); \
        p = localtime(&timep); \
        printf("%04d-%02d-%02d %02d:%02d:%02d [FATAL] [%s:%d] [%s()] " fmt,(1900+p->tm_year), (1+p->tm_mon), p->tm_mday,p->tm_hour, p->tm_min, p->tm_sec, __FILE__,__LINE__,__FUNCTION__,  __VA_ARGS__); \
    }while(0)


#define LOG_INFO(fmt,...)  \
    do {           \
        if (INFO > log_level_g){ \
            break; \
        }    \
        time_t timep; \
        struct tm *p; \
        time(&timep); \
        p = localtime(&timep); \
        printf("%04d-%02d-%02d %d:%d:%d [INFO ] [%s:%d] [%s()] " fmt,(1900+p->tm_year), (1+p->tm_mon), p->tm_mday,p->tm_hour, p->tm_min, p->tm_sec, __FILE__,__LINE__,__FUNCTION__,  __VA_ARGS__); \
    }while(0)    


#define LOG_WARN(fmt,...)  \
    do {           \
        if (WARN > log_level_g){ \
            break; \
        }    \
        time_t timep; \
        struct tm *p; \
        time(&timep); \
        p = localtime(&timep); \
        printf("%04d-%02d-%02d %d:%d:%d [WARN ] [%s:%d] [%s()] " fmt,(1900+p->tm_year), (1+p->tm_mon), p->tm_mday,p->tm_hour, p->tm_min, p->tm_sec, __FILE__,__LINE__,__FUNCTION__,  __VA_ARGS__); \
    }while(0)

#define LOG_ERROR(fmt,...)  \
    do {           \
        if (ERROR > log_level_g){ \
            break; \
        }    \
        time_t timep; \
        struct tm *p; \
        time(&timep); \
        p = localtime(&timep); \
        printf("%04d-%02d-%02d %d:%d:%d [ERROR] [%s:%d] [%s()] " fmt,(1900+p->tm_year), (1+p->tm_mon), p->tm_mday,p->tm_hour, p->tm_min, p->tm_sec, __FILE__,__LINE__,__FUNCTION__,  __VA_ARGS__); \
    }while(0)


#define LOG_TRACE(fmt,...)  \
    do {           \
        if (TRACE > log_level_g){ \
            break; \
        }    \
        time_t timep; \
        struct tm *p; \
        time(&timep); \
        p = localtime(&timep); \
        printf("%04d-%02d-%02d %d:%d:%d [TRACE] [%s:%d] [%s()] " fmt,(1900+p->tm_year), (1+p->tm_mon), p->tm_mday,p->tm_hour, p->tm_min, p->tm_sec, __FILE__,__LINE__,__FUNCTION__,  __VA_ARGS__); \
    }while(0)    

    
#endif //_DEBUG_H_