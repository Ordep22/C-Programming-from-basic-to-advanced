#include <stdio.h>
#include <stdlib.h>

/*
[EN]
The typedef is a keyword that is used to provide existing data types with a new name. 
The C typedef keyword is used to redefine the name of already existing data types.
When names of datatypes become difficult to use in programs, typedef is used with user-defined datatypes,
    which behave similarly to defining an alias for commands.
*/


//After this declaration, we can use the 'number' as if it were the real existing name in out C program
typedef float number;


int main() {
  



    number numberOne = 6.0;
    number numberTwo = 7.0;
    number sum = numberOne + numberTwo;



    printf("The sum of number One (%f) and two (%f) is: %f\n", numberOne, numberTwo, sum);
 

    return 0;
}
