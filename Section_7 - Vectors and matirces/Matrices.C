#include "stdio.h"
#include "stdlib.h"


/*
    Matrices are mutidimetionais arrays
*/

int main()
{

    // Matrices Strings
    char matriceTow[2][10] = {0};
    int pace = 0;

    printf("Insert the frist information:");
    scanf("%s", &matriceTow[0]);

    printf("Insert the second information:");
    scanf("%s", &matriceTow[1]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            printf("[%c]", matriceTow[i][j]);
        }

        printf("\n");
    }

    printf("\n\n");

    // Matrices interger
    int matriceOne[2][10];
    int count = 0, row = 0, column = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            matriceOne[i][j] = rand()%20;

            count++;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            printf("[%i]", matriceOne[i][j]);
        }

        printf("\n");
    }

    printf("\n");
    printf("Find a element in matrices, insert the indice!\n");

    printf("Row:");
    scanf("%i", &row);
    printf("\n");

    printf("Column:");
    scanf("%i", &column);
    printf("\n");

    printf("The element share is: %i", matriceOne[row][column]);
}