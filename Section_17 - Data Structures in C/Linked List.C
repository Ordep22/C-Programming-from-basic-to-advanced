#include <stdio.h>
#include <stdlib.h>

struct st_no
{
    int valor;
    struct st_no *prox;
    
};

typedef struct st_no no;

int vazio(no *le){

    if(le->prox == NULL){

        return 1;
    }
    else{

        return 0;
    }
}

void inicia(no *le){

    le-> prox = NULL;

}

void libera(no *le){

    if(!vazio(le)){

        no *proxNo, *atual;
        atual = le->prox;
        while(atual != NULL){
             proxNo = atual->prox;
             free(atual);
             atual = proxNo;  


        }

    }


}

void Exibe(no *le){

    if(vazio(le)){

        printf("Lista está vazia!\n\n");
    }

    no *tmp;
    tmp = le->prox;

    while(tmp != NULL){

        printf("%d",tmp->valor);
        tmp = tmp->prox;
    }
    printf("\n\n");

} 

void insereInicio(no *le){

    no *novo = (no*)malloc(sizeof(no));
    if(!novo){

        printf("Sem memoria disponivel!\n");
        exit(1);
    }
    printf("Informe o valor:");
    scanf("%d",&novo->valor);

    no *oldHead = le->prox;

    le->prox = novo;
    novo->prox = oldHead;

}


void insereFim(no *le){

    no *novo = (no*)malloc(sizeof(no));

    if (!novo){

        printf("Sem memoria disponível!");
        exit(1);
    }


    printf("Informe o valor:");
    scanf("%d",&novo->valor);
    novo->prox = NULL;

    if(vazio(le)){
        le->prox = novo;

    }else{
        no *tmp = le->prox;
        while(tmp->prox != NULL){
            tmp = tmp->prox;
        }
        tmp->prox = novo;

    }
}

void opcao(no *le, int op){

    switch (op)
    {
    case 0:
        libera(le);
        break;
    case 1:
        Exibe(le);
        break;

    case 2:
         insereInicio(le);
        break;

    case 3:
        insereFim(le);
        break;

    case 4:
        inicia(le);
        break;
    default:

        printf("Comando inválido!");
    }



}


int menu(){

    int opt;
    printf("\n");
    printf("[0] - Sair\n");
    printf("[1] - Exibir\n");
    printf("[2] - Adicionar no inicio da lista\n");
    printf("[3] - Adicionar no fim da lista\n");
    printf("[4] - Zera lista\n");
    scanf("%d",&opt);
    return opt;
}


int main(){

    no *le = (no*)malloc(sizeof(no));

    if(!le){

        printf("Sem memória disponivel!");
        exit(1);
    }

    inicia(le);
    int opt;

    do{
        opt  = menu();
        opcao(le,opt);
    }while(opt);
    free(le);
    return 0;

}
