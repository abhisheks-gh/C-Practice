/*Program to take input from the user and return numbers next to it(upto 10) if the entered value is less than 10*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    while (a < 10){  
        printf("%d\n", a);
        a++;
    }
    return 0;
}