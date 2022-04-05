// Program to take input from the user and return numbers next to it(upto 10) if the entered value is less than 10

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    a=11;
    while (a > 10) {  
        printf("%d\n", a);
        a++;
    }
    return 0;
}

// If the condition never becomes false, the while loop keeps getting executed.
// Such a loop is known as infinite loop.
