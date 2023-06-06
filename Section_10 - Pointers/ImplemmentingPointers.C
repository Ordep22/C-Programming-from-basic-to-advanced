#include <stdio.h>

int main(){

    //Declaration

    int n; //Variable thats save their value in a memory 

    int* p; //The pointer to point the adress to the memory adress


    printf("Insert a value:");
    scanf("%d",&n);


    //Initialize the pointer
    p = &n;

    printf("The insert number was: %d\n",n);

    printf("The memory adress is: %d\n ", &n);

    printf("The pointer adress is: %p\n ", p);






}