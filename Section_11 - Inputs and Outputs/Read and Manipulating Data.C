#include <stdio.h>

int main(){

    FILE *file;

    int number, result, sum = 0;



    file  = fopen("dataBase.txt","r"); //The, only, will be create if the mode was write "w"

    if(file){
        printf("File is find!\n");

        while (!feof(file))
        {     
            result = fscanf(file,"%d",&number);

            if (result ==1){

                sum = sum + number;

            }

            
            


        }
        

    }
    else{

        printf("File doesn't find!\n");

    }


    printf("The result of dum is: %d",sum);

    fclose(file);

}