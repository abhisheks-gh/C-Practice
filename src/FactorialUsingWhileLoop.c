/* To find the factorial of a program using while loop */
#include<stdio.h>
int main(){
    int i=1,n,factorial=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(i<=n){
        factorial*=i;   //factorial*=i is same as factorial=factorial*i
        i++;
    }
    printf("The factorial of %d is %d\n",n,factorial);
    return 0; 
}