//Author: Shaurya Chadha
//Date: 9/15/23

//Write a C program to print left half pyramid pattern of star
#include <stdio.h>
#include <conio.h>
  
int main()
{
    int LIMIT = 5;
    for (int i = 0; i < LIMIT; i++) {
        for (int j = 0; j < 2 * (LIMIT - i) - 1; j++) {
            printf(" ");
        }
          for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}