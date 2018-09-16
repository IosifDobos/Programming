/*Program to illustrate errors in a C program.
* The program display the variables on the screen each variable having a different value
* Author: Iosif Bogdan Dobos, C16735789.
* Date: 20.09.2016
**/

#include <stdio.h>

int main()
{
 
     int num1; 
     int num2;
     float num3;
        
     num1 = 400;
     num2 = 600;
    
     printf("The value of num1 is %d" , num1);
     printf(" num2 is %d" , num2);
    
    return(0);
}