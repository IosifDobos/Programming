/*

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbs, i;
    int n_bytes;
    int *ptr;

    n_bytes = numbs = i = 0;

    printf("How many numbers of element to be entered: ");
    scanf("%d", &numbs);

    ptr = calloc(n_bytes, sizeof(int));

    //Chech if allocated successfully
    if (ptr == NULL)
    {
        printf("\nFailed to allocate memory.");
    }
    else
    {
        printf("Enter %d numbers: \n", numbs);
        for ( i=0; i<numbs; i++)
        {
            scanf("%d", &*(ptr + i));
        }
        //Display data user entered
        printf("\nThe number you entered are : ");
        for (i=0; i<numbs; i++)
        {
            printf("%d  ", *(ptr + i));
        }


    }//end else

    free( ptr );

    return 0;
}// end main
