// Program to print the ASCII value table (values and associated character)

#include <stdio.h>

int main()
{
    int i;
    // Total 256 ASCII characters are there
    for (i = 0; i <= 255; i++) 
    {
        printf("ASCII value of character %c=%d\n", i, i);
    }
    return 0;
}
