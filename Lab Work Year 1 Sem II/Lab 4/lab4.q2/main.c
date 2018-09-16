/*
    Lab work week 4 Programming

    Question 2, program written in C language that use a function to find the highest number
    in an array containing 5 numbers.
    In the main function ask user to enter 5 numbers and store numbers into the array
    Pass the array to the function and in the function find the highest number

    Created by Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 14.02.2017
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//function prototype
int high_num(int []);

int main()
{
    //declaring my array
    int my_array[SIZE];
    int i,highest;

    //ask user to enter any numbers to fill the array
    printf("Please enter any 5 numbers to fill the array: \n");
    //create a loop that fill the array with user input values
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &my_array[i]);
    }//end for loop

    //call function that find the highest number from the array
    highest = high_num(my_array);

    //display the highest number from the array to the screen
    printf("\nThe highest number is: %d", highest);

    return 0;
}//end function main()

//implement function high_num to find the highest number
int high_num(int array[SIZE])
{
    int i;
    int temp;
    temp = array[0];

    for (i=0; i<SIZE; i++)
    {
       if (array[i] > temp)
       {
           temp = array[i];
       }
    }
    return(temp);
}
