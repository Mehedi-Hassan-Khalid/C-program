/*

C program to check whether a character is a Vowel or Consonant

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char c;
    printf("Enter a Alphabet: ");
    scanf("%c",&c);
    if((c=='a')||(c=='A')||(c=='e')||(c=='E')||(c=='i')||(c=='I')||(c=='o')||(c=='O')||(c=='u')||(c=='U'))
    {
        printf("%c is a Vowel", c);
    }
    else
    {
        printf("%c is a Consonant", c);
    }
    
    return 0;
}