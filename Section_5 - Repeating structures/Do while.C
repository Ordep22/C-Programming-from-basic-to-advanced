#include "stdio.h"

/*



*/

int main(){

    //Veriáveis
    int numero, soma = 0;

    do{
        
        //Entrada
        printf("Entre com um número qualquer:");
        scanf("%d",&numero);

        //processamento
        soma  = soma + numero;

    }

    while(numero != 0){
    }

    //saida
    printf("A soma é %d \n", soma);


}