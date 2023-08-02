#include <stdio.h>
#include <string.h>

/*
The union saves and uses only the number of bytes of the largest variable
One problem with using unions is that they overwrite values as the code is running. 
Therefore, when it is necessary to access some saved value, it is not found.
*/

union person{

    char name[100];
    int age;
    

};



int main(){

    union  person personOne;

    strcpy(personOne.name, "Pedro Vitor Pereira");
    printf("PersonOne name: %s\n",personOne.name);


    personOne.age = 26;
    printf("PersonOne age: %d\n",personOne.age);

    printf("The variable person is ocupating %ld bytes of memory!", sizeof(person));



    /*
    If we can find the lenth of a variable, we can use the function sizeof()
    But, whem it's show in printf it's necessary to add %ld, becouse it's a loong variable.
    */

    /*
    int number  =  43;
    float note = 9.2;
    char leter = 'd'; //Pay attention, char with "" is different to ''. One way has tow bytes and other one byte.

    printf("The number is %d and its size is %ld\n", number, sizeof(number));

    printf("The note is %0.2f and its size is %ld\n", note,sizeof(note));

    printf("The leter is %c and its size is %ld\n", leter, sizeof(leter));

    */






}