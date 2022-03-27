/* Program to convert temperature from degree centigrade to Fahrenheit */
#include <stdio.h>
int main()
{
    float celcius, farenheit;
    printf("Enter the temperature (in Degree centigrade)\n");
    scanf("%f", &celcius);
    farenheit = (celcius * 9 / 5) + 32; /* Formulae to covert degree celcius into farenheit*/
    printf("The value of this celcius temperature in farenheit is %f\n", farenheit);
    return 0;
}
