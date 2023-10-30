//
// Created by Pedro Pereira on 10/29/2023.
//
#include <stdio.h>
#include <stdlib.h>

#define ONE 1

void ShellSort(int vector[], int size){

    int groupe = ONE;
    int change;
    int j;

    //Generate the size of the goupe form the size of vector
    while (groupe < size){

        groupe  = 3 * groupe + 1;


    }

    //Walking the vector while there is groupe to ordenate
    while(groupe > 1 ){

        //Divede the goupe in three parts

        groupe /= 3;

        //Walking in to this groupes
        for (int i = groupe; i < size; i++ ){

            change = vector[i];
            j = i - groupe;

            //Realize the change
            while (j >= 0 && change < vector[j]){

                vector[j + groupe] = vector[j];
                j -= groupe;

            }
            vector[j + groupe] = change;

        }


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