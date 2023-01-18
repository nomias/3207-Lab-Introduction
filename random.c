#include <stdlib.h>
#include <time.h>
char randchar(){
    char ret = (rand()%(90-65+1))+65;
    return ret;
}