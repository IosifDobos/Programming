/*
    Program write in C that use two functions one to calculate the sum
    the second function to calculate the average

    Author: Iosif Dobos, C16735789 @copyright all rights are reserved
    Date: 31.01.2017
*/
#include <stdio.h>
#include <stdlib.h>

//function prototype
void sum(int,int,int);
void average(int,int,int);

int main()
{
    int num1,num2,num3;
    num1=num2=num3=0;

    //Asking user to enter 3 numbers and calculate the sum
    printf("Please enter three numbers!!!\n");
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);

    //calling function sum()
    sum(num1,num2,num3);

    return 0;
}//end function main()
void sum(int no1,int no2, int no3)
{
    int sum = 0;
    //calculate the sum of the three numbers
    sum = no1+no2+no3;
    printf("The sum of %d + %d + %d = %d\n", no1,no2,no3,sum);
    //call function average()
    average(no1,no2,no3);

}//end function sum

//implement function average()
void average(int n1,int n2, int n3)
{
    float avg;
    //calculate average
    avg = (n1+n2+n3)/3;
    printf("The average is %.1f", avg);
}//end function average()
