/*
    Title :- wap to generate fibonacci series upto n terms using loop
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int t1=0,t2=1,n,i,term;

    printf("\n\t\t Fibonacci series ");
    printf("\n\t*********************************** ");
    
    printf("\n Enter number to generate fibonacci series :- ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
       printf("\n %d ",t1);
       
       term=t1+t2;
       t1=t2;
       t2=term;
    }
    
   
    
    
    return 0;
}
