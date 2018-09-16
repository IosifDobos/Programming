/** Program built to calculate the volume and the surface area
      Author: @ Iosif Dobos, C16735789
      Date: 27/09/2016
*/

#include <stdio>
int main()
{
    int height;
    float length, width, volume;
    float surface_area;
    
    height = 10;
    length = 11.5;
    width = 2.5;
    volume = height * length * width;
    surface_area = 2*(length*width)+ 2*(length*height)+ 2*(width*height);
    
    printf("volume = %f\n", volume);
    printf("surface area = %f\n", surface_area);
    
    return(0);
}