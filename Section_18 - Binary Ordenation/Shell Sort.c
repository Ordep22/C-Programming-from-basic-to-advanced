//
// Created by Pedro Pereira on 10/29/2023.
//
#include <stdio.h>
#include <stdlib.h>

#define ONE 1

void ShellSort(int vector[], int size){

    int groupe = ONE;

    //Generate the size of the goupe form the size of vector
    while (groupe < size){

        groupe  = 3 * groupe + 1;
        

    }




}


int main(){

    int  vector[6] = {8,3,1,42,12,5};

    ShellSort(vector,6);

    for (int i = 0; i < 6;i++){

        printf("%d\n",vector[i]);

    }
    printf("\n\n");



}