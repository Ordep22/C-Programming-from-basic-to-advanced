#include <stdio.h>
#include <string.h>

int main(){

        char strOne[] = "pedro@gmail.com";
        char findChar = '@';

        char *addr = strchr(strOne,findChar);

        printf("%c %s",findChar,addr+1);
        



}