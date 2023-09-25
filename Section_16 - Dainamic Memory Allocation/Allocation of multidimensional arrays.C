#include <stdio.h>
#include <stdlib.h>

int main(){

    int **pointer;
    
    int colunms = 3;

    pointer = (int**)malloc(colunms * sizeof(int));

    if (pointer == NULL) {

        printf("Somethins went wrong!!");
       
    }

    for (int i = 0; i < colunms; i++){

        pointer[i] = (int*)malloc(colunms*sizeof(int));

        if (pointer == NULL) {

            printf("Somethins went wrong!!");

        }

    }

    for (int i = 0; i < colunms; i++){

        for(int j = 0; j < colunms; j++){

                scanf(" %d ",&pointer[i][j]);
        }        
    }

    for (int i = 0; i < colunms; i++){

        printf("[");

        for(int j = 0; j < colunms; j++){

                printf(" %d ", pointer[i][j]);
        }
        printf("]\n");
    }

    for (int i = 0; i < colunms; i++){

            free(pointer[i]);
    }


}



