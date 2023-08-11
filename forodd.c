#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;

    printf("Enter the range: ");
    scanf("%d",&n);

    printf("Odd no.s from 1 to %d are:\n",n);

    for(i=1;i<=n;i++)
    {
        if(i%2 != 0)
        {
            printf("%d\n",i);
        }
    }
}