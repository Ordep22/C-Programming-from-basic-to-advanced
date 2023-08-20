#include <stdio.h>
#include <string.h>

//criating a struct
struct Studant{

    char name[100];
    char registration[100];
    char course[100];
    int birthday;

}studantOne, studants[5]; //We can declarate the  a variable of this struct

int main(){

    struct Studant studantTwo;

    printf("Insert the studant's name:");
    fgets(studantTwo.name,100,stdin);
    printf("\n");

    printf("Inser the studant's course:");
    fgets(studantTwo.course,100,stdin);
    printf("\n");

    printf("Inser the studant's register:");
    fgets(studantTwo.registration,100,stdin);
    printf("\n");

    printf("Inser the studant's birthday:");
    scanf("%d",&studantTwo.birthday);
    printf("\n");
   
    printf("==================== Studant's Data ====================\n\n");

    printf("Name: %s",studantTwo.name);
    
    printf("\n");
    printf("Course: %s",studantTwo.course);

    printf("\n");
    printf("Registration: %s",studantTwo.registration);

    printf("\n");
    printf("Birthday: %d",studantTwo.birthday);
    printf("\n");



}