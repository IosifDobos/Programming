/*
    Lab work week 2.Program write in C that use function.
    This program aim to display 10 stars on a single line
    using function.

    Author: Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 31.01.2017
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
//function prototype
void stars(void);

int main()
{
    //before function star call()
    printf("Printing 10 stars(*) on the screen.\n");
    //calling the function stars()
    stars();

    return 0;
}//end main


//implement function stars()
void stars()
{
    int i = 0;

    for (i = 0; i<SIZE; i++)
    {
        printf("* ");
    }//end for loop
} //end function stars()
