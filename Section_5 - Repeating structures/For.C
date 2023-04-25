#include "stdio.h"

int main(){

    
    /*
    When variables are not initialized, it is possible for them to contain 
    garbage values in their memory space
    */
    int numberOne, sum = 0;


    for (int i = 0; i < 5; i++){
        
            printf("Entre com um numero: ");
            scanf("%d",&numberOne);

            sum = sum + numberOne;        
        }

    printf("The sum is: %d", sum);




}