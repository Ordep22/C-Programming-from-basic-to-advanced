#include <stdio.h>


int main(){

    int a = 1,b = 0;

    int* adressA = &a;

    int* adressB = &b;


    if(adressA > adressB){

        printf("The adress of varibles 'a' is: %p\n",adressA);

    }
    else {


        printf("The adress of varibles 'b' is: %p\n",adressB);


    }
    

    


    



}




