// Program to generate a random number.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() 
{
  // We can declare a variable to hold the current time from the system using: time_t now = time(0);

    int num; 
  // The rand() function in C is used to generate random numbers;
  // it will generate the same number every time we run the program.
  // The srand() function sets the initial point for generating the pseudo-random numbers.  

    srand(time(0));

  // num=rand(); can generate any random number.
  // So, to generate a random number b/w 1 & 100 num=rand() %100 + 1;
    num=rand()%100+1; 
                    
    printf("The random number generated is %d\n",num);

    return 0;
}
