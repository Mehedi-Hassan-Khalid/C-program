/*

c program to find power of number

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float i,base,exponent,power=1;
    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the exponent: ");
    scanf("%f", &exponent);
    i=1; 
    while(i<=exponent) 
    {
        power=power*base;
        i++;
    }
    printf("Result=%f", power);
    
    return 0;
}