/** This program is created asking user to enter a number between 1-5
*   and display all the number from 1-20 that are evenly divisible
*   Author: Iosif Dobos, C16735789 @ copyright all right are reserved
*   Date: 18/10/2016
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number,i, counter;
   number = i= 0;
   counter = 0;

   printf("Please enter a number between 1 to 5: ");
   scanf("%d", &number);

   while ( number != 0 )
   {
       for( i=0; i)
       if ( number % 2 == 0)
       {
        printf("The numbers evenly divisible are: %d\n", number);
        counter++;
       }
       else {
        printf("\n");
       }
   }


   return 0;
}
