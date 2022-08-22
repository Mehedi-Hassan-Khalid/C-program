/*

c program to find area of a triangle

area=(0.5)*base*height

          or

area=sqrt(s*(s-a)*(s-b)*(s-c)) [s=(a+b+c)/2]

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a,b,c,s,area;
    printf("Enter the three sides of triangle: ");
    scanf("%f %f %f", &a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle: %f", area);
    
    return 0;
}