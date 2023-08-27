#include <stdio.h>

int main()
{
    char me[25];
    
    printf("What is your name?\n");
    scanf("%s", &me);
    printf("Darn glad to meet you, %s!\n", me);
    printf("Wow!, he said, \"%s\"", me);

    //printf("%15s", "right\n");
    //printf("%-15s", "left\n");

    
    
    return (0);
}
