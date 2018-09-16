/*  Program that find if user year input is a leap year or NOT

    In the Gregorian calendar 3 criteria must be taken into account
    to identify leap years:

    -The year is evenly divisible by 4;
    -If the year can be evenly divided by 100, it is not a leap year, unless;
    -The year is also evenly divisible by 400, then it is a leap year;
    -This mean that 2000 and 2400 are leap years, while 1800, 1900, 2100,
    2200, 2300, and 2500 are not leap years.

    The year 2000 was somewhat special as it was the
    first instance when the third criterion was used in
    most parts of the world since the transition from the
    Julian to the Gregorian Calendar.

    Author: Iosif Dobos, C16735789, @copyright, all right are reserved
    Date: 18/10/2016

*/

#include <stdio.h>
//#include <stdlib.h>

int main()
{
    //declaring the variable
    int year;

    //asking user to enter a year to find out if it is a leap year or not
    printf("Enter a year to find out if it is a leap year or not: ");
    scanf("%d", &year);

        if ( year%400==0)   //creating if statement setting that the condition is true print the statement
        {
            printf("\nThe year %d is a leap year.", year);
        }
        else if (year%100==0)
        {
            printf("\nThe year %d is NOT a leap year", year);
        }
        else if (year%4==0)
        {
            printf("\nThe year %d is a leap year", year);
        }
        else
        {
            printf("\nThe year %d is NOT a leap year", year);
        }

    return 0;
}
