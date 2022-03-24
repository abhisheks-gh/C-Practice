/* A program showing the use of break statement */
#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("The value of i is %d\n",i);
        if(i==0){
            break;
        }
        i++;
    }while(i<10);
    return 0;    
}