/** This program is created for lab 9 November 22nd,
    Pointers and Pointers/Arrays
    Q. 1 Is related to declaring an integer a character and 2 pointers,
    print the content and the address of a variable and so on

    Author: Iosif Dobos, C16735789 @copyright, all rights are reserved.
    Date: 22/11/2016
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    char char1;
    int *ptr1, *ptr3;
    char *ptr2;


    num1 = 22;
    char1 = 'D';

    ptr1 = &num1;
    ptr2 = &char1;
    ptr3 = &char1;

    printf("The content of num1 is %d, and the address of num1 is %p.", num1, ptr1);
    printf("\nThe content of char1 is %c, and the address is %p.", char1, ptr2);
    printf("\n");

    //print the content of ptr1 and ptr2.
    printf("\nThe content of ptr1 is: %d", *ptr1);
    printf("\nThe content of ptr2 is: %c", *ptr2);
    printf("\n");

    printf("\nThe content of the addresses stored in *ptr1 is: %d", *ptr1);
    printf("\nThe content of the addresses stored in *ptr2 is: %c", *ptr2);
    printf("\n");

    // print the address location of ptr1 and ptr2.
    printf("\nThe address location of ptr1 is: %p", &ptr1);
    printf("\nThe address location of ptr2 is: %p", &ptr2);
    printf("\n");

    printf("\nThe address of ptr3 is: %p", &ptr3);
    printf("\nThe ptr3 contains %c", *ptr3);
    //If I use a %d to print the content of the address stored in ptr3 the compiler give me an warning: assignment incompatible pointer type
    // and when I run the code its just give me random data.
    //but if I use %c same warning but when I run the program its give me the content of char2

    return 0;
}
