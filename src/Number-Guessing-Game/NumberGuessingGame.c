#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // We can declare a variable to hold the current time from the system using: 
  // time_t now = time(0);
  int num, guess, no_of_guesses = 1; 

  // The rand() function in C++ is used to generate random numbers;
  // it will generate the same number every time we run the program.
  // The srand() function sets the initial point for generating the pseudo-random numbers.

  // num=rand(); can generate any random number.
  // So, to generate a random number b/w 1 & 100 num=rand()%100+1;*/
  // printf("The random number generated is %d\n",num);

  srand(time(0));
  num = rand() % 100 + 1; 

  // Keep running the loop until the number is guessed.
  do
  {
    printf("Guess the number the between 1 and 100\n");
    scanf("%d", &guess);
    if (guess > num)
    {
      printf("Lower number please!\n");
    }
    else if (guess < num)
    {
      printf("Higher number please!\n");
    }
    else
    {
      printf("You guessed it in %d attempts\n", no_of_guesses);
    }
    no_of_guesses++;
  } while (guess != num);

  return 0;
}
