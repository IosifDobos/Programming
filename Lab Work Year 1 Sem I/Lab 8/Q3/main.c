#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 2

int main()
{
    int data[ROW][COL];
    int i,j;
    int sum;

    i=j=0;
    sum=0;

    printf("Enter data into the array: \n");
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }
    //print user data in a matrix form
    printf("\nThe array matrix is: \n");
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            printf("    %d   ", data[i][j]);
        }
        printf("\n");
    }
    //calculate the sum of every row in part
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            sum = sum + data[i][j];
        }
        printf("Sum of the row %d is = %d\n", i, sum);
        sum = 0;
    }
    // calculate the sum of column in part
    printf("\n");
    sum = 0;
    for (j = 0; j<COL; j++)
    {
        for (i=0; i<ROW; i++)
        {
            sum = sum + data[i][j];
        }
        printf("Sum of column %d is = %d\n", j, sum);
        sum = 0;
    }



    return 0;
}
