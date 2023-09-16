//Author: Shaurya Chadha
//Date: 9/4/23

//Write a program in C to find out of a number is odd.
#include <stdio.h>
#include <conio.h>

int main(void) {
    int NUM;
    printf("Enter an integer: ");
    scanf("%d", &NUM);
    if(NUM % 2 == 0)
        printf("%d is even.", NUM);
    //else
   //   printf("%d is odd.", NUM);
    getch();}