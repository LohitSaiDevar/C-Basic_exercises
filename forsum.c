#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,sum = 0;

    printf("Enter the range: ");
    scanf("%d",&n);

    for(i=1;i<=n && i>0;i++)
    {
        sum = sum + i;
    }

    printf("Sum of 1 to %d: %d",n,sum);
}