/**
 * Lab Work Week 8
 * Program written in C language using structure
 * Question 2
 *
 * Created by Iosif Dobos, C16735789 @copyright all rights are reserved
 * Date: 14/03/2017
 */

#include <stdio.h>

//define symbolic name

//delcare function prototype

//declare structure tags
struct time_rec
{
    int hours;
    int mins;
    int secs;
};

//main function
int main()
{
    struct time_rec current_time;

    //adding data to the structure
    printf("Enter the exactly time: ");

    //enter the hours
    printf("Enter the hours: ");
    scanf("%d", &current_time.hours);

    //enter the minutes
    printf("Enter the minutes: ");
    scanf("%d", &current_time.mins);

    //enter the seconds
    printf("\nEnter the second: ");
    scanf("%d", &current_time.secs);

    if ( current_time.hours > 12)
    {
        printf("\nCurrent time is: %d : %d : %d p.m", current_time.hours, current_time.mins, current_time.secs);
    }
    else
    {
        printf("\nCurrent time is: %d : %d : %d a.m", current_time.hours, current_time.mins, current_time.secs);
    }


    return 0;
}