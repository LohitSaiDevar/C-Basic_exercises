#include<stdio.h>
#include<conio.h>

void main()
{
    int a[20],i,n,neg = 0;

    printf("Enter the range: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter %d numbers: ",n);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

        if(a[i] < 1)
        {
            neg++;
        }
    }
    printf("\nNo. of negative numbers are: %d",neg);
}