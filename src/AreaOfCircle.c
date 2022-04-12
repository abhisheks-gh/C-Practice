// Program to Calculate Area and Circumference of Circle.

#include <stdio.h>

int main()
{
    float pi, radius, area, circumference;
    printf("Enter the radius\n"); 
    scanf("%f", &radius);

    pi = 3.14;
    area = pi * radius * radius;     
    circumference = 2 * pi * radius;

    printf("The area of the circle is %f\n", area);
    printf("The circumference of the circle is %f\n", circumference);
  
    return 0;
}
