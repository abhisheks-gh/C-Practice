// Program to find value of the compostie function.

#include<stdio.h>
#include<conio.h>
#include<math.h>
#pragma warn-rvl
void main()
{ int i,j,x,value=0,m,power,a[10],b[10],value1=0;
  
  printf("\nEnter the highest power of x in g[x]:");
  scanf("%d",&i);
  
  printf("\nEnter the coefficients of powers of x in the ascending order for g[x]: ");
  for(j=0;j<=i;j++)
  {
    printf("\ncoeff of x to power %d:",j);
    scanf("%d",&a[j]);
  }
  printf("\nEnter the value of x: ");
  scanf("%d",&x);

for(m=0;m<=i;m++)
{  power=pow(x,m);
   value=value+(a[m]*power); 
}
 printf("g[x]= %d",value);
 
 printf("\nEnter the highest power of x in f[x]:");
  scanf("%d",&i);
  
  printf("\nEnter the coefficients of powers of x in the ascending order for f[x]: ");
  for(j=0;j<=i;j++)
  {
    printf("\ncoeff of x to power %d:",j);
    scanf("%d",&b[j]);
  }

for(m=0;m<=i;m++)
{  power=pow(value,m);
   value1=value1+(b[m]*power); 
}
printf("\nThe f[g(x)]= %d ",value1);
}