/**
    Author: Iosif Dobos, C16735789 @copyright, all rights are reserved
    Date: 22/11/2016
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float input1, input2;
    float *ptr1, *ptr2;

    input1 = 2016.22;
    input2 = 2017.23;

    ptr1 = &input1;
    ptr2 = &input2;

    printf("The address of input1 is: %p", ptr1);
    printf("\nThe address of input2 is: %p", ptr2);

    printf("\n");
    printf("\nThe address of ptr1 is: %p", &ptr1);
    printf("\nThe address of ptr2 is: %p", &ptr2);

    printf("\n");
    printf("\nThe content of input1 is: %.2f", *ptr1);
    printf("\nThe content of input2 is: %.2f", *ptr2);


    return 0;
}
