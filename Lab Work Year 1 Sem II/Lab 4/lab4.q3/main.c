/*
    Lab work week 4 Programming

    Question 3, program written in C language that use a function to calculate the average
    of 5 numbers from an array.
    In the main function ask user to enter 5 numbers and store numbers into the array
    Pass the array to the function and in the function find the highest number

    Created by Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 14.02.2017
*/


#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//function prototype
float fxn_average(int[]);

int main()
{
    //declaring the variables and array
    int my_array[SIZE];
    int i;
    float average;

    //ask user to enter five numbers then display the sum
    printf("Enter any five number: \n");
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &my_array[i]);
    }
    //call function to calculate the averag
    average = fxn_average(my_array);

    //print the average of the five numbers
    printf("The average of the numbers you entered is: %.2f", average);


    return 0;
}//end function main()

//implement function fxn_average()
float fxn_average(int array[SIZE])
{
    int sum=0;
    int avg=0;
    int i;

    //create a loop that calculate the array average
    for (i=0; i<SIZE; i++)
    {
        sum = sum + array[i];
    }//end for loop
    //calculate the average
    avg = (float)sum / SIZE;

    //return the average
    return(avg);
}//end function fxn_average()
