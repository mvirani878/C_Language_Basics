/*
    Title :- WAP in C to swap 2 numbers using pointer
*/

#include<stdio.h>
#include<conio.h>

int main()

{

    int num1,num2,temp;

    printf("Enter num1 = ");
    scanf("%d",&num1);
    printf("Enter num2 = ");
    scanf("%d",&num2);

    int *n1 = &num1;
    int *n2 = &num2;

    printf("\n\t Befor swapping =>  A = %d   B = %d",num1,num2);

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    printf("\n\t After swapping =>  A = %d   B = %d ",num1,num2);

    return 0;
}