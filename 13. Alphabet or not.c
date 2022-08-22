/*

C program to check whether a character is an Alphabet or not

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        printf("%c is a Alphabet", c);
    }
    else
    {
        printf("%c is not Alphabet", c);
    }
    
    return 0;
}