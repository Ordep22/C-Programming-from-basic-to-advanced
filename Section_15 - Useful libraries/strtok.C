#include "stdio.h"
#include "string.h"


int main(){

    char msg[] = "Hello Word";
    char *splitStrig;

    printf("The string is: %s\n",msg);

    splitStrig = strtok(msg," ");

    while(splitStrig != NULL){

        printf("%s\n",splitStrig);
        splitStrig = strtok(NULL, " ");

    }
    
}