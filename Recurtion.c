/*
    Title :- WAP of UDF to calculate factorial of an integer using recursion
*/


#include<stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n-1);
}

int main()
{
    int num;

    printf("\nEnter positive number to get factorial :- ");
    scanf("%d",&num);

    // ans = recu(num);

    printf("\n\n Factorial of %d => %d ",num,fact(num));

    return 0;
}