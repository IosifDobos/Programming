/** This program aim to ask user for 2 characters
* and after display user character inserted
* Author: Iosif Dobos, C16735789
* Date: 04/10/2016
*/

#include <stdio.h>
//#include <stdlib.h>

int main()
{
    char first_c;
    char second_c;

    printf("Please enter first character: ");
    scanf("\n%1s", &first_c);
    //if you press enter the code is still running until user press a character

    printf("Please enter second character: ");
    scanf("\n%1s", &second_c);
    // if we change %1s instead of %c the code still running
    // but when display the both character in the printf line bellow firs character doesn`t show up

    printf("\nYou entered : %c, %c.", first_c, second_c);

    return 0;
}
