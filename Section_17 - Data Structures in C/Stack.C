#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"

#define PUSH 1
#define POP 2
#define TOP 3
#define ISEMPTY 4

/*
Operations on a stake
• Push() insert an element on a stack
• pop() remove an element
• top() Return the first elemnte
• isEmpty() return true if the stack is enpyt, else flase.
*/

int Push(uint8_t *stack, int value){

            


}

int main()
{

    int input = 0;
    uint8_t stack[10] = {0};

    do
    {

        printf("-------------------Menu-------------------\n");
        printf("[1] -  Push\n");
        printf("[2] -  Pop\n");
        printf("[3] -  Top\n");
        printf("[4] -  isEmpty\n");
        printf("[-1] - Exit\n");
        printf("------------------------------------------\n");
        scanf("%d", &input);

        switch (input)
        {
        case PUSH:
            printf("[%d]\n",input);
            break;

        case TOP:
            printf("[%d]\n",input);
            break;

        case POP:
            printf("[%d]\n",input);
            break;

        case ISEMPTY:
            printf("[%d]\n",input);
            break;
            
        default:
            printf("[%d]\n",input);
            break;
        }

    } while (input != -1);
}