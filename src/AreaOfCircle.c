/* Program to Calculate Area and Circumference of Circle. */

#include <stdio.h>

int main()
{
    float pi, radius, area, circumference;
    printf("Enter the radius\n"); /*Taking input from the user*/
    scanf("%f", &radius);

    pi = 3.14;
    area = pi * radius * radius;     //Formulae for area of circle
    circumference = 2 * pi * radius; //Formulae for circumference of circle

    printf("The area of the circle is %f\n", area);
    printf("The circumference of the circle is %f\n", circumference);
  
    return 0;
}
     
