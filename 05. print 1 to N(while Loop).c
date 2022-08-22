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
    i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
    
    return 0;
}