#include<stdio.h>
#include<conio.h>

int evenodd(int n)
{
    return (n%2);
}
void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(evenodd(n) == 0)
    {
        printf("Even number");
    }
    else if(n<1)
    {
        printf("Number is below 1");
    }
    else
    {
        printf("odd number");
    }
}