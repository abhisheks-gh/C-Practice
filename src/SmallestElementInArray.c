/* Program to find smallest element in array */
#include <stdio.h>
int main()
{
    int i, j, k;
    int num[3]; /*Array declaration*/
    printf("Enter three numbers\n");
    scanf("%d", &i); /*Taking three numbers from the user*/
    scanf("%d", &j);
    scanf("%d", &k);
    if (i < j && i < k)
    {
        printf("%d is the smallest element in this array\n", i);
    }
    if (j < i && j < k)
    {
        printf("%d is the smallest element in this array\n", j);
    }
    if (k < i && k < j)
    {
        printf("%d is the smallest element in this array\n", k);
    }
    return 0;
}
