/** This program is created to display the youngest and the oldest, and the average of all the people entered
*   Author: Iosif Dobos, C16735789, @copyright 2016.
*   Date: 18/10/2016
*/

#include <stdio.h>
//#include <stdlib.h>
//#define NAME 20

int main()
{
    int ages[5];
    int sum, i;
    int youngest, oldest;
    float average;

    sum=i=youngest=oldest=0;
    average=0;

    printf("Please enter the age of 5 people\n");
        for(i=0; i<5; i++)
        {
            scanf("%d", &ages[i]);
            sum=sum+ages[i];
        }
        youngest=ages[0];
        oldest=ages[0];

        //Find the youngest and oldest

        for(i=0; i<5; i++)
        {
            if(youngest>ages[i])
            {
                youngest=ages[i];
            }
            if(oldest<ages[i])
            {
                oldest=ages[i];
            }
        }
        printf("\nYoungest is %d", youngest);
        printf("\nOldest is %d", oldest);

        average=(float)sum/5;

        printf("\nAverage is %.2f",average);

    return 0;
}
