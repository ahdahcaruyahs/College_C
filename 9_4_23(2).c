//Author: Shaurya Chadha
//Date: 9/4/23

//Write a program in C to check which number is the largest using if else loops
#include <stdio.h>
#include <conio.h>
int main(void)
{
    int NUM_1,NUM_2,NUM_3;
    printf("Please enter the values(x y z): ");
    scanf("%d %d %d",&NUM_1,&NUM_2,&NUM_3);
    printf("\nYour numbers are: %d %d %d",NUM_1,NUM_2,NUM_3);
    if (NUM_1>NUM_2 && NUM_1 > NUM_3)
    {
        printf("The biggest number is: %d",NUM_1);
 
    }
    else if (NUM_2>NUM_1 && NUM_2 > NUM_3)
    {
        printf("The biggest number is: %d",NUM_2);
    }  
    else
    {
        printf("The biggest number is: %d",NUM_3);
    }
    getch();
}
