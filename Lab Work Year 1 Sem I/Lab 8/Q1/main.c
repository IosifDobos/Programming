/** Programming lab work week 8 - November 15th, 2016
    This lab work is about 2-Dimensional array initialise, declared and so on

    Author: Iosif Dobos, C16735789, @copyright all right are reserved
    Date: 15/11/2017
*/

#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 4

int main()
{
   int array_d1[ROW][COL];
   int array_d2[ROW][COL];
   int array_d3[ROW][COL];
   int i,j;

    printf("Please enter the data in the first array: \n");
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            scanf("%d", &array_d1[i][j]);
        }
    }
    printf("\nPlease enter data in the second array: ");
    for (i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d", &array_d2[i][j]);
        }
    }

    printf("\n1st array is: \n");
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            printf("%d  ", array_d1[i][j]);
        }
        printf("\n");
    }
    printf("\n2nd array is: \n");
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            printf("%d  ", array_d2[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            array_d3[i][j] = array_d1[i][j] * array_d2[i][j];
        }
    }
    printf("Element [1][1] = %d", array_d3[0][0]);
    printf("\nElement [1][2] = %d", array_d3[0][1]);
    printf("\nElement [1][3] = %d", array_d3[0][2]);
    printf("\nElement [1][0] = %d", array_d3[1][0]);


    return 0;
}
