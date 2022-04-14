// Program to convert temperature from degree centigrade to Fahrenheit 

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    
    printf("Enter the temperature (in Degree centigrade)\n");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32; /* Formulae to covert degree celsius into fahrenheit*/
    printf("The value of this celsius temperature in farenheit is %f\n", fahrenheit);
    
    return 0;
}
