#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i;

    for(i=0;i<10;i++)
    {
        printf("Enter 10 numbers: ");
        scanf("%d",&a[i]);
    }
    
    printf("Output: ");
    for(i=0;i<10;i++)
    {
        if(a[i]<0)
        {
            printf("%d, ",a[i]);
        }
    }
}