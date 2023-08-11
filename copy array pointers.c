#include<stdio.h>
#include<conio.h>

void main()
{
    int a[20],b[20],*p1,*p2,i,n;

    p1 = a;
    p2 = b;

    printf("Enter the range: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter %d numbers: ",n);
        scanf("%d",&p1);
        p1++;
    }
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter %d numbers: ",n);
        scanf("%d",&p2);
        p2++;
    }
    for(i=0;i<10;i++)
    {
        p1 = p2;
        p2++;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",*p2);
    }
}