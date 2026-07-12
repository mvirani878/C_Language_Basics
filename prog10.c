/*
    Title :- wap to check whether the given number is palindrome 
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,orgn,rev=0,rem;

    printf("\n\t Given number is Palindrome or not ");
    printf("\n\t****************************************** ");
    
    printf("\n Enter number :- ");
    scanf("%d",&n);
    
    orgn=n;
    
    while(n!=0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;

    }

     if (orgn == rev)
        printf("\n\n\t%d is a Palindrome number.", orgn);
    else
        printf("\n\n\t%d is not a Palindrome number.", orgn);

    
    
    return 0;
}