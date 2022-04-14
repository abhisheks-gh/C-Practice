// Program to calculate simple interest

#include <stdio.h>

int main()
{
    float p, t, r, si;
    
    printf("Enter Principle amount\n");
    scanf("%f", &p);
    printf("Enter time for which loan is taken\n");
    scanf("%f", &t);
    printf("Enter rate of interest\n");
    scanf("%f", &r);
    
    // Formulae for Simple Interest
    si = (p * r * t ) / 100;
    
    printf("%f/n", si);
    
    return 0;
}
