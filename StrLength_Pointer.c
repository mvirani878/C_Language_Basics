/*
    Title : - WAP in C to Find length of string using pointer without using strlen()
*/

#include<stdio.h>
#include<conio.h>


int main()
{
    char str[100];
    int count = 0;
    printf("\nEnter String :- ");
    scanf(" %[^\n]",str);

    char *p = str;
    
    while(*p != '\0')
    {
        count ++;
        p++; 
    }

    printf("\n\tSize of String = %d ",count);

    return 0;
}