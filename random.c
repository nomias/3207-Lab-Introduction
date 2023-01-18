#include <stdlib.h>
#include <time.h>
char randchar(){
    srand(time(0));
    char ret = (rand()%(90-65+1))+65;
    return ret;
}