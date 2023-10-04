#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"

#define PUSH 1
#define POP 2
#define TOP 3
#define ISEMPTY 4
#define CLEAR 5
#define LEMSTACK 10
#define EXIT -1

int stack[LEMSTACK] = {0};

/*
Operations on a stake
• Push() insert an element on a stack
• pop() remove an element
• top() Return the first elemnte
• isEmpty() return true if the stack is enpyt, else flase.
• clear() clear the stake
*/

void ShowStack();

void Push();

void Pop();

void Top();

int isEmpty();

void Clear();

void Push()
{

    int counter = 0;
    int value = 0;
    printf("How is the value to Pusk on Stak:");
    scanf("%d", &value);

    for (int i = 0; i < LEMSTACK; i++)
    {

        if (stack[i] != 0)
        {

            counter++;
        }
        else
        {

            break;
        }
    }

    if (counter == 10)
    {

        printf("The stake is full!\n");
    }
    else
    {

        stack[counter] = value;
    }

    ShowStack();
}

void Pop()
{

    int counter = 0;

    for (int i = 0; i < LEMSTACK; i++)
    {

        if (stack[i] != 0)
        {
            counter = counter + 1;
        }
        else
        {

            break;
        }
    }

    if (counter == 0)
    {
        printf("The stack is empty!\n");
    }

    else if (counter != 0)
    {

        stack[counter - 1] = 0;
    }
    counter = 0;

    ShowStack();
}

void Top()
{

    int counter = 0;

    for (int i = 0; i < LEMSTACK; i++)
    {

        if (stack[i] != 0)
        {
            counter = counter + 1;
        }
        else
        {

            break;
        }
    }

    if (counter != 0)
    {
        printf("[%d]\n", stack[counter-1]);
    }
    else
    {

        printf("The stak is empty! Please, insert an element.\n");
    }
}

int IsEmpty()
{

    int counter = 0;

    for (int i = 0; i < LEMSTACK; i++)
    {

        if (stack[i] != 0)
        {
            counter = counter + 1;
        }
        else
        {

            break;
        }
    }

    if (counter != 0)
    {

        printf("The stak is not empty!\n");
        return 0;
    }
    else
    {

        printf("The stak is empty! Please, insert an element.\n");
        return 1;
    }
}

void Clear()
{

    for (int i = 0; i < LEMSTACK; i++)
    {

        stack[i] = 0;
    }

    ShowStack();
}

void ShowStack()
{

    printf("[");

    for (int i = 0; i < LEMSTACK; i++)
    {

        printf("%d", stack[i]);

        if (i != (LEMSTACK - 1))
        {
            printf(", ");
        }
    }
    printf("]\n");
    printf("\n");
}

int main()
{

    int input = 0;
    int value = 0;

    do
    {

        printf("-------------------Menu-------------------\n");
        printf("[1] -  Push\n");
        printf("[2] -  Pop\n");
        printf("[3] -  Top\n");
        printf("[4] -  isEmpty\n");
        printf("[5] -  clear\n");
        printf("[-1] - Exit\n");
        printf("------------------------------------------\n");
        scanf("%d", &input);

        switch (input)
        {
        case PUSH:

            Push();
            break;

        case POP:
            Pop();
            break;

        case TOP:
            Top();
            break;

        case ISEMPTY:
            IsEmpty();
            break;
        case CLEAR:
            Clear();
            break;

        default:
            printf("Invalid insetion!\n");
            break;
        }

    } while (input != EXIT);
    printf("Finish execution!\n");

}