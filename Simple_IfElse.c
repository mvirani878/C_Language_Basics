/*
    Title :- wap to check given number is odd or even using if-else
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a;

    printf("\n\t\t Check given number is ODD or EVEN using IF-ELSE");
    printf("\n\t *********************************************************************** \n\n");
    
    printf("\n Enter a value of A :- ");
    scanf("%d",&a);
    
    if(a%2==0)
    {
        printf("\n\n \t %d number is EVEN ",a);   
    }

    else
    {
        printf("\n\n \t %d number is ODD ",a);      
    }
    
    
    return 0;
}
