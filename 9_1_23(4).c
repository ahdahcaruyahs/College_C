//Author: Shaurya Chadha
//Date: 9/1/23

//Write a program in C to find out if a student is eligible for admission or not.
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int PERCENTAGE;
    int MAX = 50;
    printf("Percentage: ");
    scanf("%d",&PERCENTAGE);
    if (PERCENTAGE>=MAX)
    {
        printf("Eligible.");
    }
    else
    {
        printf("Not eligible.");
    }
    getch();
    

}