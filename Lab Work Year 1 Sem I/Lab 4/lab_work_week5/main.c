 /** This program is created  using a switch statement asking user to enter a character from the
*   keyboard and display the a massage from the respective character.
*   Author: Iosif Dobos, C16735789 @ all rights are reserved
*   Date: 11/10/2016
*/


#include <stdio.h>
//#include <stdlib.h>

int main()
{
    char user_ch;
    int user_input;

    user_input = 0;

    printf("Q1. Using switch statement, ask user to introduce a character than display it on the sreen\n");
    printf("Please enter any character (a, b, c, d,a,i,o,u):\n");
    user_ch = getchar();

    // Using switch case
    switch (user_ch)
    {
    case 'a':
        case 'A':
        {
            printf("\nYou entered the character 'a' ");
            break;
        }
        case 'b':
        case 'B':
        {
            printf("\nYou entered the character 'b' " );
            break;
        }
        case 'c':
        case 'C':
        {
            printf("\nYou entered the character c.");
            break;
        }
        case 'd':
        case 'D':
        {
            printf("\nYou entered the character d.");
            break;
        }
        case 'e':
        case 'E':
        {
            printf("\nYou entered the character e.");
            break;
        }
        case 'i':
        case 'I':
        {
            printf("\nYou entered the character i.");
            break;
        }
        case 'o':
        case 'O':
        {
            printf("\nYou entered the character o");
            break;
        }
        case 'u':
        case 'U':
        {
            printf("\nyou entered the character u.");
            break;
        }
        default:
        {
            printf("\nSorry the charcter you entered not match.");
            printf("\nThank you!!!");
            break;
        }
    }

    // Question two
    printf("\nQ2. Write a program asking user to enter an integer between 1 and 100.");
    printf("\n check whether the integer is even or odd and print in the screen");

    // Asking user for a integer and display the number
    printf("\nPlease enter a number between 1 and 100: ");
    scanf("%d", &user_input);

    if (user_input < 1 && user_input > 100)
    {
        printf("\nSorry the number you entered not match");
    }
    else if (user_input % 2 == 0)
    {
        printf("\nThe number you entered is even");
    }
    else
    {
        printf("\nThe number you entered is odd");
    }

    return 0;
}
