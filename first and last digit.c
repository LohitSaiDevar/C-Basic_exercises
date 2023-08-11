#include<stdio.h>
#include<conio.h>

void main()
{
    int n,a,b;

    printf("Enter a number: ");
    scanf("%d",&n);

    int m = n;

    for(;n>10;)
    {
        n = n/10;
    }
    a = n;
    printf("The first digit = %d\n",a);

    b = m % 10;

    printf("The last digit = %d",b);
}