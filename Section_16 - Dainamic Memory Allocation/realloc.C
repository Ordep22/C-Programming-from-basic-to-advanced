#include"stdio.h"
#include"stdlib.h"
#include"realloc.H"

int main(){

    int* pointer;
    int newsize = 0, buffersize = 0, answer = 0;

    printf("What is the size of the buffer?");
    scanf("%d",&buffersize);

    Inser_Values_in_Memory(pointer,buffersize);
    
    printf("Do you want to inser new values \n[1] - Yes \n[2] - No: ");
    scanf("%d",&answer);

    if (answer == 1){

        printf("What is the new size?");
        
        scanf("%d",&newsize);
        
        realloc(pointer,newsize);
       
        Inser_Values_in_Memory(pointer,newsize);
    }
    else {

    free(pointer);
    pointer = NULL;

    }

}

int Inser_Values_in_Memory(int *pointer, int buffersize){

    int buffer = 0;

    pointer = (int*)calloc(buffersize,sizeof(int));
    //pointer  = (int*)malloc(buffer*sizeof(int));

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

    buffer = 0;
    free(pointer);

    return 0 ;


}


