//Author: Shaurya Chadha
//Date: 28/08/23

//write a program in C to print the sum of two numbers whilst taking input of the two numbers by user.
#include <stdio.h>
#include <conio.h>

int main()

{
    int x,y,z;
    printf("Enter the two nos: ");
    scanf("%d %d",&x,&y);
    z = x + y;
    printf("Sum of two nos: %d",z); //z doesnt require a pointer because its value will already be assigned
    getch();

}