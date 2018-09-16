/* This program display`s the name and address to the user on the screen 
* asking user for name and the address
* Author: Iosif Bogdan Dobos, C16735789.
* Date: 20.09.2016
**/

#include <stdio.h>

int main()
{
    char name[10];
    char address[10];
    
    printf("What is your name: \n");
    scanf("%s" , name);
    
    printf("\n");
    
    printf("What is your address: \n");
    scanf("%s" , address);
    
    flushall();
    
    printf("\n");
    
    printf("Today's date: 20/09/2016\n");
    
    getchar();
    
    return(0);
}