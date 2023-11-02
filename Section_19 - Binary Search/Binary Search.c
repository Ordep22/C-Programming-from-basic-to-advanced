//
// Created by Pedro Pereira on 11/2/2023.
//
#include "Binary Search.h"

int main(){

    int vector[6] = {1,3,5,8,12,42};

    int key = 8;

    int value  = binary_search(vector, key, 6);

    printf("The key element %d is in %d postion.",key, value);

}

int binary_search(int vector[],int key,int size){

    int begin  = 0;
    int end = size - 1;

    while (begin <= end){

        int middle = (begin + end) / 2;

        if (key == vector[middle]){
            return middle;
        } else if (key < vector[middle]){

            end = middle -1;

        }else{

            begin = middle + 1;

        }

    }

    return -1;

}

