#include "stdio.h"
#include "stdlib.h"

int main(){
    /*
        numberOne[3] = {55,23,47};
                         |  |  |
                         |  | 4 bytes
                         |  |
                         | 4 bytes
                         |   
                        4 bytes    
    */
     int numberOne[3] = {55,23,47};

     int qunatit = 0;

     int *pointer;


     printf("Insert the size that you need:");
     scanf("%d",&qunatit);

     //Here I[m seing to the firmware, alloc quantit*(number of bits in a interger variable)
     pointer  = (int*)malloc(qunatit*sizeof(int));
     
     //printf("The size of the buffer 'numberOne' is: %d\n",sizeof(numberOne));

     for (int i = 0;i < qunatit; i++){

            printf("buffer[%d] = ",i);
            scanf("%d",&pointer[i]);
        
     }

     for (int i = 0;i < qunatit; i++){

            printf("buffer[%d] = %d\n",i,pointer[i]);

            
        
     }


     free(pointer);
     
     pointer = NULL;





}