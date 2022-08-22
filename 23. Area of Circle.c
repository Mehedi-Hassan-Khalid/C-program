/*

C program to find area of circle 
Area=PI*(radius)^2
*/

#include<stdio.h>
#include<conio.h>
#define PI 3.1416

int main() 
{
    float radius,Area;
    printf("Enter the number: ");
    scanf("%f",&radius);
    Area=PI*radius*radius;
    printf("Area of Circle: %f", Area);
    
    return 0;
}
