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
    for(i=1; i<=exponent; i++)
    {
        power=power*base;
    }
    printf("Result=%f", power);
    
    return 0;
}