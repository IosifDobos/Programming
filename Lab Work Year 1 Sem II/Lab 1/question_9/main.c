#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb, i;
    int *ptr;

    numb=i=0;

    //Enter data from user
    printf("How many numbers of elements you wish to enter: ");
    scanf("%d", &numb);

    ptr = (int*)calloc(numb, sizeof(int));
    //Enter numbers of elements
    printf("Enter %d number: \n", numb);
    //Check if allocate successfully
    if ( numb == NULL )
    {
        printf("\nFailed to allocate memory.");
    }
    else
    {
        for (i=0; i<numb; i++)
        {
            scanf("%d", &ptr[i]);
        }
        //Display data
        printf("\nThe numbers you entered are:");
        for (i=0; i<numb; i++)
        {
            printf("%d  ",ptr[i]);
        }
    }//end else

    free(ptr);

    return 0;
}
