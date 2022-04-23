// Program to find the factorial of a number using recursion

#include <stdio.h>

int factorial(int x);

int main() {
    int a;
    printf("Enter a numeber to find it's factorial\n");
    scanf("%d", &a);
    printf("The factorial of %d is %d\n", a, factorial(a));
    
    return 0;
}

int factorial(int x) {
    if (x == 1 || x == 0) 
        return 1;
    else
        return x*factorial(x-1);
}
