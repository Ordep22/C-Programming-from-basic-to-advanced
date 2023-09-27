#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){

    uint8_t vector[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    uint8_t bytes[8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    uint64_t numberFour;
    int a, b, c, d,len;

    a = 10;
    
    b = 15;
    
    c = 20;
    
    d = 30;

    vector[0] = (uint8_t)a;

    vector[1] = (uint8_t)b;
    
    vector[2] = (uint8_t)c;
    
    vector[3] = (uint8_t)d;

    vector[4] = (uint8_t)a;

    vector[5] = (uint8_t)b;
    
    vector[6] = (uint8_t)c;
    
    vector[7] = (uint8_t)d;

    numberFour =((uint64_t)vector[0]<< 56) + 
                ((uint64_t)vector[1]<< 48) +
                ((uint64_t)vector[2]<< 40) +
                ((uint64_t)vector[3]<< 32) + 
                ((uint64_t)vector[4]<< 24) + 
                ((uint64_t)vector[5]<< 16) +
                ((uint64_t)vector[6]<< 8) +
                ((uint64_t)vector[7]);

    printf("%llu\n",numberFour);

    len = sizeof(numberFour);

    printf("%d",len);

    bytes[0] = (uint8_t)((numberFour >> 56) & 0xFF);

    bytes[1] = (uint8_t)((numberFour >> 48) & 0xFF);

    bytes[2] = (uint8_t)((numberFour >> 40) & 0xFF);

    bytes[3] = (uint8_t)((numberFour >> 32) & 0xFF);

    bytes[4] = (uint8_t)((numberFour >> 24) & 0xFF);

    bytes[5] = (uint8_t)((numberFour >> 16) & 0xFF);

    bytes[6] = (uint8_t)((numberFour >> 8) & 0xFF);

    bytes[7] = (uint8_t)((numberFour) & 0xFF);

    printf("Bytes: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", bytes[i]);
    }
    printf("\n");


}