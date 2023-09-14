#include <stdio.h>
#include <string.h>

int main(){

    //To use the functions strcpy is necessary to inicializate the string
    char wordOne[10] = "",wordTow[10] = "";
 

    //Copy the values to a string
    strcpy(wordOne,"Geleia");

    strcpy(wordTow,"Geleia");

    
    printf("Comparing the words...\n");

    if (strcmp(wordOne,wordTow)){

        
        printf("The word aren't iquals!");

    }else{

        printf("The word are iquals!");
    }

    
        

   


}