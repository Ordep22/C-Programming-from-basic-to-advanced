#include "stdio.h"

int main(){
    /*
    Whem we say abaout aphanumerics tipe 
    We have two tipes:
     - Characters
      - "H"
     - Strings* - "In C doesn't exist string tipe"
        - "Helo, it's the course of C!"
    */
    
    char frase[] = "Pay the price!"; //Double quote 
    char character = 'C';//Simgle quote

    //%s for strings
    printf("%s\n",frase);

    //%c for characteres
    printf("%c\n",character);

    //Show ASCII
    for (int i = 97; i < 122; i++){

        printf("%c\n",i);// How we passa the %c parameter we can see the number of ASCII table

    }




}