/**
    Programming lab 16 Week 7

    Quetion 1: Compare two strings using strcmp

    Program Created by Iosif Dobos, C16735789 @copyright, all rights are reserved
    Date: 07/03/2017
*/
#include <stdio.h>
#include <string.h>

#define SIZE 4

int main()
{
    char *nameString[SIZE] = { "Robbert", "Darren", "Rebeca", "Joseph"};
    char *usrInput[SIZE];

    int i;
    printf("Please enter your name: ");
    scanf("%c", &*usrInput[SIZE]);

    printf("Your name is : %c", *usrInput[SIZE]);

    for ( i = 0; i < SIZE; i++)
    {
        if ( strcmp( *nameString, *usrInput ) == 0)
        {
            printf(" Name found in the system.");
        }
        else
        {
            printf("Name not found.");
        }
    }



    return 0;
}