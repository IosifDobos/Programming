/** This program is created to display a positive number
*   based in some conditions if the number is even, have it, if it is odd, multiply by three and add 1
*   Author: Iosif Dobos, C16735789 @ copyrights all rights are reserved,
*   Date: 18/10/2016
*/

#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int num, counter;
    num = 0;
    counter = 0;

    printf("Please enter initial value: ");
    scanf("%d", &num);

    printf("\nInitial value is %d\n", num);


    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num= num/2;
            printf("Next value is: %d\n", num);
        }
        else
        {
            num = (num/3) + 1;
            printf("Next value is: %d\n", num);
        }
        counter++;
    } // end while loop

        printf("\nFinal value is %d, number of steps %d", num, counter);


    return 0;

} // end main
