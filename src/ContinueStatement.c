/* A program showing the use of continue statement */
#include <stdio.h>
int main()
{
    int skip = 5;
    int i = 0;
    while (i < 10){
        i++;
        if(i!=skip){
            continue;
        }
        else{
            printf("The value of i is %d\n",i);
        }
    }
    return 0;
    
}
// IMPORTANT POINTS :-
/* Sometimes the name of the variable might not indicate the behaviour of the program. */
/* Break statement completely exits the loop. */
/* Continue statement skips the particular iteration of the loop. */
