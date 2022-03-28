// Program to find the factorial of a number using for loop. 

#include<stdio.h>

int main() 
{
    int i,n,factorial=1;
    printf("Enter the number\n");
    scanf("%d",&n);         
    for(i=1;i<=n;i++) { 
        // factorial *= i is same as factorial = factorial*i
        factorial*=i;       
    }   
    
    printf("The factorial of %d is %d\n",n,factorial);
    
    return 0;
}

// Factorial of a number n is n*(n-1)*(n-2)*.....*3*2*1
// Therefore the factorial of a number 5 will be 5*4*3*2*1 = 120
