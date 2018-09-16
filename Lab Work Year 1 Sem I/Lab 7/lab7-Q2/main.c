



#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 2

int main()
{
    int values[ROW][COL];
    int i,j;
    int smallest, largest, sum;
    float average;

    i=j=0;
    sum = 0;
    average = 0;

    printf("Please enter data into the array: ");
    for ( i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            scanf("%d", &values[i][j]);
            sum = sum + values[i][j];
        }
    }
    for ( i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            printf("%d  ", values[i][j]);
        }
        printf("\n");
    }
    smallest = values[0][0];
    largest = values[0][0];

    // part c find the smallest & largest
    for ( i=0; i<ROW; i++)
    {
        for ( j=0; j<COL; j++)
        {
            if ( smallest > values[i][j])
            {
                smallest = values[i][j];
            }
            if ( largest < values[i][j])
            {
                largest = values[i][j];
            }//end if else statement
        } //end inner loop
    }// end outer loop
    printf("The smallest number is: %d", smallest);
    printf("\nThe largest number is: %d", largest);

    //part d: calculate the array average
    average = (float) sum / 6;

    printf("\nThe matrix average is %.2f", average);


    return 0;
}
