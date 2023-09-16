//Author: Shaurya Chadha
//Date: 9/15/23

//Write a C program to print an upside down left triangle

#include <conio.h>
#include <stdio.h>


int main(void) {
   int NUM_1, NUM_2, NUM_3;

   NUM_1 = 5;

   for(NUM_2=NUM_1;NUM_1>=1;NUM_2--) {
      for(NUM_3=1;NUM_3<=NUM_2;NUM_3++)
         printf("* ");

      printf("\n");
   }
   
   getch();
}