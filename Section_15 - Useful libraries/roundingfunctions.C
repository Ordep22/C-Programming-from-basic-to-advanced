#include <stdio.h>
#include <math.h>

int main(){

    double numberOne  = 1.135476473;
    
    double numberTow = 4.66874654364;
    
    float resOne, resTow;

    //Rouding to up
    resOne = ceil(numberOne);

    //Rouding to dow
    resTow  = floor(numberTow);


    //Show the rouding
    printf("The rouding to up of the number one is:%f\n", resOne);

    printf("The rouding to down of the number one is:%f\n", resTow);



}