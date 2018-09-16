/*  This program is created for selecting user input into 2 groups
*   if user name input divided by 2 is even send him in group A
*   if not and the number is odd send him in group B.
*   The program will run until the user input is "exit".
*   Author: Iosif Dobos, C16725789 @ all rights are reserved.
*   Date: 14/10/2016
*/

#include <stdio.h>
//#include <stdlib.h>

int main()
{
   char name;
   int groupA;
   int groupB;
   int listA;
   int listB;
   int index = 0;
   int length;

   length = name.length;

   do
   {
        printf("Enter your name: ");
        scanf("%s", name);


        if( length % 2 == 0)
        {
             groupA++;
             listA++;
        }
        else
        {
            groupB++;
            listB++;
        }
        index++;
   } while(length == 'exit');

    printf("\nTotal number of names entered are: %s", name);
    printf("\nThe number of people in group A: %d", groupA);
    printf("\nThe list of people in group A: %d", listA);


    return 0;
}
