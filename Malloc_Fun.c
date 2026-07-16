/*
    Title : - WAP in C to allocate memory using malloc() and store N numbers
*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n,i;
    int *arr;

    printf("\n\t Enter Numbers of Element :- ");
    scanf("%d",&n);

    arr = (int * )malloc(n *sizeof(int));
    printf("\n");
    if(arr == NULL)
    {
        printf("\t\n Failed to allocated Memory Block");
        return 1;
    }

    for (i = 0 ; i < n ; i++)
    {
        printf("Enter %d Number :- ",i+1);
        scanf("%d",&arr[i]);
    }


    printf("\n\n\t Elements ==> ");
    for (i = 0 ; i < n ; i++ )
    {
        printf(" [ %d ] ",arr[i]);
    }


    free(arr);

    return 0;
}