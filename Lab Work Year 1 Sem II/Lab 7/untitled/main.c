#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    char input[SIZE]="";
    int length,i;

    scanf("s", input);
    length = strlen(input);

    for(i=0; i<length; i++)
    {
        if ( !isdigit(input[i]))
        {
            printf("Not a number");
            exit(1);
        }
        printf("Input is a number");
    }

    return 0;
}