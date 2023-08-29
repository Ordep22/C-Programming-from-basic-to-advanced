#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char valueString[50];
    double valueDouble;

    //The function strcpy copy the indicate value to variable
    //If the value was a string the function cna´t change the value and return zero
    strcpy(valueString,"651616516516516");

    //The function atof do the typechast from a string to a int value
    valueDouble = atof(valueString);

    //Show the int variable
    printf("The value of: %lf", valueDouble);

}