// Program to implement set operations

#include <stdio.h>
#include <stdlib.h>

void intersection_set(int arr1[11],int arr2[11])
{
    printf("Intersection of A and B = ");
    for (int i = 0; i < 11; i++)
        {
            int k = 0;
            for (int j = 0; j < 11; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    k = 1;
                    break;
                }
            }
            if (k == 1)
            printf("%d  ", arr1[i]);
        }
}

void set_difference(int arr1[11], int arr2[11])
{
    printf("Set Difference A-B = \n");
    for (int i = 0; i < 11; i++)
    {
        int k = 0;
        for (int j = 0; j < 11; j++)
        {
            if (arr1[i] == arr2[j])
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
        printf("%d  ", arr1[i]);
    }
}

void union_set(int arr1[11], int arr2[11], int arr3[22])
{
    int i;
    
    for (i = 0; i < 11; i++)
            arr3[i] = arr1[i];
    
    for (i = 0; i < 11; i++)
            arr3[11+i] = arr2[i];
        
    printf("The Union Of 2 Sets is = ");
    for (i = 0; i < 22; i++)
    {
        int k = 0;
        for (int j = i+1; j < 22; j++)
        {
            if (arr3[i] == arr3[j])
            {
                k = 1;
                break;
            }
        }
            if (k == 0)
                printf("%d  ",arr3[i]);
        }
}

int main ()
{
    int c, i;
    int arr1[11] = {1, 3, 5, 7, 9};
    int arr2[11] = {9, 4, 6, 8, 10};
    int arr3[22];
    char ch;
    system("CLS");
    printf("Choose From \n");
    printf("1       Union Set\n");
    printf("2       Intersection Set\n");
    printf("3       Set Difference\n");
    printf("Choice  = ");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
        union_set(arr1,arr2,arr3);
        break;

        case 2:
        intersection_set(arr1,arr2);
        break;

        case 3:
        set_difference(arr1,arr2);
        break;
        
        default :
        printf("!!ERROR !!\nWrong Choice");
        break;
    }
    return 0;
}
