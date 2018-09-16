
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first_c;
    char second_c;

    printf("Please enter first character: ");
    scanf("\n%c", &first_c);

    printf("Please enter second character: ");
    scanf("\n%c", &second_c);

    printf("\nYou entered : %c, %c.", first_c, second_c);

    return 0;
}
