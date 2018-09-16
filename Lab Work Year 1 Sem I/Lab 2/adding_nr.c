

#include <stdio>
int main()
{
    int num1, num2,num3;
    
    num1 = 15;
    num2 = 10;
    num3 = 3;
    
    int sum1 = num1 + num2;
    int sum2 = num1 - num2;
    int sum3 = num1 * num2;
    float sum4 = num1 / num2;
    float sum5 = num1 % num3;
    
    printf("%d + %d = %d\n", num1,num2, sum1);
    printf("%d - %d = %d\n", num1,num2, sum2);
    printf("%d * %d = %d\n", num1,num2, sum3);
    printf("%d / %d = %f\n", num1,num2, sum4);
    printf("%d (%) %d = %f\n", num1,num3, sum5);
    
    return(0);
}