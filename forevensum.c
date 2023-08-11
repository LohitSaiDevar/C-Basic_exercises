#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,sum = 0;

    printf("Enter the range: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2 == 0)
        {
            sum = sum + i;
        }
    }

    printf("Sum = %d", sum);
}