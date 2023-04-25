#include <stdio.h>

/*

The while loop is implemented in cases where we 
don't have a fixed number of elements and need a stop criteria.

*/

int main(){

    //Veriáveis
    int numero, soma = 0;

    while(numero != 0){

        //Entrada
        printf("Entre com um número qualquer:");
        scanf("%d",&numero);

        //processamento
        soma  = soma + numero;

    



    }

    //saida
    printf("A soma é %d \n", soma);
    




}