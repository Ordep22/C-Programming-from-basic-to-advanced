#include "stdio.h"
#include "math.h"

/*

In c or in another language we can find this math's operators
sum  +
Subtractio -
Product *
division /
rest %
potenctiation **

*/


int main(){


    int a = 5,b =10,c = 11,d = 3,e = 2, result = 0;
    //float result;

    //Sum operation 
    result  = a + b;
    printf("The result of sum operation is: %d\n",result);

    //Subtractio
    result  = c - d;
    printf("The result of subtaction operation is: %d\n",result);

    //Product 
    result = d * e;
    printf("The result of product operation is: %d\n",result);


    //Division
    result = a / e;
    printf("The result of division operation is: %f\n",(float) result);

    //Rest
    result = d % e;
    printf("The result of rest operation is: %d\n",result);

    //Potenctiation 
    //result = a**c; This method doesn't work. So we can find a new alternative for our problem.
    //It's simple, in library math.h we find a function pow(a,b) witch que return the potenctiation 
    //of a by b 
    result  = pow(a,c);
    printf("The result of potenctiation operation is: %d\n",result);









}