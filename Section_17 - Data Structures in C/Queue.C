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
uint8_t queue[LEMQUEUE] = {0};
uint8_t head = 0;
uint8_t tail = 0;

void Queue(){

    printf("\n----------------------- Queue -----------------------\n");
    printf("[");
    for (int i = 0;i < LEMQUEUE; i++){

            printf("%d",queue[i]);
            if(i != (LEMQUEUE-1)){

                printf(", ");


            }
            
    }

    printf("]");


}



int main(){

    Queue();

}