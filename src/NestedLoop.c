/*Program to print natural numbers between 10 to 20 when the initial loop count is initialized to 0*/
#include<stdio.h>
int main(){
    int i;
    i=0;
    while(i<=20){
        if(i>=10){
            printf("The value of i is %d\n",i);
        }
        i++;
    }
    return 0;
}

/* Increment/decrement operators :-
i++  --> First print then increment
++i  --> First increment then print
i--  -->First print then decrement
--i  -->First decrement then print */
  