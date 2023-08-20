#include "stdio.h"

/*
There's another way to compile code, which might not be as productive but could be necessary to use.

First, we can generate the .exe file. To do this, follow these steps:

Open your terminal or command prompt.
Navigate to the directory containing your source code using the 'cd' command.
Compile the code using the following command:

gcc filename.c -o filename.exe

This step will generate the .exe file.
Now, you can execute the file outside of the compiler by entering the following command in the terminal:
bash

./filename.exe
Then, press 'Enter'

*/

int main(){

    int quantit, sum = 0;


    printf("How many numbers do you want some?\n");
    printf(">>");
    scanf("%d",&quantit);

    for (int i  = 0; i < quantit; i++){

            sum  = sum + i * 2 + 3;



    }

    printf("The sum is:%d",sum);




}