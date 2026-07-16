/*  Title : - WAP to show demo of nested structure 
            example of an employee (Emp name, EMP ID) with address(City,Pincode) as nested structure
    Developer :- MV
    Roll no. :- 9
    Course :- FY BSc IT
*/

#include<stdio.h>
#include<conio.h>

struct Add
{
    char city[10];
    int pin;
};

struct Emp
{
    char name[10];
    int id;
    struct Add a1;
}e1;

int main()
{
    printf("\n\tEnter details of Employee");
    printf("\n\t******************************************");

    printf("\n\nEnter name :- ");
    scanf("%[^\n]",e1.name);
    printf("Enter ID :- ");
    scanf("%d",&e1.id);
    printf("Enter City :- ");
    scanf("%s",e1.a1.city);
    printf("Enter Pincode :- ");
    scanf("%d",&e1.a1.pin);

    printf("\n\t Employee Details");
    printf("\n\t ===========================================");

    printf("\n\nEmployee ID :- %d",e1.id);
    printf("\nEmployee Name :- %s",e1.name);
    printf("\nEmployee City :- %s",e1.a1.city);
    printf("\nPincode :- %d",e1.a1.pin);

    return 0;
}

