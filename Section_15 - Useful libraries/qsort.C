#include <stdio.h>
#include <stdlib.h>

 int numbers[] = {6,5,7,2,3,1,4};

int cmpfunc(const void *x, const void *y){

    //return (*(int *)x > *(int *)y) - (*(int *)x < *(int *)y);

    if(*(int *)x > *(int *)y){

        return 1;

    }
    else if(*(int *)x == *(int *)y){

        return 0;

    }else{

        return -1;

    }



}


int main(){

    printf("Array before sort noumbers!\n");

    for(int i = 0; i < 7; i++){

            printf("%d\n",numbers[i]);
        
    }

    printf("Array before sort numbers\n");

    qsort(numbers,7, sizeof(int), cmpfunc);

        for (int i = 0; i < 7; i++){

            printf("%d\n",numbers[i]);
        
    }

    return 0;


}