/*
    Title :- wap to sort array in ascending order
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j, n,tem, arr[51];

    printf("\n\t Sorting array in ascending order  ");
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

     for (i = 0; i < n - 1; i++) 
     {
      for ( j = 0; j < n - i - 1; j++)
       {
        if (arr[j] > arr[j + 1])
         {
            tem = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tem;
         }
       }
     }
     
     printf("\n\n Array in ascending order \n\t");
     for(i=0;i<n;i++)
     {
        printf(" [%d] ",arr[i]);
     }
    return 0;
}
