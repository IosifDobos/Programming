/** This program aim to display the sum of the integers 1 to 5
*     Author @Iosif Dobos, C16735789
*     Date: 27/09/2016
*/
#include <stdio>

int main()
{
    int num1, num2, num3, num4, num5;
    int sum;
    
    num1 = 1;
    num2 = 2;
    num3 = 3;
    num4 = 4;
    num5 = 5;
    
    sum = num1 + num2 + num3 + num4 + num5;
  
    printf("num1 is %d, num2 is %d, num3 is %d, num4 is %d, num5 is %d\n", num1, num2, num3, num4, num5);
    printf("sum is %d\n", sum);


    //for (  num1 = 1; num1 <= num2 ; num1++)
        //{
        //        printf("num1 + num2 = %d\n", num1, num2);
       // }    
    return(0);
    
}