#include "debug.h"
#include <time.h>

#include "check.h"

void main(){
    

    LOG_LEVEL_SET(WARN);


    D_CHECK(1==0);

    LOG_FATAL("%s\n","gg");

    
}