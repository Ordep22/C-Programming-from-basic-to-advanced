//
// Created by Pedro Pereira on 10/30/2023.
//
#include <stdio.h>
#include <stdlib.h>

void Quick_Sort(int *vector, int size);

void Quick_Sort(int vector[], int size) {

    int i;

    int j;

    int groupe;

    int change;

    if (size < 2){

        return;
    }
    else {

        groupe  = vector[size/2];

    }

    for (i = 0, j = (size - 1); ; i++,j-- ){

        while (vector[i] < groupe){

            i++;

        }

        while(groupe < vector[j]){

            j--;
        }

        if (i >= j){
            break;
        }
        else{
            change = vector[i];
            vector[i] = vector[j];
            vector[j] = change;

        }



    }
    Quick_Sort(vector,i);

    Quick_Sort(vector + 1,size - 1);




}


int main(){

    int vector[6] = {8,3,1,42,12,5};

    Quick_Sort(vector,6);

    for (int i = 0; i < 6;i++){

        printf("%d\n",vector[i]);

    }
    printf("\n\n");


}