#include<stdio.h>
#include<conio.h>

void main()
{
    int a[20],*p,n,i;

    p = a;

    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter numbers: ");
        scanf("%d",p);
        p++;
    }
    p = a;

    for(i=0;i<n;i++)
    {
        printf("%d ",*p);
        p++;
    }
}