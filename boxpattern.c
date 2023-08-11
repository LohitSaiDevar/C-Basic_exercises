#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,j,blank;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=n;i>=n-1;i--)
    {
        for(blank=1;blank<=n-i;blank++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i<=n;i++)
    {
        for(blank=1;blank<=n-i;blank++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}