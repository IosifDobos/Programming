/** This program calculate the sum of all the odd integers from 1 to 99
*   Author: Iosif Dobos, C16735789, @copyright, all rights are reserved
*   Date: 18/10/2016
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=1;
    int sum=0;

    for(num=1; num<=99; num++)
    {
        if(num % 2 != 0)
        {
            sum= sum+num;
        }
    }
    printf("The sum of numbers is: %d",sum);

    return 0;
}
