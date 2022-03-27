// Program to calculate value of polynomial for variable x.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warn-rvl
void main()
{ 
  int i,j,x,value=0,m,power,a[10];
  system("CLS");
  printf("\nEnter the highest power of x :");
  scanf("%d",&i);
  
  printf("\nEnter the coefficients of powers of x in the ascending order: ");
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
printf("The the value of the entered polynomial for x = %d is : %d",x,value);

}