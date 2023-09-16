//Author: Shaurya Chadha
//Date: 9/1/23
//Write a program in C to find out the area of a square, rectangle and circle.
#include <stdio.h>
#include <conio.h>
int main(void)
    {int CHOICE_1,SIDE_1,SIDE_2,ANSWER_1;
    float ANSWER_2,PIE = 3.14,RADIUS_1,DIAMETER_1;
    printf("Area of SQRE/REC/CIRC(1/2/3): ");
    scanf("%d",&CHOICE_1);
    if(CHOICE_1 == 1){
        printf("Enter Square side size: ");
        scanf("%d",&SIDE_1);
        ANSWER_1 = SIDE_1*SIDE_1;
        printf("Area of the square %d",ANSWER_1);}
    else if(CHOICE_1 == 2){
        printf("Enter Rectangle side size(x,y): ");
        scanf("%d""%d",&SIDE_1,&SIDE_2);
        ANSWER_1 = SIDE_1*SIDE_2;
        printf("Area of the rectangle %d",ANSWER_1);}
    else if(CHOICE_1 == 3){
        printf("Enter the radius and diameter (float): ");
        scanf("%f",&RADIUS_1);
        ANSWER_2 = PIE*RADIUS_1*RADIUS_1;
        printf("Area of the circle (float) %f",ANSWER_2);}
    else{
        printf("Error");}
getch();}