



#include <stdio.h>
#include <stdlib.h>

#define SIZE 15

int main()
{
    int matrix[SIZE];
    int i=0;

    printf("Please enter data into the array: \n");
    //read the data from user
    for ( i=0; i<SIZE; i++)
    {
        scanf("%d", &matrix[i]);
    }
    printf("The numbers in the array you entered are: \n");
    //display the user numbers
    for (i=0; i<SIZE; i++)
    {
        printf("%d\n", matrix[i]);
    }

    //part b display all elements in one lane separated by comma
    printf("Enter any data again: \n");
    for ( i=0; i<SIZE; i++)
    {
        scanf("%d", &matrix[i]);
    }
    printf("The numbers in the array you entered are: \n");
    //display the user numbers
    for (i=0; i<SIZE; i++)
    {
        printf("%d ", matrix[i]);
    }

    //part c display the user number in the reverse order
     printf("\nEnter any data again: \n");
    for ( i=0; i<SIZE; i++)
    {
        scanf("%d", &matrix[i]);
    }
    printf("The numbers in the array you entered are: \n");
    //display the user numbers
    for (i=14; i<SIZE; i--)
    {
        printf("%d ", matrix[i]);
    }

    return 0;
}
