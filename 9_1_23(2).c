//Author: Shaurya Chadha
//Date: 9/1/23

//Write a program in C to print if the given triangle is Equilateral, Isosceles or Scalene.
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a, b, c;
    printf("Values (x y z): ");
    scanf("%d%d%d", &a, &b, &c); 
    if(a==b && b==c){
        printf("Equilateral triangle.");}
    else if(a==b || a==c || b==c){
        printf("Isosceles triangle.");}
    else{
        printf("Scalene triangle.");}
    getch();
}