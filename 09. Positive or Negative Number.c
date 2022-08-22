/* 

Positive or Negative

*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is a Positive number", n);
    }
    else if(n<0)
    {
        printf("%d is a Negative number", n); 
    }
    else
    {
        printf("%d is a zero", n);
    }

    return 0;
}