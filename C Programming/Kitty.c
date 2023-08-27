#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kitty[20];
    
    printf("What would you like to name your cat? \n");
    scanf("%s", &kitty);

    printf("%s is a nice name. What else do you have in mind?\n", kitty);
    scanf("%s", &kitty);

    printf("%s is nice too.\n", kitty);

    int age;
    char years[20];
    

    scanf("%d", &years);
    age = atoi(years);
    printf("He is %d years old.\n", age);

    //printf("How old was Jesus when he first preached in the temple?\n");
    //scanf("%d", &age);
    printf("He was %d years old when that happened.", age);
    

    return(0);
}