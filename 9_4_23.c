//Author: Shaurya Chadha
//Date: 9/4/23

//Write a program in C to print the day today using switch case
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int x;
    printf("x(int): ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Case 1 has been executed");
        printf("\nMonday ");
        break;

        case 2:
        printf("Case 2 has beene execeuted");
        printf("\nTuesday ");
        case 3:
        printf("Case 3 has beene execeuted");
        printf("\nWednesday ");
        break;

        case 4:
        printf("Case 3 has beene execeuted");
        printf("\nThursday ");
        break;

        case 5:
        printf("Case 3 has beene execeuted");
        printf("\nFriday ");
        break;

        case 6:
        printf("Case 3 has beene execeuted");
        printf("\nSaturday ");
        break;

        case 7:
        printf("Case 3 has beene execeuted");
        printf("\nSunday ");
        break;

        default:
        printf("Default has been executed");
        printf("\nError!");
    }
    printf("\nOutisde the switch case block");
    getch();
}