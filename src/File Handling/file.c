//File Handling follows the concept of CURD (CREATE, UPDATE, READ & DELETE) for handling the data.
//DBMS follows the same but have many more features in addition.
#include <stdio.h>

void main()
{
    FILE *fp; //Creating a file pointer

    int roll;
    char name[30];

    fp = fopen("abc.txt", "w+"); // Syntax:- FILE *fopen( const char* filename, const char * mode );

    if (fp == NULL){
        printf("File doesn't exist"); //While opening(in read mode) if it doesn't already exist.
        return;
    }

    //Buffer:-  A region of a physical memory storage used to temporarily store data while it is being moved from one place to another.
    //However, a buffer may be used when moving data between processes within a computer.
    //The buffer is used to provide efficiency for the read operations.

    //Syntax:- int fprintf(FILE *stream, const char *format [, argument, ...])  
    fprintf(fp, "Hello File\nI am writing some data inside you\n\n" ); //Writing into file

    printf("Enter Roll : \n");
    scanf("%d", &roll);
    fprintf(fp, "Roll : %d",  roll);
    printf("Name: ");
    scanf("%s", &name);
    fprintf(fp, "\tName : %s", name);

    //Syntax:- int fscanf(FILE *stream, const char *format [, argument, ...])  

    fclose(fp); //Closing file
}