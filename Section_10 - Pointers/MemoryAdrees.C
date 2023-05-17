#include <stdio.h>

void increment(int value){

    printf("Before increment.\n");
    printf("The counter is worth: %d\n", value);
    printf("The memory adrres is: %d\n", &value);
    
    
    printf("After increment.\n");
    printf("The counter is worth: %d\n", ++value);
    printf("The memory adrres is: %d\n", &value);

}

int main(){

    //When a variable is declared in C memory space 
    //is reserved for that element
    int count  = 10;


    printf("Before increment.\n");
    printf("The counter is worth: %d\n", count);
    printf("The memory adrres is: %d\n", &count);

    //It'is a copy for value
    increment(count);

    printf("After increment.\n");
    printf("The counter is worth: %d\n", ++count);
    printf("The memory adrres is: %d\n", &count);






}