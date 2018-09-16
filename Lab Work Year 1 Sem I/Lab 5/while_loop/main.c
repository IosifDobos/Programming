/** Program using while loop that display the numbers from 1-10
*   Author: Iosif Dobos, C16735789, @ all right are reserved
*   Date: 18/10/2017
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    num = 1;

    while(num  <= 10)
    {
        printf("%d, ", num);
        num++;
    }

    num = 9;
    while(num >= 1)
    {
        printf("%d, ", num);
        num--;
    }

    return 0;
}
