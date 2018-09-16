/*
    Lab Work Week 3. Question one, returning a value from a function
    This program is created in C aim to check a number from user input
    if the number even or odd.  The function should check the user input.

    Program created by Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 07.02.2017
*/

#include <stdio.h>
#include <stdlib.h>
//function prototype
int check_num(int);

int main()
{
    int usr_num;
    int result = 0;

    //Asking user to enter an integer number
    printf("Please enter any integer number: ");
    scanf("%d", &usr_num);

    //Calling function which check if the number is even or odd
    result = check_num(usr_num);

    //Display the result
    printf("The number you enter is %d", result);

    return 0;
}//end function main

//implement function check_num() and return the result
int check_num(int no1)
{
    if ( no1 % 2 == 0)
    {
        return(0);
    }
    else
    {
        return(1);
    }
}//end function check_num()
