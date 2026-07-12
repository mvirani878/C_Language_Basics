/*
    Title :- wap toperform addition and substraction on 2-d matrix
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int m[3][3], n[3][3], i, j, add[3][3], sub[3][3];

    printf("\t Enter data of MATRIX-A \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value of A[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\t Enter data of MATRIX-B \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value of B[%d][%d] = ", i, j);
            scanf("%d", &n[i][j]);
        }
    }

    printf("\t Printing of Matrix-A \n");

    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", m[j][i]);
        }
        printf("\n");
    }

    printf("\t Printing of Matrix-B \n");

    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", n[j][i]);
        }
        printf("\n");
    }

    printf("\t Printing ADDITION of Matrix A and B \n");

    for (i = 0; i < 3; i++)
    {
        
        for (j = 0; j < 3; j++)
        {
            add[i][j] = m[i][j] + n[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", add[i][j]);
        }
        printf("\n");
    }

    printf("\t Printing SUBSTRACTION of Matrix A and B \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sub[i][j] = m[i][j] - n[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}