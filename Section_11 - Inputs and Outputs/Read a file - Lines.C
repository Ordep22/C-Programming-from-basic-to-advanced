#include <stdio.h>

int main(){

    FILE *file;

    char name[100], *result;

    file  = fopen("file.txt","r");

    if(file){
        printf("<><><> Find file! <><><>\n");

        while (!feof(file)) //feof -> File End of File
        {
            
            result = fgets(name,100, file);

            //fgets(name,10,file);
            if(result){

                printf("%s\n",name);

            }
            
        }
        



    }
    else{

        printf("<><><> File doesn't find <><><>\n");

    }


    fclose(file); // Clode file



}