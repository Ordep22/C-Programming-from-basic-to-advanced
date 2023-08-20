/*
[EN]
The typedef is a keyword that is used to provide existing data types with a new name. 
The C typedef keyword is used to redefine the name of already existing data types.
When names of datatypes become difficult to use in programs, typedef is used with user-defined datatypes,
    which behave similarly to defining an alias for commands.
*/
#include <stdio.h>
#include <stdlib.h>

//After this declaration, we can use the 'number' as if it were the real existing name in out C program
typedef int* ptr;

int main() {

    ptr var = (ptr)malloc(sizeof(int));

    if (var == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }


    *var = 20;

    printf("The value of var is: %d\n", *var);

    free(var);

    return 0;
}
