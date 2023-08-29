#include <stdio.h>
#include <stdlib.h>

int main(){

    div_t outPut;

    outPut = div(27,4);

    printf("27/4 = %d\n", outPut.quot);

    printf("27 = 4*%d +  %d\n",outPut.quot,outPut.rem);
    

}