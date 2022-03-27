/* Program to print the multiplication of a number n in reverse order. */
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=10;i>0;i--){
        printf("The value of n is %d\n",i*n);
    }
    return 0;
}