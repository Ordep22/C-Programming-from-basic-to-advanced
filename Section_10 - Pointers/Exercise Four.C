#include <stdio.h>

int ChangeValue(int* varOne, int* varTwo){

    int elementOne, elementTwo;

    elementOne = *varOne;

    elementTwo = *varTwo;

    *varOne = elementTwo;

    *varTwo = elementOne;

}

int main(){

    int varOne, varTwo;

    printf("Insert the first value:");
    scanf("%d",&varOne);

    printf("Insert the second value:");
    scanf("%d",&varTwo);

    ChangeValue(&varOne,&varTwo);

    printf("Variable one: %d\n",varOne);
    
    printf("Variable two: %d\n",varTwo);

}

