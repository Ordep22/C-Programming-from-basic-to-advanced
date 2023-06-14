#include <stdio.h>

int main(){


//Variables
int varOne = 10;
float varTwo = 18.8;
char varThree[3] = "OI";
char varFour[3] = "oi";


//Show the variables before change the values
printf("The variable one is: %d\n",varOne);

printf("The variable tow is: %f\n",varTwo);

printf("The variable three is: %s\n",varThree);


//Pointers
int* pointerOne = &varOne;
float* pointerTwo = &varTwo;
char* pointerThree = &varThree[2];

//Modify the varibles
*pointerOne += 10;

*pointerTwo -= 4.52;

*pointerThree ++;

//Show varibles before editit

printf("\n\n");

printf("The new variable one is: %d\n",varOne);

printf("The new variable two is: %f\n",varTow);

printf("The new variable three is: %s\n",varThree);



}






