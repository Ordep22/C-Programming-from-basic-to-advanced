#include <stdio.h>

/*

int* ptr;

ptr = &number; It's a valid way to work with pointers (ptr stores the memory adress)

*ptr = number; It's a valid way to work with pointers (ptr stores the value restrained in memory adress)

*ptr = number;

*/



int main(){

    int age = 25;

    int* ptr = &age; // It's a way to crate a interger pointer

    //It's a way to acess the adress memory
    printf("The memory adrees of age variable is %p\n",&age); //%p to show a hex adress value


    //But we can acess the memory adress with another way. See below.
    printf("The memory adrees of age variable is %p\n",ptr); //%p to show a hex adress value

    //But if we can find the value refers to the memory adress we can do:
    printf("The velue restrained in memory adrees of age variable is %d\n",*ptr);



    //Well it's great, but if we can modify the pointer value. It's possible to!

    //How we can acess the value of memory adres with *point, we can atribuit another velue to.

    *ptr = 21;

    //Show the new value
    printf("The new value restrained in memory adrees of age variable is %d\n",*ptr);











}