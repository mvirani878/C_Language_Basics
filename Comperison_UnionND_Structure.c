/*
    Title : - WAP to show size comperison used by a structure and union  for student 
    with (sname,scourse,sid,gender)
*/


#include<stdio.h>
#include<conio.h>


struct Student
{
    char sname[10];
    char scourse[10];
    int sid;
    char gender;
}s1;

union Stud
{
    char sname[10];
    char scourse[10];
    int sid;
    char gender;
}stud1;

int main()
{
    printf("\n\t Comparing Size of Srructure and Union\n");
    printf("\t=*=*=*=*=*=*=*=*=*==*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
    printf("\nSize of Structure :- %d",sizeof(s1));
    
    printf("\nSize of Union :- %d \n",sizeof(stud1));

    return 0;
}                                   