/** This program display the number from 1 to 10, when hit 3 and 7 print a message
*   seeing "This number is three" and "This number is seven"
*   Author: Iosif Dobos, C16735789, @allrights are reserved
*   Date: 18/10/2016
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    num = 1;

    for(num = 1; num <= 10; num++)
    {
        if (num == 3)
        {
            printf("\nThis number is %d", num);
        }
        if (num == 7)
        {
            printf("\nThis number is %d", num);
        }
        printf("\n%d", num);
    }



    return 0;
}
