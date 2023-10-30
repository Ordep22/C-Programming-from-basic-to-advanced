#include <stdio.h>
#include <stdlib.h>


void InsertSort(int vector[], int size){

    int change;
    int next;

    //This loop control the walk arond the vector
    for (int i = 1; i < size; i++){

        next = i;

       while((next != 0) && (vector[next] < vector[next-1])){

            change = vector[next];
            vector[next] = vector[next-1];
            vector[next -1] = change;
            next--;

            for(int i = 0; i < size; i++ ){

                printf("%d ", vector[i]);


            }
            printf("\n");


       }



       }


    }


int main(){

    int vector[6] = {8,3,1,42,12,5};
    
    InsertSort(vector,6);

    for (int i = 0; i < 6;i++){

        printf("%d\n",vector[i]);

    }
    printf("\n\n");


}