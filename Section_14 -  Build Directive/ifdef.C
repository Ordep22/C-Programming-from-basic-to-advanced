#include "stdio.h"

//If PI isn't deifine on the scope difine It.
#ifndef PI

    #define PI 3.14

#endif


int main(){


    printf("Build Directives");

    //In this case, if the global variables was definesd on the scope 
    //The next lines going to be executade
    #ifdef PI
        printf("The aproximated value of PI is: %f",PI);

    #endif


/*
    As we can see, the variable 'Alph' was not declared. 
    Therefore, the code from line 26 to 30 is ignored by the builder.
*/  
    #ifdef Alph

        printf("The aproximated value of PI is: %f",PI);

    #endif


}