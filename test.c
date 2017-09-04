#include "debug.h"
#include <time.h>

void main(){
    

    LOG_LEVEL_SET(INFO);

    LOG_INFO("gg %d\n",3);

    LOG_WARN("gg %d\n",3);

    LOG_ERROR("gg %d\n",3);

    LOG_TRACE("gg %d\n",3);
    LOG_FATAL("gg %d\n",3);
    
}