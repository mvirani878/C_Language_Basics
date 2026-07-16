/*
    Title : - WAP in C to pass a Student Structure to function and display Studentd Details.
*/

#include<stdio.h>

struct Stud
{
    char name[10];
    int rn;
    char course[20];
};

void StudInfo(struct Stud s1)
{

    printf("\n\n\t Student's Details");
    printf("\nName :- %s",s1.name);
    printf("\nRoll No. :- %d",s1.rn);
    printf("\nCourse Name :- %s",s1.course);

}

int main()
{
    struct Stud s1;

    printf("\n\t\t Enter details of Student");
    printf("\n\t=============================================");
    printf("\nEnter Name :- ");
    scanf(" %[^\n]",s1.name);
    printf("Enter Roll No. :- ");
    scanf(" %d",&s1.rn);
    printf("Enter Course Name :- ");
    scanf(" %[^\n]",s1.course);
    
    StudInfo(s1);
    return 0;
}