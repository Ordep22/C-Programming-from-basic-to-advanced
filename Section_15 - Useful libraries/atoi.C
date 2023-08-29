#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char valueString[5];
    int valueDouble;

    //The function strcpy copy the indicate value to variable
    //If the value was a string the function cna´t change the value
    strcpy(valueString,"s");

    //The function atof do the typechast from a string to a int value
    valueDouble = atof(valueString);

    //Show the int variable
    printf("The value of: %d", valueDouble);






}