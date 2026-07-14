/*
    Title :- WAP in C to accept integer number from user 
             and perform erithmetic operation (+,-,*,/,%)
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    float c, d;
    printf("\n\t\t Performing Erithmetic operations on numbers inputed by user ");
    printf("\n\t *********************************************************************** \n\n");

    printf("\n Enter a value of A :- ");
    scanf("%d", &a);
    printf(" Enter a value of B :- ");
    scanf("%d", &b);

    printf("\n Addition       (A+B) = %d ", a + b);
    printf("\n Substraction   (A-B) = %d ", a - b);
    printf("\n Multiplication (A*B) = %d ", a * b);
    c = a;
    d = b;
    printf("\n Division       (A/B) = %.2f ", c / d);
    printf("\n Modulus        (A%B) = %d ", a % b);

    return 0;
}
