#include <stdio.h>
#include <string.h>

int main(){

    //To use the functions strcpy is necessary to inicializate the string
    char wordOne[10] = "",wordTow[10] = "", wordThree[10] = "";
 

    //Copy the values to a string
    strcpy(wordOne,"Pedro");

    strcpy(wordTow,"Vitor");

    strcpy(wordThree,"Pereira");

    
    printf("The three word are:\n");

    printf("%s\n", wordOne);

    printf("%s\n", wordTow);

    printf("%s\n", wordThree);


    strcat(wordOne,wordTow);

    strcat(wordOne,wordThree);

    printf("Before to join this words\n");

    printf("%s\n",wordOne);


}