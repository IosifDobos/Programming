/** This program is aim to display the numbers from 1 to 10 in descending order
*   using a while loop
*   Author: Iosif Dobos, C16735789 @ copyright all right are reserved,
*   Date: 18/10/2016
*/

#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int numb;
    numb = 1;


    for (numb = 1; numb <= 10; numb++)
    {
        printf("%d,",numb);
    }
    printf("\n");


    return 0;
}
