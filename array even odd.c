#include<stdio.h>
#include<conio.h>

void main()
{
    int a[20],i,n,even = 0,odd = 0;

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

        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nTotal even numbers: %d\nTotal odd numbers: %d",even,odd);
}