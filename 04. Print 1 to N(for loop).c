/* 

print 1 to N

*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
    }
    return 0;
}