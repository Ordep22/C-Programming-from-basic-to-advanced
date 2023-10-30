#include <stdio.h>
#include <stdlib.h>

void BoubleSort(int vector[], int size){

        int next  = 0;

        for (int i = 0; i< size; i++){

            for (int j = 0; j < (size-1); j++){

                if(vector[j] > vector[j+1]){

                       next = vector[j+1];
                       vector[j+1] = vector[j];
                       vector[j] = next; 

                }

            }
        }





}

int mian(){


    int vector[6] = {8,3,1,42,12,5};
    
    BoubleSort(vector,6);

    for (int i = 0; i < 6;i++){

        printf("%d\n",vector[i]);

    }
    printf("\n\n");



}