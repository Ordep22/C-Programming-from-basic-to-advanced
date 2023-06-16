#include <stdio.h>

int main(){

    FILE *file;

    char name[10], *result;

    file  = fopen("file.txt","r");

    if(file){
        printf("<><><> Find file! <><><>\n");

        while (!feof(file)) //feof -> File End of File
        {
            
            fgets(name,10,file);
            
            printf("%s",name);

        }
        



    }
    else{

        printf("<><><> File doesn't find <><><>\n");

    }


    fclose(file); // Clode file



}