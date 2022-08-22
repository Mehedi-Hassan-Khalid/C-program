/*

C program to display Fiboncci series

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int count,i,first_term=0,second_term=1,next_term;
    printf("Enter the number of terms: ");
    scanf("%d",&count);
    for(i=0; i<count; i++)
    {
        if(i<=1)
        {
            next_term=i;
        }
        else
        {
            next_term=first_term+second_term;
            first_term=second_term;
            second_term=next_term;
        }
        printf("%d\n", next_term);
    }
    
    return 0;
}