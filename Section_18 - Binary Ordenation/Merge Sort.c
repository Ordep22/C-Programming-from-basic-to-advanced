//
// Created by Pedro Pereira on 10/30/2023.
//
#include <stdio.h>
void Merge(int vector[], int beginOne, int endOne, int beginTow,int endTow);

void Merge(int vector[], int beginOne, int endOne, int beginTow,int endTow){

        int teporayVector[50];

        int i,j,k;

        i = beginOne;

        j = beginTow;

        k = 0;

        while( i <= endOne && j <= endTow ){

            if(vector[i] < vector[j]){

                teporayVector[k++] = vector[i++];

            }else{

                teporayVector[k++] = vector[j++];

            }

        }
        while (i <= endOne){

            teporayVector[k++] = vector[i++];


        }


        while (j <= endTow){

            teporayVector[k++] = vector[j++];


        }

        for(i = beginOne, j = 0; i <= endTow; i++, j++){

            vector[i] = teporayVector[j];


        }

}

void Merge_Sort(int vector[], int begin, int end){

    if (begin < end){

        int middle = (begin + end)/2;

        Merge_Sort(vector, begin, middle);

        Merge_Sort(vector, middle + 1, end);

        Merge(vector,begin , middle, middle + 1,end);

    }


}




int main(){

    int vector[6] = {8,3,1,42,12,5};

    Merge_Sort(vector,0,6-1);

    for (int i = 0; i < 6;i++){

        printf("%d\n",vector[i]);

    }
    printf("\n\n");


}