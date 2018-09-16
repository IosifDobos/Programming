/** This program display all the even numbers from 1 to 100
*   Author: Iosif Dobos, C16735789, @copyright all right are reserved
*   Date: 18/10/2016
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    num=1;

    for (num = 1; num <= 100; num++)
    {
        if (num % 2 == 0)
        {
            printf("%d, ", num);
        }
    }


    return 0;
}
