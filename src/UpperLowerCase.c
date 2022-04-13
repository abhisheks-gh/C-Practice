// Program to find whether a entered character is in lower / upper case

#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character\n");
    scanf("%c", &ch);
    
    // 65-90 are ASCII values for A to Z
    if(ch >= 65 && ch <= 90) {       
        printf("The entered character is in Upper Case\n");   
    }
    // 97-122 are ASCII values of a - z
    if(ch >= 97 && ch <= 122) {     
        printf("The entered character is in Lower Case\n");
    }
    
    return 0;
}
