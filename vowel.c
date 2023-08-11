#include<stdio.h>
#include<conio.h>

void main()
{
    char alpha;

    printf("Enter an alphabet: ");
    scanf("%c",&alpha);

    switch(alpha)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

        printf("%c is a vowel",alpha);
        break;

        default:

        printf("%c is a consonant",alpha);
        break;
    }
}