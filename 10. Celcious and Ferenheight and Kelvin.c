/* 

Celcious and Ferenheight and Kelvin
Formula: c/5=(f-32)/9=(k-272)/5

*/


#include<stdio.h>
#include<conio.h>

int main()
{
    int choose;
    float c,f;
    printf("Enter your choose:");
    scanf("%d",&choose);
    if(choose==1)
    {
        printf("Enter your temperature in Ferenheight: ");
        scanf("%f",&f);
        c=((f-32)/1.8);
        printf("Your temperature in Celcious %f", c);
    }
    else
    {
        printf("Enter your temperature in Celcious: ");
        scanf("%f",&c);
        f=((1.8*c)+32);
        printf("Your temperature in Ferenheight %f", f); 
    }
    return 0;
}