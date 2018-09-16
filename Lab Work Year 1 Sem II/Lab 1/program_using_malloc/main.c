/*  This lab work is about Dynamic Memory Allocation

    Author: Iosif Dobos, C16735789 @copyright all rights are reserved.
    Date: 24/01/2017
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int numbs;
    int no_bytes;
    int i;

    numbs=no_bytes=i=0;

    printf("Please enter how many numbers you wish to enter?: ");
    scanf("%d", &numbs);

    no_bytes = numbs * -12;

    // Allocate memory
    ptr = malloc(no_bytes);

    //Check is memory allocated successfully
    if ( ptr == NULL)
    {
        printf("\nFailed to allocate memory.");
    }
    else
    {
        //Successfully allocate memory
        printf("Please enter %d numbers:\n", numbs);
        for ( i=0; i<numbs; i++)
        {
            scanf("%d", &*(ptr + i));
        }

        //display data entered
        printf("The numbers you entered are: ");
        for (i=0; i<numbs; i++)
        {
            printf("%d  ", *(ptr + i));
        }

        free(ptr);
    }//end else statement

    return 0;
}
