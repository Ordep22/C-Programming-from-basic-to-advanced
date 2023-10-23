#include <stdio.h>
#include <stdlib.h>


struct st_arvore{

    int valor;
    struct st_arvore  *st_sub_direita;
    struct st_arvore  *st_sub_esquerda;
    


};

typedef struct st_arvore arvore;

arvore* criaArvore(){
    
    return NULL;


}

int Arvore_Esta_Vazia(arvore* t){

    return t == NULL;

}

void Mostra_Arvore(arvore* t){

    printf("->");
    if (!Arvore_Esta_Vazia(t)){

        printf("%d",t->valor);
        
        Mostra_Arvore(t->st_sub_direita);
        
        Mostra_Arvore(t->st_sub_esquerda);
    }
    printf("->");

}

/* "arvore** t" It measn that is a pointer tha apoints for another pointer*/
void InsereDadoArvore(arvore** t, int num){ 

    if(*t == NULL){

        *t = (arvore*)malloc(sizeof(arvore));
        (*t)->st_sub_direita = NULL;
        (*t)->st_sub_esquerda = NULL;
        (*t)->valor = num;

    }else{

        if(num < (*t)->valor){

            InsereDadoArvore(&(*t)->st_sub_esquerda, num);

        }
        else if(num > (*t)->valor){

            InsereDadoArvore(&(*t)->st_sub_direita, num);

        }


    }

}

int Estava_na_Arvore(arvore* t, int num){

        if(Arvore_Esta_Vazia(t)){
            return 0;
        }
        return t->valor == num || Estava_na_Arvore(t->st_sub_esquerda,num) || Estava_na_Arvore(t->st_sub_direita,num);

}





int main(){


    arvore* t = criaArvore();

    InsereDadoArvore(&t,12);
    InsereDadoArvore(&t,15);
    InsereDadoArvore(&t,10);
    InsereDadoArvore(&t,13);
    
    Mostra_Arvore(t);

    if(Arvore_Esta_Vazia(t)){
        printf("\nA Arvore esta vazia!\n");

    }else{

        printf("\nArvore nao esta vazia\n");

    }

    if(Estava_na_Arvore(t,11)){

        printf("O elemento 11 esta na arvore");

    }else{

        printf("O elemento 11 nao esta na arvore");
    }


        if(Estava_na_Arvore(t,22)){

        printf("O elemento 11 esta na arvore");

    }else{

        printf("O elemento 11 nao esta na arvore");
    }


    free(t);

    return 0;



}