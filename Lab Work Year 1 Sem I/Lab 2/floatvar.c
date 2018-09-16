/** This program is created to calculate and display the average of a floating numbers
*     Author @ Iosif Dobos, C16735789
*     Date: 27/09/2016
*/

#include <stdio>
int main() 
{
     float var1, var2, var3, var4, var5, var6, var7, var8, var9, var10;
     float sum;
    
    var1 = 1.0;
    var2 = 1.2;
    var3 = 1.3;
    var4 = 1.4;
    var5 = 1.5;
    var6 = 1.6;
    var7 = 1.7;
    var8 = 1.8;
    var9 = 1.9;
    var10 = 2.0;
    sum = var1+var2+var3+var4+var5+var6+var7+var8+var9+var10;
    
    printf("%f, + %f, + %f, + &f, + &f, + %f, + %f + %f + %f + %f\n", var1, var2, var3, var4, var5, var6, var7, var8, var9, var10);
    printf("The sum is %f", sum);
    return(0);
}