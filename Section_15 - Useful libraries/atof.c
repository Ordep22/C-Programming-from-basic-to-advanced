#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){

    char valuesString[5];
    double valueDouble;

    //The function strcpy copy the indicate value to variable
    strcpy(valuesString,"4.5");

    //The function atof do the typechast from a string to a flot
    valueDouble = atof(valuesString);

    //Show the double variable
    printf("The value of %0.2f",valueDouble);


}