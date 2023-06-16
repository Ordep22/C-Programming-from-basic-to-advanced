#include <stdio.h>

int main(){

    FILE *file;

    /*
    The fopen function works like this:
    If the file does not exist in the folder it will be created. 
    Else will be read.
    */

    //"w" - Write file
    //"r" - Read file
    //"wa" - Open file to change data , if the file exist

    file = fopen("file.txt","w");


    //Whenever editing is finished, the file must be closed
    fclose(file);








}
