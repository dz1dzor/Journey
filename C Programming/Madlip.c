/*  Madlip.c
15 August, 2023 @ 6:20pm
This is a source code to produce a madlip game
Author: Dzidzor
Version 1.0.0.1
*/


#include <stdio.h>

int main() 
{
    //Declaring variables
    
    char firstname[10];
    char hostel[10];
    int roomnumber[4];

    /*Getting the words to use for the madlip from the user*/

    printf("What's your first name?\n");
    scanf("%s", &firstname);
    printf("Which of the hostels in University of Ghana, Legon do you reside in?\n");
    scanf("%s", &hostel);
    printf("My room number is ");
    scanf("%i", &roomnumber);

    /*Now, displaying the madlip game using the information gotten from the user.*/
    printf("\n\n My name is %s.\n", firstname);
    printf("I'm in %s in the University of Ghana.\n", hostel);
    printf("My room number is %i.", roomnumber);

    return (0);
}
