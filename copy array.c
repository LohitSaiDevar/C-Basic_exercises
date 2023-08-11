#include<stdio.h>
#include<conio.h>

void main()
{
    int a[20],b[20],i,n;

    printf("Enter the range: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter %d numbers: ",n);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter %d numbers: ",n);
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
    {
        b[i] = a[i];
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}