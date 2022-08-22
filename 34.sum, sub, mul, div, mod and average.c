/* Write down a c program to calculate sum, sub, mul,
div, mod and average. */



#include<stdio.h>
int main()
{
    float a,b,sum,sub,mul,div,average;
    int c,d,mod;
    printf("Enter the a and b value: ");
    scanf("%f %f",&a,&b);
    printf("Enter the c and d value: ");
    scanf("%d %d",&c,&d);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    average=sum/2;
    mod=c%d;
    printf("%f %f %f %f %f\n",sum,sub,mul,div,average);
    printf("%d", mod);

}
