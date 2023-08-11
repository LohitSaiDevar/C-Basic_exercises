#include<stdio.h>
#include<conio.h>

void main()
{
    int a[20],i,n,j,dup = 0;

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

        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                dup++;
            }
        }
    }
    printf("\nNo.of duplicate elements are: %d",dup);
}