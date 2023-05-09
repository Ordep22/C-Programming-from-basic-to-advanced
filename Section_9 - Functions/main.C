#include <stdio.h> // .h it means that a heard file
#include "Headerfiles.h"
/*
A header file is a file with extension .h which contains C function 
declarations and macro definitions to be shared between several source files. 
There are two types of header files: the files that the programmer writes and 
the files that comes with your compiler.
*/

int main(){

    int n1,n2,rest_s,rest_m;

    printf("insert the first number:");
    scanf("%d",&n1);

    printf("insert the second number:");
    scanf("%d",&n2);

    rest_s = Sum(n1,n2);
    printf("The sum bettwen n1 and n2 is:%d\n",rest_s);

    rest_m = Product(n1,n2);
    printf("The product bettwen n1 and n2 is:%d\n",rest_m);

}