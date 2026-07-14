/*
    Title          :- wap to find largest among three numbers using nested if else
*/

#include <stdio.h>
#include <conio.h>

int main()
{
  int a, b, c;

  printf("\n\t\t Find LARGEST among three numbers using nested if else");
  printf("\n\t *********************************************************************** \n\n");

  printf("\n Enter a value of A :- ");
  scanf("%d", &a);
  printf(" Enter a value of B :- ");
  scanf("%d", &b);
  printf(" Enter a value of C :- ");
  scanf("%d", &c);

  if (a > b)
  {
    if (a > c)
    {
      printf("\n\n \t A is largest with value %d ", a);
    }
    else
    {
      printf("\n\n \t C is largest with value %d ", c);
    }
  }

  else
  {
    if (b > c)
    {
      printf("\n\n \t B is largest with value %d ", b);
    }
    else
    {
      printf("\n\n \t C is largest with value %d ", c);
    }
  }

  return 0;
}
