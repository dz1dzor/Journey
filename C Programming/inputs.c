#include <stdio.h>
#include <stdlib.h>

int main()
{    
    char topic;

    printf("What was you favorite topic in Calculus I?\n");
    //scanf("%c", &grade);
    fgets(topic, 20, stdin);

    printf("It was %s \n", topic);

    return(0);
}