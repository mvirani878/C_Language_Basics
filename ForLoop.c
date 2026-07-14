/*
    Title :- wap to print the sum of first 10 natural numbers using for loop
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;

    printf("\n\t Sum of first 10 natural numbers ");
    printf("\n\t************************************** ");
    
    printf("\n Enter number to do sum :- ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
         sum+=i;
    }
    
    printf("\n\n\t Sum of %d number = %d ",n,sum);
    
    
    return 0;
}
