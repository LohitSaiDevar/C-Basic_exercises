#include<stdio.h>
#include<conio.h>

void main()
{
    int n,count = 0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(;n>0;)
    {
        n = n/10;
        count++;
    }

    printf("No. of digits: %d",count);
}