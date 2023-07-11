#include <stdio.h>
#include <string.h>

//criating a struct
struct Studant{

    char name[100];
    char registration[100];
    char course[100];
    int birthday;

}studants[5]; //We can declarate the  a variable of this struct

int main(){

    for (int i =0; i < 2; i++){

        printf("Insert the studant's name:");
        fgets(studants[i].name,100,stdin);
        printf("\n");

        printf("Inser the studant's course:");
        fgets(studants[i].course,100,stdin);
        printf("\n");

        printf("Inser the studant's register:");
        fgets(studants[i].registration,100,stdin);
        printf("\n");

        printf("Inser the studant's birthday:");
        scanf("%d",&studants[i].birthday);
        getchar();
        printf("\n");


    }
    
    for (int i =0; i < 2; i++){
   
    printf("==================== Studant's Data ====================\n\n");

    printf("Name: %s",studants[i].name);
    
    printf("\n");
    printf("Course: %s",studants[i].course);

    printf("\n");
    printf("Registration: %s",studants[i].registration);

    printf("\n");
    printf("Birthday: %d",studants[i].birthday);
    printf("\n");

    }

}