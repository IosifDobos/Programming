#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;

    num1 = 0;
    num2 = 0;
    sum = 0;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Plese enter an integer number: ");
    scanf("%d", ptr1);
    printf("\nPlease enter the second integer number: ");
    scanf("%d", ptr2);

    sum = *ptr1 + *ptr2;
    printf("\nThe sum of the two integers are: %d",sum);

    return 0;
}
