/**
    Lab work week 4 Programming

    Write a program that passes an array to a function containing 5 numbers and checks each
    number if it is even or odd. Use your function to display each number and whether it is
    even or odd. Calculate the total number of even numbers and return this number to your
    main() and display it.

    Created by Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 14.02.2017
*/


#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//function prototype
int my_fxn(int []);

int main()
{
    int array[SIZE];
    int i;
    int even;

    //asking user to enter data into the array
    printf("Please enter five different numbers: \n");
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    //call function my_fxn () to check if number is odd or even and display it
    even = my_fxn(array);

    //display the total of even numbers
    printf("Total of even numbers is: %d", even);

    return 0;

}//end main()

//implement function my_fxn() and check if number is odd or even
int my_fxn(int array[SIZE])
{
    int no;
    int i;

    for(i=0; i<SIZE; i++)
    {
        if( array[i] / 2 == 0)
        {
            no++;
        }
    }
    return(no);
}
