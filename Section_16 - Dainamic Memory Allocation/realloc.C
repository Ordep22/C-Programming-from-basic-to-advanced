#include"stdio.h"
#include"stdlib.h"
#include"realloc.H"

int main(){

    int* pointer;
    int newsize, buffersize, answer;

    printf("What is the size of the buffer?");
    scanf("%d",&buffersize);

    Inser_Values_in_Memory(pointer,buffersize);
    
    printf("Do you wnat to inser new values \n[1] - Yes \n[2] - No: ");
    scanf("%d",&answer);

    if (answer == 1){

        printf("What is the new size?");
        
        scanf("%d",&newsize);
        
        realloc(pointer,newsize);

        Inser_Values_in_Memory(pointer,buffersize);

    }
    else {


    free(pointer);
    pointer = NULL;

    }






}


int Inser_Values_in_Memory(int *pointer, int buffersize){

    int buffer;

    pointer = (int*)calloc(buffersize,sizeof(int));

    if (pointer){

        for (int i = 0; i < buffersize; i++){

            printf("buffer[%d]",i);
            scanf("%d",&pointer[i]);

        }

    }
    else {

        printf("The memory is full!");
    }

    printf("{ ");

    for(int i = 0; i < buffersize; i++){
    
        printf(" %d ",pointer[i]);
    
    }

    printf("}\n");

    return 0 ;


}


