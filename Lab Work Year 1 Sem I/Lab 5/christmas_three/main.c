/** This program aims to display the christmas three, the width of the three is
*   based on the user input
*   Author: Iosif Dobos, C16735789 @copyright, all rights are reserved
*   Date: 18/10/2016
*/


#include <stdio.h>
//#include <stdlib.h>

int main()
{
    //declare the integers
    int spaces, size, stars=1;
    int i=0;

    printf("Please enter the size of the three:");
    scanf("%d", &size);

    spaces=size-1;

    //making a decision if zise is 0 or 1 canno`t build the tree, otherwise yes
    if(size == 0 || size == 1)
    {
        printf("\nSorry we canno`t build the three.");
    }
    else
    {
        while(spaces != 1)
        {
            for(i=0; i<spaces; i++)
            {
                printf(" ");
            }
            for(i=0; i<stars; i++)
            {
                printf("*");
            }
            printf("\n");
            stars=stars+2;
            spaces=spaces-1;
        }

        // adding and if statement to build up the root
        if(spaces==-1)
        {
            for(i=0;i<size-1;i++)
            {
                printf(" ");
            }
            printf("*");
        }
    }


    return 0;
}
