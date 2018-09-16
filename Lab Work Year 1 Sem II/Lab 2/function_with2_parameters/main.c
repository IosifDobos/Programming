/*
    Program created in C that use functions with two parameters
    a character and a integers. Program write in class.

    Author: Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 31.01.2017
*/

#include <stdio.h>
#include <stdlib.h>
//declaring prototype function with 2 parameters
void my_function(char, int);

int main()
{
    //delcaring variables
    int num1 = 0;
    char my_ch;

    //ask user for the character and the number of times wish to display
    printf("What symbol wish to display on the screen?: ");
    my_ch = getchar();
    printf("How many times wish to display?: ");
    scanf("%d", &num1);
    //call function my_funtion()
    my_function(my_ch, num1);

    return 0;
}//end funtcion main

//implement function my_function
void my_function(char ch, int no1)
{
    int i = 0;
    //create a loop that will display the symbol and the number of times the user wish
    for( i=0; i<no1; i++)
    {
        printf("%c ", ch);
    }//end for loop
}//end function my_function
