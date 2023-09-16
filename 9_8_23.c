//Author: Shaurya Chadha
//Date: 9/11/23

//Write a program in C to print the table of a number n.
#include <stdio.h>
#include <conio.h>

int main(void) 
{
  int INT_INPUT;
  printf("Enter an integer: ");
  scanf("%d", &INT_INPUT);

  for (int RANGE = 0; RANGE<=10; ++RANGE){
    printf("%d * %d = %d \n", INT_INPUT, RANGE, INT_INPUT * RANGE);
  }
  getch();
}
