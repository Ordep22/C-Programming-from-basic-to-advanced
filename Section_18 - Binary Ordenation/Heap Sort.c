//
// Created by Pedro Pereira on 11/2/2023.
//
#include <stdio.h>
void Heap_Criate(int vector[], int begin, int end);
void Heap_sort(int vector[], int size);


void Heap_Criate(int vector[], int begin, int end){

    int father = vector[begin];

    int son  = begin *2 +1;

    while (son <= end){

        if(son < end){

            if(vector[son] < vector[son +1]){

                son  = son + 1;

            }

        }
        if(father < vector[son]){

            vector[begin] = vector[son];

            begin = son;

            son = 2 * begin + 1;

        }else{

            son = end + 1;

        }


    }
    vector[begin] = father;



}

void Heap_sort(int vector[], int size){

    int change;
    int middle = (size -1)/2;

    for(int i = middle; i>= 0; i--){

        Heap_Criate(vector, i, size -1);

    }

    for (int i = size - 1; i >= 1; i--){

            change = vector[0];
            vector[0] = vector[i];
            vector[i] = change;
            Heap_Criate(vector, 0,i -1);
    }



}

int main(){

    int vector[6] = {8,3,1,42,12,5};

    Heap_sort(vector,6);

    for (int i = 0; i < 6;i++){

        printf("%d\n",vector[i]);

    }
    printf("\n\n");


}