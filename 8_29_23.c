//Author: Shaurya Chadha
//Date: 29/08/23

//Write a program to find out if the student has passed a test or not.
#include <stdio.h>
#include <conio.h>

int main(void){
    int marks = 100;
    printf("Enter the student's marks: ");
    scanf("%d",&marks);
    if(marks < 40){
        printf("Your marks are less than 40 so, you have failed!");
    }
    getch();
}
