/*
    Title :- wap to find factorial of number using while loop
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1,n,mul=1;
    
    printf("\n\t  Find Factorial of number ");
    printf("\n\t ************************************");

    printf("\n Enter number to find factorial :- ");
    scanf("%d",&n);
    
    while(i<=n)
    {
         mul*=i;
         i++;
    }
    
    printf("\n\n\t Factorial of %d numbers = %d ",n,mul);
    
    
    return 0;
}
