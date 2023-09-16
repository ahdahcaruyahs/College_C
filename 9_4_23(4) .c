//Author: Shaurya Chadha
//Date: 9/4/23

//Write a program in C to swap the value of the first two numbers out of three numbers
// without using a third variable
#include <stdio.h>
#include <conio.h>

int main(void)
{   int first,second,third;
    printf("Please enter the integers(x y z): ");
    scanf("%d %d %d",&first,&second,&third);
    printf("\n The values BEFORE swapping the first two numbers are: %d %d %d",first,second,third);
    first = first + second;
    second = first - second;
    first = first - second;
    printf("\n The values AFTER swapping the first two numbers are: %d %d %d",first,second,third);
    getch();}
