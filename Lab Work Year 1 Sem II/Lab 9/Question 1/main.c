/**
 *  Programming week 9 21.March.2017 Qustion 1
 *  Using structure write 2 statements that assign 2 values to 2 variables an integer and a float
 *  using the.operator, the ->operator and the *operator
 *
 *
 *  Program created by Iosif Dobos, C16735789 @copyright, all right are reserved
 *  Date: 21/03/2017
 *
 *  Compiler used: JetBrains CLion 2016.3.4
 */

#include <stdio.h>

//declare symbolic names


//create the structure templates
struct data
{
    int a;
    float b;
};

//function prototype

//main function
int main()
{
    struct data var;
    struct data *p, *p1;

    var.a = 1;
    var.b = 2.3;

    p = &var;
    p1 = &var;

    //part (a) using .operator
    printf("The value of |a| is: %d", var.a);
    printf("\nThe value of |b| is: %.1f", var.b);

    //part (b) using ->operator
    printf("\n|a| is : %d", p->a);
    printf("\n|b| is : %.1f", p->b);

    //part (c) using *operator
    printf("\n|a| is : %d", (*p1).a);
    printf("\n|b| is : %.1f", (*p1).b);

    return 0;
}