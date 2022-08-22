/*

Largest Number

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter a three number: ");
    scanf("%d %d %d", &a,&b,&c);
    
    if((a>b)&&(a>c))
    {
        printf("%d is the largest value",a);
    }
    else if((b>a)&&(b>c))
    {
        printf("%d is the largest value",b);
    }
    else
    {
        printf("%d is the largest value",c);
    }
    return 0;
}