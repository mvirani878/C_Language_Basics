/*  
    Title : - WAP in C to create an array of structure named book to store book details like,title,author and price. 
              Input details for three books, find the most expensive and the lowest priced books, and display their information.
    Developer :- MV
    Roll no. :- 9
    Course :- FY BSc IT
*/

#include<stdio.h>
#include<conio.h>

struct Book
{
    char title[50];
    char author[20];
    int price;
}b[3];

int main()
{
    int i;
    
    for (i = 0 ; i < 3 ; i++)
    {
        printf("\n\tEnter detail of book %d",i+1);
        printf("\nBook name :- ");
        scanf(" %[^\n]",b[i].title);
        printf("Author Name :- ");
        scanf(" %[^\n]",b[i].author);
        printf("Book Price :- ");
        scanf("%d",&b[i].price);
    }

    struct Book max = b[0];
    struct Book min = b[0];

    for(int j =0;j<3;j++)
    {
        if (max.price < b[j].price )
        {
            max = b[j];
        }
    }

    for(int k =0;k<3;k++)
    {
        if (min.price > b[k].price )
        {
            min = b[k];
        }
    }

    printf("\n\n\tMost Expensive book");
    printf("\nBook Name :- %s",max.title);
    printf("\nAuthor Name :- %s",max.author);
    printf("\nBook Price :- %d",max.price);

    
    printf("\n\n\tLowest Price book");
    printf("\nBook Name :- %s",min.title);
    printf("\nAuthor Name :- %s",min.author);
    printf("\nBook Price :- %d",min.price);

    return 0;
}