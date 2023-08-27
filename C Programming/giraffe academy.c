#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10] = "Emmanuel";
    const int AGE = 19;

    double gpa;
    char grade;

    printf("There was a man named %s \n", name);
    printf("he was %d years old.\n", AGE);  
    printf("He really liked the name %s\n", name);
    printf("but did not like being %d.\n", AGE);

    printf("%f", 20 - 3 );
    printf("\n");


    printf("What is your gpa?\n");
    scanf("%lf", &gpa);
    //fgets(gpa, 3, stdin);

    printf("My gpa is %f \n", gpa);
    

    return 0;
}