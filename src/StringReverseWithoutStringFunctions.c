/* Program to reverse the string without using string function */
#include <stdio.h>

int main ()
	{
		char f[50],c;
		int i,j;
		printf("Enter the String to be Reversed = ");
		scanf("%s",f);
		for (i=0;f[i]!='\0';i++);		
		for (j=0;j<i/2;j++)				
			{
				c=f[j];
				f[j]=f[i-1-j];
				f[i-1-j]=c;
			}
		printf("String After reverse = %s ", f);
		return 0;
	}