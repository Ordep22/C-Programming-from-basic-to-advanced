#include "stdio.h"

//Recursion 
/*
It´s a method to call a funtion to the seme function, for example:

    int main(){


        main();

    }
But, How is it work?

Whem we work with recursion functions it´s necessary to define a stop condition

*/
int fibonat(int n ){

    if (n == 0 ){

        return 0;

    }
    if (n == 1){

        return 1;
    }

    return fibonat(n-1) + fibonat(n-2);
    

}



int main(){

    int lenSequenci = 5;

    for (int i = 0; i < lenSequenci; i++){

        printf("%d ",fibonat(i+1));

    }



}
