/*
    Title :- wap to find the largest and smallest element in an array of n integers
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, arr[51], max, min = 0;

    printf("\n\t Find the LARGEST and SMALLEST element in an array  ");
    printf("\n\t********************************************************");

    printf("\n\n Enter the size of ARRAY (<=50):- ");
    scanf("%d", &n);

    printf("\n\t Enter the elements of ARRAY \n\n ");

    for (i = 0; i < n; i++)
    {
        printf("Enter data of A[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n\t Data you have entered in  ARRAY \n\n ");

    for (i = 0; i < n; i++)
    {
        printf(" A[%d]=%d ", i, arr[i]);
    }

    // largest element of array

    max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("\n\n\n\t Largest element of an array is %d ", max);

    // smallest element of array

    min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("\n\t Smallest element of an array is %d ", min);

    return 0;
}
