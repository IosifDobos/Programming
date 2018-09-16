/**
    Lab work week 4 Programming

    Question 4, program written in C language that  Make a copy of Q2 above but this time,
    use your function to change the contents of the array, i.e. multiply each number in the array by 2.
    When your function has finished and your program continues in your main(), print the contents of
    your array in your main()
    In the main function ask user to enter 5 numbers and store numbers into the array
    Pass the array to the function and multiply each element in the array by 2

    Created by Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 14.02.2017
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//function prototype
void my_arr(int []);

int main()
{
    int my_array[SIZE];
    int i;

    //asking user to fill data into the array
    printf("Please enter data into the array: \n");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &my_array[i]);
    }
    //call function my_array and try to access the content of the array
    //and change the value
    my_arr( my_array);

    //display the new array value
    for (i=0; i<SIZE; i++)
    {
        printf("%d\t", my_array[i]);
    }

    return 0;
}
//implement function my_arr()
void my_arr(int array[SIZE])
{
    int i;

    for (i=0; i<SIZE; i++)
    {
        array[i]= array[i]*2;
    }
}
