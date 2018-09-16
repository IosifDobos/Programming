/**

    Author: Iosif Dobos, @copyright, all right are reserved
    Date: 08/11/2016
*/



#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    int a[SIZE];
    int i = 0;

    for ( i= 0; i < SIZE; i++)
    {
        a[i] = 9 - i;

    }
    for ( i= 0; i < SIZE; i++)
    {
        a[i] = a[ a[i] ];
    }
    printf("In the array a[8] the number is: %d", a[8]);



    return 0;
}
