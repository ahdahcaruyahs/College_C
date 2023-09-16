//Author: Shaurya Chadha
//Date: 9/5/23

//Write a program in C to print the sum of first hundred numbers in C
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int x = 0;
    int y;

    for(x;x<=100;x++)
    {
        //printf("%d\n",x);
        y = y + x;
        printf("%d\n",y); 
        
    }
    getch();
}
