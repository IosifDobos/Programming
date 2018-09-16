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
float calc_average(int,int,int);

int main()
{
    int num1, num2,num3;
    float averg=0;

    //asking user to enter three numbers
    printf("Please enter three numbers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    //call function average()
    averg = calc_average(num1, num2, num3);
    //display the average of the three numbers
    printf("The average of the number you entered is: %.2f", averg);

    return 0;
}//end function main

//implement function calc_average()
float calc_average(int a, int b, int c)
{
    float avg;

    avg = a+b+c/3;

    return (avg);
}
