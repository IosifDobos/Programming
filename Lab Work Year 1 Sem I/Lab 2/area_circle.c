/** This program is created to calculate the the area of circle
* Date: 27/09/2016
*/

#include <stdio>
int main()
{
    float radius = 4.8;
    float pi = 3.14;
    
    float area = pi * (radius * radius);
    
    printf("radius = %f, pi = %f\n", radius, pi);
    printf("Area of the circle = %f\n", area);
    
    return(0);
}