/** Create a program changing if statement in switch case
*
*   Author: Iosif Dobos, C16735789 @ all rights are reserved
*   Date: 11/10/2016
*/


#include <stdio.h>
//#include <stdlib.h>

int main()
{
    // Question 1 variable
    char marriage;

    // Question 2 variable
    int no1, no2, no3;

    no1 = 0;
    no2 = 0;
    no3 = 0;

    // Question 3 variable
    int num1 = 0;
    int num2 = 0;

    // Question 5 code
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    //question 6 variable
    char numeral;

    // question 7 variable

    char week;

            // Question 1 code

    printf("Q1. Rewrite if-else using a switch statement.\n");
    printf("\nWhat is your marriage status(s, m, w, e, d): \n");
    marriage = getchar();

    switch(marriage)
    {

    case 's':
    case 'S':
    {
        printf("\nYou are single");
        break;
    }
    case 'm':
    case 'M':
    {
        printf("\nYou are married.");
        break;
    }
    case 'w':
    case 'W':
    {
        printf("\nYou are widowed.");
        break;
    }
    case 'e':
    case 'E':
    {
        printf("\nYou are separated.");
        break;
    }
    case 'd':
    case 'D':
    {
        printf("\nYou are divorced.");
        break;
    }
    default:
    {
        printf("\nSorry you press a wrong character.");
        break;
    }

    }// end witch case

                // Question two code

    printf("\nPlease enter your first number: ");
    scanf("%d", &no1);

    printf("\nPlease enter the second number: ");
    scanf("%d", &no2);

    printf("\nPlease enter the third number: ");
    scanf("%d", &no3);

    if (no1 == no2 && no1 == no3)
    {
        printf("\nThe no1, no2 and third no3 have the same values.");
    }
    else if (no1 == no3)
    {
        printf("no1 and no3 have the same value.");
    }
    else if ( no2 == no3 )
    {
        printf("\nno2 and no3 have the same value.");
    }
    else {
        printf("\n no1, no2 and no3 have different values.");
    }


        // Question three code
    printf("\nPlease enter first number: ");
    scanf("%d", &num1);

    printf("\nPlease enter second number: ");
    scanf("%d", &num2);

    if ( num1 % num2 == 0)
    {
        printf("\nThe numbers you entered are divisible each other. ");
    }
    else{
        printf("\nThe numbers you entered are not divisible each other.");
    }

    //Question five code
    printf("\nPlease enter the first side of the triangle: ");
    scanf("%d", &side1);
    printf("\nPlease enter the second side of the triangle: ");
    scanf("%d", &side2);
    printf("\nPlease enter the third side ot the triangle: ");
    scanf("%d", &side3);

    int total = side1 + side2;
    if ( total > side3)
        {
            printf("The number you`ve entered form a valid triangle.");
        }
        else{
            printf("\n The number you entered doesn`t form a valid triangle.");
        }

    // Question sixth code
    printf("\n Please enter any number(2, 4, 6, 8, 9): ");
    numeral = getchar();

    switch(numeral)
    {
    case '2':
    {
        printf("\nYou enter two.");
        break;
    }
    case '4':
    {
        printf("\nYou enter four.");
        break;
    }
    case '6':
    {
        printf("\nYou enter six.");
        break;
    }
    case '8':
    {
        printf("\nYou enter eight.");
        break;
    }
    case '9':
    {
        printf("\nYou enter nine.");
        break;
    }
    default:
    {
        printf("\nSorry you press the wrong number.\n");
    }

    }// end switch case

    //question seven code

    printf("\nPlease enter a number from 1 to 7 that represent the week day`s(1 stand for monday and 7 for sunday).");
    week = getchar();

    switch(week)
    {
    case '1':
    {
        printf("\nToday is Monday");
        break;
    }
    case '2':
    {
        printf("\nToday is Tuesday.");
        break;
    }
    case '3':
    {
        printf("\nTooday is Wenesday.");
        break;
    }
    case '4':
    {
        printf("\nToday is Thursday.");
        break;
    }
    case '5':
    {
        printf("\nToday is Friday.");
        break;
    }
    case '6':
    {
        printf("\nToday is Saturday.");
        break;
    }
    case '7':
    {
        printf("\nToday is Sunday.");
        break;
    }
    default:
    {
        printf("\nSorry the number you entered not match.");
        break;
    }

    }// end switch case

    return 0;
}// end main
