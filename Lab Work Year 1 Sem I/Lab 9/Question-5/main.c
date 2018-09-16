#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
#define  SSIZE 3
int main()
{
    float data[SIZE];
    float data1[SSIZE];
    float *ptr1, *ptr2;
    int i,j;

    ptr1 = &data;
    ptr2 = &data1;

    printf("Enter values into the first array: ");
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &*(data + i));
    }

    printf("Enter values into the second array: ");
    for (j=0; j<SSIZE; j++)
    {
        scanf("%d", &*(data1 + j));
    }

    return 0;
}
