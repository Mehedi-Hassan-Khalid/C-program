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
    do
    {
        fact=fact*i;
        i++;
    }
    while(i<=n);
    printf("Factorial of %d is value=%d",n,fact);
    
    return 0;
}