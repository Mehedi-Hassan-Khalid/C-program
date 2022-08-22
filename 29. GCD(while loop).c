/*

c program to find GCD of Number

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i,n1,n2,gcd;
    printf("Enter the two number: ");
    scanf("%d %d", &n1,&n2);
    i=1; 
    while(i<=n1 && i<=n2) 
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
	i++;
    }
    
    printf("The GCD of %d and %d is %d", n1,n2,gcd);
    
    return 0;
}