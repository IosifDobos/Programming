/*
    Program write in C using function with 3 parameters,
    finding the highest and the lowest value of three numbers

    Author: Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 31.01.2017
*/
#include <stdio.h>
#include <stdlib.h>
//function prototype
void highest_lowest(int,int,int);

int main()
{
    //declaring integers
    int num1,num2,num3;
    num1=num2=num3=0;

    //
    printf("Enter three value to find the Highest and Lowest!!!\n");
    //asking user to enter three numbers
    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);
    printf("Please enter the third number: ");
    scanf("%d", &num3);
    //call function highest_lowest
    highest_lowest(num1,num2,num3);

    return 0;
}
//implement function highest_lowest()
void highest_lowest(int no1,int no2,int no3)
{
    //check if all three value are the same
    if (no1 == no2 && no1 == no3)
    {
        printf("You entered exactly same numbers.\nProgram Ends!!! \nThank you!!!\n");
    }

    //checking the lowest value
    if( no1 < no2 && no1 < no3)
    {
       printf("The Lowest value is %d", no1);
    }
    else if ( no2 < no1 && no2 < no3)
    {
        printf("\nThe Lowest value is %d", no2);
    }
    else if (no3 < no2 && no3 < no1)
    {
        printf("\nThe Lowest value is %d", no3);
    }
    //checking the highest value
    if ( no1 > no2 && no1 > no3)
    {
        printf("\nThe Highest value is %d", no1);
    }
    else if ( no2 > no1 && no2 > no3)
    {
        printf("\nThe Highest value is %d", no2);
    }
    else
    {
        printf("\nThe Highest value is %d", no3);
    }//end if else statement
}//end function highest_lowest()s
