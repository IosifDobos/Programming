/** This progam is creating asking user for the first name, surname and age
    and then displaying the full name and creating a email address
    Author: Iosif Dobos, C16735789 @ all right are reserved
    Date: 01/10/2016
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char f_name[20];
    char s_name[20];
    int age;

    printf("Hello!11\n");

    printf("\nWhat is your first name: ");
    scanf("%s", f_name);

    printf("\nWhat is your surname: ");
    scanf("%s", s_name);

    printf("\nWhat is your age:");
    scanf("%d", &age);


    printf("\nYour full name is: %s %s\n", f_name, s_name);
    //printf("\nWhat is your age", a);
    printf("\nHere is your email address: %s.%s%d@mydit.ie\n",f_name, s_name, age);

    return 0;
}
