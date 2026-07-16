/*
    Title : - WAP in C to Find sum and average of array using pointer
*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int arr[100];
    int n,sum = 0;
    float avg = 0;
    int *p = arr;

    printf("\nEnter size of Array :- ");
    scanf("%d",&n);

    for(int i = 0;i<n;i++)
    {
        printf("Enter num%d = ",i+1);
        scanf("%d",&arr[i]);

        sum += *(p+i);
    }

    printf("\n\nSum = %d",sum);
    avg = (float)sum / n;
    printf("\nAverage = %.2f",avg);

    return 0;
}