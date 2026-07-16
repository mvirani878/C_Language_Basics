/*
    Title : - WAP in C for Menu Driven Calculator using Function.
              Use Separate functions for add,substract,mltiply,divideQue1.
*/

#include<stdio.h>
#include<stdlib.h>

int main()

{
    int n1,n2,choice;
    do
    {
                 
        printf("\n\t\tMenu Driven Calculator");
        printf("\n\t========================================");
        printf("\n\nChoose Option");
        printf("\n1) Addition");
        printf("\n2) Substraction");
        printf("\n3) Multiplication");
        printf("\n4) Division");
        printf("\n5) Exit");

        printf("\n\t Enter choice :- ");
        scanf("%d",&choice);

        if(choice <= 4)
        {
            printf("\n\nEnter Number 1 :- ");
            scanf("%d",&n1);
            printf("Enter Number 2 :- ");
            scanf("%d",&n2);
        }
    
        switch (choice)
        {
            case 1:
                printf("\n\nYou choose Addition");
                printf("\n %d + %d = %d",n1,n2,n1+n2);
            break;

            case 2:
                printf("\n\nYou choose Substraction");
                printf("\n %d - %d = %d",n1,n2,n1-n2);
            break;
            
            case 3:
                printf("\n\nYou choose Multiplication");
                printf("\n %d * %d = %d",n1,n2,n1*n2);
            break;
            
            case 4:
                if(n2>0)
                {
                    printf("\n\nYou choose Divison");
                    printf("\n %d / %d = %d",n1,n2,n1/n2);
                }
                else
                printf("\n\nERROR : Invalid Input");
            break;
            
            case 5:
                printf("\n\nYou choose Exit");
                exit(0);
            break;
                
            default :
                printf("\n\nERROR : Invalid Choice");
                
    
        } 
        
            
    }while (choice!=5);
    

    return 0;
}