/*
    Lab work week 4 Programming

    Question 1, program written in C language that use 2 function
        1 - to calculate the area of a Square
        2 - to calculate the area of a Circle
    program that use functions pass by reference. In the main function ask user to enter the
    value for the length of a side and another variable for the Radius of the Circle.

    Created by Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 14.02.2017
*/

#include <stdio.h>
#include <stdlib.h>

//declaring my global variable pi
const float pi =  3.14;

//function prototype
void fxn_square(float*);
void fxn_circle(float*);

int main()
{
    //declaring variables
    float side;
    float radius;


    //Ask the user to enter some value
    printf("Enter the length of a side of a square: ");
    scanf("%f", &side);

    //Ask user to enter the radius of a Circle
    printf("Enter the radius of a Circle: ");
    scanf("%f", &radius);

    //call function fxn_square()
    fxn_square(&side);
    //call function fxn_circle()
    fxn_circle(&radius);

    //display the area of the square and circle
    printf("\nThe area of the Square is: %.2f", side);
    printf("\nThe area of the Circle is: %.2f", radius);

    return 0;
}
//impleent function fxn_square()
void fxn_square(float*ptr1)
{
    *ptr1 = *ptr1 * *ptr1;
}//end function fxn_square()

//implement function fxn_circle()
void fxn_circle(float *ptr2)
{
    *ptr2= pi * (*ptr2 * *ptr2);
}//end function fxn_circle()
