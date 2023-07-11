#include <stdio.h>
#include <string.h>

struct  contacts
{
    char name[100];
    int birthday;
    char phoneNumber[100];
    char emailAdress[100];
};


struct contactBoock{

    struct contacts Contacts[100];

}book;



int main(){


for (int i =0; i < 1; i++){

        printf("Insert the contact's name:");
        fgets(book.Contacts[i].name,100,stdin);
        printf("\n");

        printf("Inser the scontact's phone number:");
        fgets(book.Contacts[i].phoneNumber,100,stdin);
        printf("\n");

        printf("Inser the contact's email adrees:");
        fgets(book.Contacts[i].emailAdress,100,stdin);
        printf("\n");

        printf("Inser the scontact's birthday:");
        scanf("%d",&book.Contacts[i].birthday);
        getchar();
        printf("\n");

        printf("======================================================\n\n");

    }
    
    printf("==================== Contact's Data ====================\n\n");
    
    for (int i =0; i < 1; i++){
   

    printf("Name: %s",book.Contacts[i].name);
    printf("Course: %s",book.Contacts[i].phoneNumber);
    printf("Registration: %s",book.Contacts[i].emailAdress);
    printf("Birthday: %d",book.Contacts[i].birthday);
    printf("\n");

    printf("============================================================\n\n");

    }

    


}
