#include "stdio.h"
#include "stdlib.h"

int main(){

    int buffersize, *pointer;

    

    printf("Insert the len of the buffer:");
    scanf("%d",&buffersize);

    pointer = (int*)calloc(buffersize,sizeof(int));

    if(pointer){

    
        for (int i = 0; i < buffersize; i++){

            printf("buffer[%d] = ",i);
            scanf("%d",&pointer[i]);

        }

    }
    else{
        printf("Memory is full");
    }
    printf("buffer[%d] = {",buffersize);

    for(int i = 0; i < buffersize; i++){
        printf(" %d ",pointer[i]);
    }
    printf("}\n");


    free(pointer);
     
    pointer = NULL;

}