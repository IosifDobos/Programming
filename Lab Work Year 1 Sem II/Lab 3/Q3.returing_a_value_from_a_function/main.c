/*
    Lab Work Week 3. Question 2, returning a value from a function
    This program is created in C aim to calculate the average of 3 numbers
    asking user to enter 3 numbers and then pass them to the function as parameters
    then display the result

    Program created by Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 07.02.2017
*/

#include <stdio.h>
#include <stdlib.h>

//function prototype
int highest_value(int,int,int);

int main()
{
    int num1,num2,num3;
    int h_val=0;

    printf("Please enter any three numbers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    //call function highest_value()
    h_val = highest_value(num1,num2,num3);
    //display the highest value
    printf("The highest number that you entered is: %d\n", h_val);

    printf("\nThank you!!!\n");

    return 0;

}//end function main()

//implement function highest_value()
int highest_value(int no1,int no2, int no3)
{
    if (no1 == no2 == no3)
    {
        return (no1);
    }

    if (no1 > no2 && no1 >no3)
    {
        return (no1);
    }
    else if (no2 > no1 && no2 > no3)
    {
        return (no2);
    }
    else
    {
        return (no3);
    }

}
