/**
    Lab Work Week 6

    Question 2

    Program created by Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 28/02/2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Question 5
    char *p = "abcd";

    while (*p)
        putchar(*p++);

    char *text = "abcd";
    char *p1 = text;

    p1 += strlen(p1) - 1;
    while (text <= p1)
        puts (p1--);


    //Question 6
    char name[20];

    printf("Please enter your name: ");
    scanf("%s", &name);
    printf("%s ", name);

    return 0;
}
