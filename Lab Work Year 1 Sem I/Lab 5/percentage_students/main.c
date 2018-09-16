/*  This program is created to display the student percentage mark.

    Author: Iosif Dobos, C16735789, @copyright, all rights are reserved
    Date: 18/10/2016
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mark;
    float average;

    mark=0;
    average=0;

    printf("Please enter the student percentage mark: ");
    scanf("%f", &mark);

   do
    {
        printf("Please enter another student percentage mark: ");
        scanf("%f", &mark);
        mark++;
        average=(mark/5)*100;

    }
    while(mark>1);

    printf("\nThe class average mark is: %.2f",average);

    return 0;
}
