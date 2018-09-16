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

#define SIZE 3

//function prototype
float average(int[]);

int main()
{
    int numb[SIZE];
    int i;
    int avg;

    //Asking user to enter three numbers
    printf("Please enter any three numbers:\n");
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &numb[i]);
    }


    //call function average to display the average of three number
    avg = average(numb);


    //display the average

    printf("The average of number entered is: %.2f", avg);

    return 0;
}

//implement function average()
float average(int my_numbs[])
{
    int i;
    int sum;
    float avg;

    //printf("The numbers you entered are:\n");
    for (i=0; i<SIZE; i++)
    {
        //printf("%d\n", my_numbs[i]);
        sum = sum + my_numbs[i];
    }
    //calculate the average
    avg =(float)sum/3;

    //return the average to the main function
    return(avg);
}
