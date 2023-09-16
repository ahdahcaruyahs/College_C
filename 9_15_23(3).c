//Author: Shaurya Chadha
//Date: 9/15/23

//Write a C program to print Floyd's triangle

#include <stdio.h>
#include <conio.h>

int main()
{
    int NUM_1, NUM_2,  NUM_3, NUM_4 = 1;
    
    printf("Number of rows: \n");
    scanf("%d", &NUM_1);
    
    for (NUM_2 = 1; NUM_2 <= NUM_1; NUM_2++)
    {
        for (NUM_3 = 1; NUM_3 <= NUM_2; NUM_3++)
        {        
            printf("%d ",NUM_4);
            NUM_4++; 
        }
        printf("\n");
    }
    
    getch();
}
  