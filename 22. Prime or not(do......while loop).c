/*

C program to check whether a number is prime or not

*/

#include<stdio.h>
#include<conio.h>

int main() 
{
    int n,i,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    i=2;
    do
    {
        if(n%i==0)
        {
            count++;
            
        }
        i++;
    }
    while(i<n);
    if(count!=0)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is prime number", n);
    }
    
    return 0;
}
