/* 

1+2+3+4+..........+N

*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("The total number of value: %d",sum);
    return 0;
}