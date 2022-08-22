/*

C program to Fine Factorial of a Number

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,fact=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is value=%d",n,fact);
    
    return 0;
}