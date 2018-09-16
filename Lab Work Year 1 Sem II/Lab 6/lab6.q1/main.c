/**
    Lab Work Week 6 Programming

    Created by Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 28/02/2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //Question 1
    //Print out different string line and check out what respective lines does
    printf("%5s", "abcd");
    printf("%5s", "abcdef");
    printf("%-5s", "abc");
    printf("%5.2s", "abcde");
    printf("%-5.2s", "abcde");

    //Question 2
    char name[] = { 'R', 'o', 'b', 'e', 'r', 't', '\0' };

    puts( name );
    scanf("%c", &name);
    strcpy( name, "Philip");
    *(name + 5 ) = "a";
    //name = "Philip";

    //Question 3
    char *text = "some text";

    printf("%s\n", text);
    printf("%s\n", *text);
    printf("%s\n", *"more text");
    printf("%s\n", *(text + 1));
    printf("%s\n", text+1);
    printf( text );
    *( text + 4 ) = '\0'; printf("\n%s\n", text);
    printf("%c\n","text"[2]);
    printf("%s","text"+2);

    return 0;
}
