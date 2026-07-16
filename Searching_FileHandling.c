/*
    Title : - WAP in C to count number of digits in a file "Student.txt" 
*/


#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fp;
    char ch;
    int count = 0;

    // Open file in read mode
    fp = fopen("Student.txt", "r");

    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) 
    {
        if (ch >= '0' && ch <= '9') 
        {
            count++;
        }
    }

    // Close file
    fclose(fp);

    // Display result
    printf("\t Total number of digits in file:- %d\n", count);

    return 0;
}