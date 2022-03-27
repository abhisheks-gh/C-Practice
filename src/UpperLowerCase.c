/*Program to find whether a entered character is in lower/upper case*/
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){       /*65-90 are ASCII values of A_Z*/
        printf("The entered character is in Upper Case\n");   
    }
    if(ch>=97 && ch<=122){     /*97-122 are ASCII values of a-z*/
        printf("The entered character is in Lower Case\n");
    }
    return 0;
}