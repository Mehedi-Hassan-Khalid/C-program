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
    i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is value=%d",n,fact);
    
    return 0;
}