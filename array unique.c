#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50],b[50],i,j,n,f;

    printf("Enter the range: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter 10 num: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        f = 1;
        if(a[i] != -1)
        {
            for(j=i+1;j<=n;j++)
            {
                if(a[i] == a[j])
                {
                    f++;
                    a[j] = -1;
                }
            }
            b[i] = f;
        }
    }
    printf("Unique elements in the array are:\n\n");
    for(i=0;i<=n;i++)
    {
        if(b[i] == 1)
        {
            printf("%d\n",a[i]);
        }
    }
}