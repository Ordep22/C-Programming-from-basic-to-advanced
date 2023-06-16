#include <stdio.h>

int main(){

    FILE *file;
    char character;

    file  = fopen("file.txt","r"); //Open the file to read


    if(file){
        printf("<><><> Find file! <><><>\n");

        while ((character = getc(file)) != EOF) //EOF -> End of File
        {
            printf("%c",character);
        }
        



    }
    else{

        printf("File doesn't find\n");

    }


    fclose(file); // Clode file





}