// Program to find the smallest element in an array

#include <stdio.h>

int main()
{
    int i, j, k;
    int num[3]; 
    
    printf("Enter three numbers\n");
    scanf("%d", &i); 
    scanf("%d", &j);
    scanf("%d", &k);
    
    if (i < j && i < k)
        printf("%d is the smallest element in this array\n", i);
    
    if (j < i && j < k)
        printf("%d is the smallest element in this array\n", j);
    
    if (k < i && k < j)
        printf("%d is the smallest element in this array\n", k);
        
    return 0;
}
