/*
    Title :- WAP in C to show a demo of call by value and call by refrence for swapping 2 numbers
*/

#include<stdio.h>
#include<conio.h>

int byvalue(int a, int b)
{   
    int temp=0;

    printf("\n\n\t In (UDF) Call by VALUE ");
    printf("\n\t======================== ");
    printf("\nBefore swapping => A = %d   B = %d",a,b);
    
    temp = a;
    a = b;
    b = temp;

    printf("\n\nAfter swapping => A = %d   B = %d",a,b);
}

int byref(int *a, int *b)
{   
    int temp=0;

    printf("\n\n\t In (UDF) Call by REFERENCE ");
    printf("\n\t============================= ");
    printf("\nBefore swapping => A = %d   B = %d",*a,*b);
    
    temp = *a;
    *a = *b;
    *b = temp;

    printf("\nAfter swapping => A = %d   B = %d",*a,*b);
}

int main()

{

    int num1=0,num2=0;

    printf("Enter num1 = ");
    scanf("%d",&num1);
    printf("Enter num2 = ");
    scanf("%d",&num2);

    printf("\n\n\t\t\t In MAIN() Before Call by Value ->> Num1 = %d   Num2 = %d ",num1,num2);
    printf("\n\t********************************************************************************************");
    byvalue(num1,num2);
    printf("\n\n\t-----> In MAIN() After Call by Value ->>  Num1 = %d   Num2 = %d ",num1,num2);


    printf("\n\n\t\t\t In MAIN() Before Call by REFERENCE ->> Num1 = %d   Num2 = %d ",num1,num2);
    printf("\n\t********************************************************************************************");
    byref(&num1,&num2);
    printf("\n\n\t-----> In MAIN() After Call by REFERENCE ->>  Num1 = %d   Num2 = %d ",num1,num2);

    return 0;
}