#include<stdio.h>
#include<conio.h>

void main()
{
    int a[20],i,n,pos,j;

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
    }
    printf("Enter the number u want to be inserted in the array: ");
    scanf("%d",&pos);

    printf("Enter which position to insert: ");
    scanf("%d",&j);

    if(pos>=n+1 || pos <= 0)
    {
        printf("Invalid input");
    }
    else
    {
        for(i=n;i>=pos;i--)
        {
            printf("%d ",j);
        }
        for(i=0;i<n;i++)
        {
            
        }
    }

    
}