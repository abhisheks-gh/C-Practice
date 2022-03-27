/* Program to check whether a number is prime or not. */
#include<stdio.h>
int main(){    
int n,i,m=0,flag=0;    
printf("Enter the number to be checked :\n");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("%d is not prime\n",n);    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("%d is prime\n",n);     
return 0;  
 }   
  
