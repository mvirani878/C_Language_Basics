/*
    Title :- wap to display result
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int m1, m2, m3, m4, m5, t;
    float per;

    printf("\n\t\t\t Result ");
    printf("\n\t************************************");

    printf("\n\n Enter marks of 101 :- ");
    scanf("%d", &m1);
    printf(" Enter marks of 102 :- ");
    scanf("%d", &m2);
    printf(" Enter marks of 103 :- ");
    scanf("%d", &m3);
    printf(" Enter marks of 104 :- ");
    scanf("%d", &m4);
    printf(" Enter marks of 105 :- ");
    scanf("%d", &m5);

     if (m1 <= 100 && m2 <= 100 && m3 <= 100 && m4 <= 100 && m5 <= 100)
    {
         t = m1 + m2 + m3 + m4 + m5;
         printf("\n\t Your total marks = %d ", t);

        per = t / 5;
        printf("\n\n\t Your percentage = %.2f \n", per);

   
        if (per >= 85 && per <= 100)
            printf("\n\t You got a DISTINCTION class with %.2f percentage \n", per);
        else if (per < 85 && per >= 70)
            printf("\n\t You got a FIRST class with %.2f percentage \n", per);
        else if (per < 70 && per >= 50)
            printf("\n\t You got a SECOND class with %.2f percentage \n", per);
        else if (per < 50 && per >= 35)
            printf("\n\t You got a PASS class with %.2f percentage \n", per);
        else if (per < 35)
            printf("\n\t You need to work more hard. You are FAIL \n");
        else
            printf("\n\t Enter valid marks \n");
    }
    else
        printf("\n\t Enter marks properly ");
    return 0;
}