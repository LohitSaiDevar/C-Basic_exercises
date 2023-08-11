#include<stdio.h>
#include<conio.h>

void main()
{
    int fact = 1,i = 1,n;

    printf("Enter the range of the factorial: ");
    scanf("%d",&n);

    while(i <= n)
    {
        fact = fact * i;
        i++;
    }

    printf("The factorial of %d = %d",n,fact);
}