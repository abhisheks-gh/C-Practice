// Program to print first n natural numbers
/* Input = 4 and
   Output = 1
            2
            3
            4 */
#include <stdio.h>
int main()
{
   int i = 0, n;
   printf("Enter the value of n\n");
   scanf("%d", &n);
   do
   {
      printf("The value of n is %d\n", i+1);
      i++;
   } while (i < n);
   return 0;
}