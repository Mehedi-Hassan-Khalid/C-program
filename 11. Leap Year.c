/*

C program to check Leap year

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(((year%400)==0) || ((year%100!=0)&&(year%4==0)))
    {
        printf("%d is a Leap year", year);
    }
    else
    {
        printf("%d is not Leap year", year);
    }
    
    return 0;
}