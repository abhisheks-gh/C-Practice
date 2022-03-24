// Program to print all ASCII Value Table (values and associated character)

#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 255; i++) /* Total 256 ASCII characters are there */
    {
        printf("ASCII value of character %c=%d\n", i, i);
    }
    return 0;
}
