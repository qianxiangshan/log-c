#ifndef _CHECK_H_
#define _CHECK_H_

#include "debug.h"



#define D_CHECK(condition) \
    do {    \
        if(!condition){ \
            log_log("%s \n","ASSERT","check condition fail"); \
            exit(-1); \
        }\
    }while(0)


#endif //_CHECK_H_