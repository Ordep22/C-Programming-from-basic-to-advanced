#include "stdio.h"

/*

    Implementing binary numbers

    In C language we can make opreations in low level with variables tipe char,
    int and long int
    -------------------------
    | Oprator |       Do    |
    -------------------------
         ~         NOT
        >>      Move to right  
        <<      Move to left

*/



int main(){


    int i = 2; // 0000 0010


    printf("Bitwise to right\n");
    printf("The new numbwe is:%d",i >> 1); // 0000 0001 -> 1
    printf("\n");

    printf("Bitwise to left\n");
    printf("The new numbwe is:%d",i << 1); // 0000 0100 -> 4
    printf("\n");

    printf("Bitwise NOT\n");
    printf("The new numbwe is:%d",~i); // 0000 0100 -> 253






}