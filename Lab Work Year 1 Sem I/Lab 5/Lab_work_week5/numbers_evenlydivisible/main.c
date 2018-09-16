/** This program is created to display all the number divisible from 1-20
 *  with the user number input
 *  Author: Iosif Dobos, C16735789 @ copyright all rights are reserved.
 *  Date: 18/10/2016
 */

#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int num,i;
    num = 0;
    i = 1;

    printf("Enter a number between 1 - 5: ");
    scanf("%d", &num);

    printf("\nFrom 1 to 20, the number %d is evenly divisible only with: \n", num);

    for(i = 1; i<=20; i++)
    {
        if(i % num  == 0)
        {
            printf("%d, ", i);
        }

    }




    return 0;
}
