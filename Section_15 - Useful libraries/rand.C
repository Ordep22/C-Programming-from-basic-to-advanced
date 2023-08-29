#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    time_t t;

    //Start the generator
    srand((unsigned) time(&t));

    //Generate randon numbers from a start value to a fish value
    for (int i = 0; i < 6; i++){

            //From (0) to (61-1) 
            printf("%d\n", rand()%61);

    }



}