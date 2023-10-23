#include <stdio.h>
#include <stdlib.h>

struct node
{

 int value;
 struct node *next;


};

void Print_Linked_List(struct node *pointer){
    int i = 0;
    while(pointer != NULL ){
        i+=1;
        printf("[%d] - %d\n",i,pointer->value);
        pointer = pointer->next;
    }

}

int main(){

    struct node *head;
    struct node *one  = NULL;
    struct node *tow = NULL;
    struct node *three = NULL;

    //Aloca a quantidade necessária para armazenar um dado e o endereço do próximo dados.
    one  = (node*)malloc(sizeof(struct node)); 
    tow  = (node*)malloc(sizeof(struct node));
    three = (node*)malloc(sizeof(struct node));

    //Assingn values 
    one->value = 1;
    tow->value = 2;
    three->value = 3;

    //Conect nodes
    one->next = tow;
    tow->next = three;
    three->next = NULL;


    //Printing nodes values
    head = one;
    Print_Linked_List(head);
}