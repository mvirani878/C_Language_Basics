/*
    Title : - WAP in C to Read and Display content of file and also Append new data to existing file
*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *f;
    char c;

    f = fopen("Student.txt","r");

    if(f == NULL)
    {
        printf("\n\t ERROR in Reading file");
    }

    else
    {
        printf("\n\t\tCurrent file content");
        printf("\n\t=======================================\n");

        while((c = fgetc(f)) != EOF)
        {
            putchar(c);
        }

        fclose(f);
    }

    
    f = fopen("Student.txt", "a");

    if (f == NULL) 
    {
        printf("\nUnable to open file for appending!\n");
        return 1;
    }

    fprintf(f,"\n\n\tNew Data Appending");
    fprintf(f,"\n Good Morning");

    
    
    fclose(f);

    printf("\n\n\n\tData appended successfully.\n");

    
    return 0;
}