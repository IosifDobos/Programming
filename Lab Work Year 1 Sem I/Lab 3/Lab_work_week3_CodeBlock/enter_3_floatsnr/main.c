/** The program is created asking the user for three decimal numbers
    and then displaying the numbers first with 4 decimal points, second with 3 decimal
    and the third one with no decimal points.
*   Author: Iosif Dobos, C16735789 @ all rights are reserved.
*   Date: 01/10/2016
*/


#include <stdio.h>
//#include <stdlib.h>

int main()
{
    float a, b, c;

    a=0;
    b=0;
    c=0;


    printf("Please enter first decimal number: ");
    scanf("\n%f", &a);

    printf("Please enter second decimal number: ");
    scanf("\n%f", &b);

    printf("Please enter third decimal number: ");
    scanf("\n%f", &c);

    printf("You entered; %.4f, %.3f", a, b);
    printf("\nThe third number you entered %.0f", c);

    return 0;
}
