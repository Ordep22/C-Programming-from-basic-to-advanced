//
// Created by Pedro Pereira on 11/2/2023.
//

#include "Linear Search.h"

int main(){

    int vector[6] = {1,3,5,8,12,42};

    int key = 42;

    int value  = lenar_search(vector, key, 6);

    if (value == -1 ){

        printf("The key didn't found!");
    }
    else {

        printf("The key element %d is in %d postion.",key, value);
    }



}


int lenar_search(int vector[],int key, int size){

    for (int i = 0; i < size; i++){

        if (vector[i] == key){

            return i;

        }

    }

    return -1;



}
