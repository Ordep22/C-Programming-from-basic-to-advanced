#include<stdio.h>

void SelectSort(int vector[], int tam){

    int low, change;

    for (int i = 0; i < (tam-1);i++){

        low = i;

        for (int j = (i+1); j < tam;j++){
            
            if(vector[j] < vector[low]){

                low = j;

            }

        }
        if (i != low){

            change = vector[i];

            vector[i] = vector[low];

            vector[low] = change;
        }

        for (int x = 0; x < 6; x ++){

             printf("%d",vector[x]);

        }
        printf("\n");

    } 


}


int main(){

    int  vector[6] = {8,3,1,42,12,5};
    
    SelectSort(vector,6);

    for (int i = 0; i < 6;i++){

        printf("%d\n",vector[i]);

    }
    printf("\n\n");

    

}