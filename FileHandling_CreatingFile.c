/*
    Title : - WAP in C to Create file Student.txt and write some data in it
*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE *f;

    f = fopen("Student.txt","w");

    if(f == NULL)
    {
        printf("\n\t ERROR in Create file");
    }

    fprintf(f,"Hello");
    fprintf(f,"\nI am M V");
    fprintf(f,"\nThis is Program no.12 of Practical Journal");
    fprintf(f,"\nIn which I have performed File Operations");
    fprintf(f,"\nLike creating and writing some data");

    fclose(f);

    return 0;
}