// Program to find the sum of natural numbers using recursion 

#include <stdio.h>

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    sum += i;
  
    return sum;
}

int main()
{
    int n;
    printf("\nEnter the number : \n");
    scanf("%d", &n);
  
    printf("Sum of first %d natural numbers is %d\n", n, sum(n));
  
    return 0;
}
