/*
    Title :- wap to display class result (85+ distinction,70 to 85 first,50 to 70 second,35 to 50pass,35>fail)baised on percentage using
             if-elseif
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float per ;

    printf("\n\t\t Display Class Result baised on Percentage ");
    printf("\n\t *************************************************** \n\n");

    printf("\n Enter a your percentages :- ");
    scanf("%f", &per);

    if (per>=85 && per<=100)
       printf("\n\t You got a DISTINCTION class with %.2f percentage \n",per);
    else if (per<85 && per >= 70)
        printf("\n\t You got a FIRST class with %.2f percentage \n",per);
    else if (per<70 && per >= 50)
        printf("\n\t You got a SECOND class with %.2f percentage \n",per);
    else if (per<50 && per >= 35)
        printf("\n\t You got a PASS class with %.2f percentage \n",per);
    else if(per<35)
        printf("\n\t You need to work more hard. You are FAIL \n");
    else
       printf("\n\t Enter valid percentages \n");
    

    return 0;
}
