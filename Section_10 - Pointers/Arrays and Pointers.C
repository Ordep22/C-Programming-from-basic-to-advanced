#include <stdio.h>
int main(){

    int values[5] = {0};
    int* array;

    array = &values[5];

    for (int i = 1; i <= 5; i++){
        printf("Insert the %d/5 value:",i);
        scanf("%d",&values[i]);

    }


    printf("The values in array are:\n");
    for(int i = 1; i <= 5; i++){
        printf("%d ",values[i]);

    }

    printf("\nUndertanding the pointers interaction!");
    for(int i = 0; i < 5; i++){

        printf("%d ",*array--);

    }


    printf("\n");
    printf("%p %d\n",&values[0], values[0]);
    printf("%p %d\n",&values, values[0]);
    


}