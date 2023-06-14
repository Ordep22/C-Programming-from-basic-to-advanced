#include <stdio.h>

int main(){

    int varOne, varTwo;

    int* pointerVarone = &varOne;

    int* pointerVartwo = &varTwo;


    printf("Insert the first value:");
    scanf("%d",&varOne);

    printf("Insert the second value:");
    scanf("%d",&varTwo);


    if(pointerVarone > pointerVartwo ){

          printf("The variable allocated in the biggest address of memory is: %d",*pointerVarone);
                
    }
    
    else{

        printf("The variable allocated in the biggest address of memory is: %d",*pointerVartwo);
    } 



}