/* 

Even or odd

*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is a even number",n);
    }
    else
    {
        printf("%d is a odd number",n); 
    }

    return 0;
}