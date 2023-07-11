#include <stdio.h>

int main(){

    FILE *File;

    char string[10];

    File  = fopen("fruits.txt","w"); //Whem we use 'w' if the there's not the cod will criate this

    if (File){

        printf("Insert a fruit name or zero to exit:");
        
        fgets(string,10,stdin);

        while(string[0] != '0'){

            fputs(string,File);

            printf("Insert a fruit name or zero to exit:");

            fgets(string,10,stdin);
        }    

    } 
    else{

        printf("The file was not crate!");

    }


    fclose(File);




}