/**
 * Lab work week 10 Programming Question 1
 * Question 1 is about two 1-Dimensional array called Euro and Dollar which contain 5 elements each
 *
 * Program created by Iosif Dobos, C16735789 @copyright all rights are reserved
 * Date: 28/03/2017
 */

#include <stdio.h>

//declary the symblic names
#define SIZE 5

//declare my function prototype
void change_to_euro ( float [] );
void change_to_dollar ( float [] );

int main()
{
    //declare my floating array
    float Euro[SIZE], Dollar[SIZE];

    //call function to enter euro data into the array
    change_to_euro( Euro );

    //call function to enter dollar data into the array
    change_to_dollar( Dollar );

    //display data to the user
    printf("Euro amount that you entered are: ");
    for (int i = 0; i < SIZE ; ++i)
    {
        printf(" %.2f  |", Euro[i]);
    }
    printf("\nDollars amount that you entered are: ");
    for (int i = 0; i < SIZE ; ++i)
    {
        printf(" %.2f |", Dollar[i]);
    }

    return 0;

}//end main

//Implement function change_to_euro()
void change_to_euro ( float inst_euro[SIZE] )
{
    //create my index variable
    int i;

    //read data from the user using a for loop
    printf("Please enter 5 euro amounts: \n");
    for ( i = 0; i < SIZE; i++)
    {
        scanf("%f", inst_euro[i]);
    }

}//end change_to_euro() function

//implement function change_to_dollar()
void change_to_dollar (float inst_dollar[SIZE])
{
    //create my index variable
    int i;

    //read data from the user using a for loop
    printf("Please enter 5 dollars amounts: \n");
    for ( i = 0; i < SIZE; ++i)
    {
        scanf("%f", inst_dollar[i]);
    }//end for loop
}//end change_to_dollar() function


