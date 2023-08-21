#include "stdio.h"

/*
ffflush()
This function can clean the buffer whem is necessary
With we can see bellow:
*/


int main(){
    
    int numOne, numTow, sum;
    
    printf("Inset the fist number:");
    //fflush(stdout);
    scanf("%d",&numOne);

    printf("Inset the second number:");
    //fflush(stdout);
    scanf("%d",&numTow);

    sum  = numOne + numTow;

    printf("The sum betwem %d and %d is: %d", numOne,numTow, sum);
    

}