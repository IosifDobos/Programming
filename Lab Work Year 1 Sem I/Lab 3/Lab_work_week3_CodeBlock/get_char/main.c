/** This program is created to ask user for
    a character using getchar and then to
    display the user character using putchar.
*   Author: Iosif Dobos, C16735789 @ all rights are reserved
*   Date: 01/10/2016
*/



#include <stdio.h>
//#include <stdlib.h>

int main()
{
    char ch1;

    ch1=0;

    printf("Enter any character character:  \n");
    ch1 = getchar();

    printf("\nYou enterred: ");
    putchar(ch1);


    return 0;
}
