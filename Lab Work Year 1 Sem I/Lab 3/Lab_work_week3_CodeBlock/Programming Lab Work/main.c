/** This program is created asking user for three numbers
    and then display all three numbers
*   Author: Iosif Dobos, C16735789 @ all rights are reserved
*   Date: 01/10/2016
*/


#include <stdio.h>
//his#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    num1=0;
    num2=0;
    num3=0;

    printf("Please enter first number: ");
    scanf("\n%d", &num1);

    printf("Please enter the second number: ");
    scanf("\n %d", &num2);

    printf("Please enter the third nuber: ");
    scanf("\n%d", &num3);

    printf("You entered: %d, %d, %d.", num1, num2, num3);
    return 0;
}
