//Author: Shaurya Chadha
//Date: 9/11/23

//Write a program in C to print the numbers from 1 to 100 using a do while loop.
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i = 0;
    do
    {
        i++;
        printf("%d\n",i);
    }while(i>0 && i <100);
    getch();
}
