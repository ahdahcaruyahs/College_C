//Author: Shaurya Chadha
//Date: 9/15/23

//Write a C program to print right side of a pyramid pattern of star
#include <stdio.h>
  
int main(void)
{
    int MAX = 5;
  
    for (int i = 0; i < MAX; i++) {
          for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}
