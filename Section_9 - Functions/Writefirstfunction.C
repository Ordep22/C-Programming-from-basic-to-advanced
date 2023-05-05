#include "stdio.h"


int Sum(int a, int b){

    int result  = 0;

    result = a + b;

    return result;



}
char SumCharacther(char element){

        return element + 1;

}



int main(){

    int c, d;

    char character;

    printf("Entry a number:");
    scanf("%d",&c);

    printf("Entry a number:");
    scanf("%d",&d);

    printf("Entry a character:");
    scanf("%s",&character);

    printf("The sum is: %d\n",Sum(c,d));

    printf("The ASCII correspondet is: %c\n",Sum(c,d));

    printf("The character plus one is: %c\n",SumCharacther(character));





}


