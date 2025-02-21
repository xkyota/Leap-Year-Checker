#include <stdio.h> 

int main(void){
    int year;

    printf("Enter year >>> ");
    scanf("%d", &year); 

    if ((year % 4 == 0) && (year % 100 != 0))
    {
        printf("Leap \n"); 
    } else if (year % 400 == 0)
    {
        printf("Leap"); 
    } else{
        printf("Not leap"); 
    }

    return 0; 
}