#include <stdio.h>

/*
The enumerate structure is interesting whem we can give to user opetions to  choice constants 
in a static list. For example the numbers the days of week.
*/

enum daysOfweek {

    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday


};



int main(){
    
    enum daysOfweek dayOne, dayTwo;

    dayOne = thursday;

    dayTwo = friday;


    printf("The day one is:%d\n", dayOne);

    printf("The day two is:%d\n", dayTwo);











}