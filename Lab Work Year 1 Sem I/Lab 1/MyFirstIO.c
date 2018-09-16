/* This program will display a integer, a float, and char(character)
* giving to each variable a unique value which will be display on the screen
* Author @ Iosif Bogdan Dobos, C16735789
* Date: 20/09/2016
**/

#include <stdio.h>

int main() {
    
    int num1; // declare an integer variabe
    float num2; // declare a float variable
    char num3; // declare a char variable
    
    num1 = 20; // setting a value for the num1
    num2 = 50.25; //setting a value for the num2
    num3 = 'C'; // setting a charcater for num3
    
    printf("num1 contains %d\n" , num1);
    printf("num2 contains %f\n" , num2);
    printf("num3 contains %c\n" , num3);
    
    return(0);
}