#include <stdio.h>
#include <ctype.h>

int main(){

    char charcter = 'i';

    printf("------------------------------------------------\n");
    printf("Input Character: %c\n",charcter);
    printf("------------------------------------------------\n");

    //Varify if the character is alphanumeric
    if (isalnum(charcter)){

        printf("The input character is alphanumeric!\n");

    }else{

        printf("Tha input character it isn't alphanumeric!\n");
    }
    //Varify if the character is alphabetic
    if(isalpha(charcter)){

            printf("Tha input character it is alphabetc!\n");
    }
    else{

            printf("The character it isn't alphabetc!\n");
    }

        //Varify if the character is alphabetic
    if(isupper(charcter)){

            printf("The input character it is Uper Case !\n");

            printf("The lower character is %c",tolower(charcter));

    }
    if(islower(charcter)){

            printf("The character it is lower case!\n");

            printf("The uper character is: %c", toupper(charcter));
        
    }




}