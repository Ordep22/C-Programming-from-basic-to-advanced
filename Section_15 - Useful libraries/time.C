#include <stdio.h>
#include <time.h>

int main(){

    time_t seconds;

    seconds  = (time(NULL))/3600;
    printf("Hours form 1 of Januare of 1970: %d\n",seconds);


}