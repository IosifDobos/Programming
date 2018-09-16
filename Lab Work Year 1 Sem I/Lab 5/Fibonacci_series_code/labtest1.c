/** This program is created to calculate the Fibonacci series of number

    The Fiboncci calculation is add first number with second and display the answer.
    Then add the second number with the answer and display the result of the calculation
    Keep calculating until the required are met(user input)

    Author: Iosif Dobos, C16735789, @copyright, all rights are reserved
    Date: 25/10/2016

*/


#include <stdio.h>

int main()
{
    //declaring the variables
    int user_input;
    int first, second, counter, answer;

    //assignment operator, initialise the integers with the respective value
    first=0;
    second=1;
    counter=0;

    //asking user to enter a number and display to the screen
    printf("Please enter a fibonacci number required to: ");
    scanf("%d", &user_input); //read data from the keyboard

    printf("==========================================================\n");

    //creating a loop that will calculate the fibonacci series
    while(counter<=user_input)
    {
        if(user_input<=0)
        // if user enter 0 or less display an error asking user to enter
        // a bigger value to can calculate Fibonacci series
        {
            printf("Please enter another number greather than %d",user_input);
            printf("\nEnter your Fibonacci number required to again: ");
            scanf("%d", &user_input);
        }
        if(counter==0)  //creating a condition saying if counter is 0 print the first number
            //in this case the Fibonacci series start from 0, 1, ...
        {
            printf("%d, ",first);
        }
        else if(counter==1) // creating another condition if counter is 1 print the second number
        {
            printf("%d, ",second);
        }
        else
        {
            //creating the fibonacci calculating series:
            //add fist with the second and store it in the variable answer
            //then second goes into first answer goes into the second and display answer
            // run until user input number is met
            answer=first+second;
            first=second;
            second=answer;
            printf("%d, ", answer);
        }

        counter++; // increment the counter. The while loop will run until counter is equal to user input

    }//end of while loop

        printf("\n==========================================================");

    return 0;
}// end main
