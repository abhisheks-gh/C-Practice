// Program to calculate income tax

#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("Enter your income\n"); /*There is no tax below 2.5 lakhs*/
    scanf("%f",&income);
    
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
        printf("You have to pay a tax of %f\n", tax);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
        printf("You have to pay a tax of %f\n", tax);
    }
    if (income > 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
        printf("You have to pay a tax of %f\n", tax);
    }
    return 0;
}
