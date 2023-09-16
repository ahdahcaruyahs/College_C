//Author: Shaurya Chadha
//Date: 9/1/23
//Write a program to print a students marks using if else statements.
#include <stdio.h>  
#include <conio.h>
int main(void)
{   int PERCENTAGE,MAX = 90;
    printf("Percentage: ");
    scanf("%d",&PERCENTAGE);
    if (PERCENTAGE>=MAX)
    {printf("A");}
    else if(PERCENTAGE >= 80 && PERCENTAGE <= 89)
    {printf("B");}
    else if(PERCENTAGE >= 70 && PERCENTAGE <= 79)
    {printf("C");}
    else if(PERCENTAGE >= 70 && PERCENTAGE <= 79)
    {printf("D");}
    else if(PERCENTAGE >= 70 && PERCENTAGE <= 79)
    {printf("E");}
    else
    {printf("Failed.");}
    getch();}