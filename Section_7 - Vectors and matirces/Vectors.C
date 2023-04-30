#include "stdio.h"
#include "math.h"
/*
whem we talk about vectors in C we are refer to a unidimetional vetors
The delcaration of this tipe is like

tipe(int, float, char...) NAME OF VECTOR [number of charactres] = inicializatio;

*/

int main()
{

    int intergerVector[] = {0};

    char charVector[14] = "Nomedousuario";

    // Char vectors
    
    printf("Show ASCII numbers and your correlats\n");

    for (int i = 0; i <= 26; i++)
    {

        charVector[i] = i + 97;
        printf("[%d] = [%c]\n", charVector[i], charVector[i]);
    }
    
    // Interger vectors


    






}