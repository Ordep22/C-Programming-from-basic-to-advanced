/*
Queue in C

FIFO - First in First Out

enqueu() - Add an element on a queue

dequeue() - Remove an elemenot from a queue

clean() - Clean the queue

Queue Head [_ _ _E_L_E_N_T_S_ _ _] tail

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define LEMQUEUE 10
#define ENQUEUE 1
#define DEQUEUE 2
#define LIST 3
#define CLEAR 4
#define EXIT -1

uint8_t queue[LEMQUEUE] = {0};
uint8_t head = 0;
uint8_t tail = 0;

void Queue()
{

    printf("\n----------------------- Queue -----------------------\n");
    printf("[");
    for (int i = 0; i < LEMQUEUE; i++)
    {

        printf("%d", queue[i]);

        if (i != (LEMQUEUE - 1))
        {
            printf(", ");
        }
    }
    printf("]");
    printf("\nHeader: %d\n", head);
    printf("\nTail: %d\n", tail);
    printf("\n");
}

void enqueue()
{

    int value;

    if (tail < LEMQUEUE)
    {
        printf("Enqueu the element:\n");
        scanf("%d", &value);

        queue[tail] = value;
        tail = tail + 1;
    }
    else
    {

        printf("The queue is full!\n");
    }
}

void Dequeue()
{

    if (head < tail)
    {

        queue[head] = 0;

        //head = head + 1;

        for(int i = 0; i < tail; i++){

            if (tail < LEMQUEUE){

                queue[i] = queue[i +1];

            }

            else{break;}
        
        }
        
        printf("[");

        for (int i = 0; i < LEMQUEUE; i++)
        {

            printf("%d", queue[i]);

            if (i != (LEMQUEUE - 1))
            {
                printf(", ");
            }
        }
        printf("]\n");
        printf("\n");
    }

    else
    {

        printf("The queue is empyt!\n\n");
    }
}

void Clear()
{

    for (int i = 0; i < LEMQUEUE; i++)
    {

        queue[i] = NULL;
    }

    head = 0;

    tail = 0;
}

int main()
{

    int option = 0;

    do
    {

        printf("Select an option \n\n");
        printf("[1] - Enqueue \n\n");
        printf("[2] - Dequeue \n\n");
        printf("[3] - List \n\n");
        printf("[4] - Clear\n\n");
        printf("[-1] - Exit \n\n");
        printf("Option:");
        scanf("%d", &option);
        printf("\n");

        switch (option)
        {
        case ENQUEUE:

            enqueue();

            break;

        case DEQUEUE:

            Dequeue();

            break;
        case LIST:

            printf("[");
            for (int i = 0; i < LEMQUEUE; i++)
            {

                printf("%d", queue[i]);

                if (i != (LEMQUEUE - 1))
                {
                    printf(", ");
                }
            }
            printf("]\n");
            printf("\n");
            break;

        case CLEAR:
            Clear();
            break;


        case EXIT:
            break;    

        default:
            printf("Invalid Opetions!\n");
        }

    } while (option != (-1));
}