/*

c program to find LCM of Number

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i,n1,n2,gcd,lcm;
    printf("Enter the two number: ");
    scanf("%d %d", &n1,&n2);
    for(i=1; i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    lcm=(n1*n2)/gcd;
    printf("The LCM of %d and %d is %d", n1,n2,lcm);
    
    return 0;
}