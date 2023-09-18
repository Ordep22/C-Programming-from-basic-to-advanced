#include <stdio.h>
#include <time.h>

int main(){

    time_t localTime;
    struct tm *info;

    time(&localTime);

    info = localtime(&localTime);
    printf("%s", asctime(info));

}