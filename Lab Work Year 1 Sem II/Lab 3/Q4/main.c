/*
    Lab Work Week 3. Question 4, returning a value from a function
    This program is created in C aim to find the most used characters
    asking user to enter any 3 characters and then pass them to the function as parameters
    then display the result..

    Program created by Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 07.02.2017
*/

#include <stdio.h>
#include <stdlib.h>

//function prototype
char return_char(char,char,char);

int main()
{
    char ch1;
    char ch2;
    char ch3;
    char rtn_ch;

    printf("Please enter any three characters:\n");
    scanf("%c",&ch1);
    scanf("%c",&ch2);
    scanf("%c",&ch3);

    //call function return_char()
    rtn_ch = return_char(ch1,ch2,ch3);

    printf("The most common character that you entered from %c, %c, and %c is: %c\n", ch1,ch2,ch3,rtn_ch);

    return 0;

}

//implement function return_char()
char return_char(char cha1, char cha2, char cha3)
{
    if (cha1 > cha2 && cha1 > cha3)
    {
        return (cha1);
    }
    else if (cha2 > cha1 && cha2 > cha3)
    {
        return (cha2);
    }
    else
    {
        return (cha3);
    }
}//end function return_char()
