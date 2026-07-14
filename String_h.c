/*
    Title :- wap to accept string and display it's length ,reverse it and number of vowels
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{
    char str[100], rev[100],ch;
    int leng, i, vowel = 0;

    printf("\n\n Enter string :- ");
    gets(str); 

    leng = strlen(str);
    printf("\n\n\t String length = %d", leng);

    // Counting vowels
    for(i = 0; i < strlen(str); i++)
    {
        ch = str[i];
           if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
              ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
             {
                vowel++;
             }
    }
    printf("\n\n\t Number of vowels = %d", vowel);

    // String reverse
    for(i = 0; i < leng; i++)
    {
        rev[i] = str[leng - 1 - i];
    }
    rev[leng] = '\0';
    printf("\n\n\t Reverse string = %s", rev);

    
    return 0;
}
