
/*
    Title :- wap to check wheter inputed year is leap or not
*/

#include <stdio.h>
#include <conio.h>

int main()
{

    int year;

    printf("\n Enter year :- ");
    scanf("%d", &year);

    if (year % 4 == 0 && year / 100 != 0)
        printf("\n\t %d is a leap year", year);
    else
        printf("\n\t %d is not a leap year", year);

    return 0;
}