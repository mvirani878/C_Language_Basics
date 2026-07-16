/*
    Title : - WAP in C to copy content of one text file into another text file 
*/


#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *f, *f1;
    char ch;

    // Open source file in read mode
    f = fopen("Student.txt", "r");

    if (f == NULL) 
    {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open destination file in write mode
    f1 = fopen("NewStudent.txt", "w");

    if (f1 == NULL) 
    {
        printf("Error opening destination file!\n");
        fclose(f);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(f)) != EOF) 
    {
        fputc(ch, f1);
    }

    printf("File copied successfully!\n");

    // Close both files
    fclose(f);
    fclose(f1);

    return 0;
}