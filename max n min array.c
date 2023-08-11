#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5],i,max,min;

    for(i=0;i<5;i++)
    {
        printf("Enter 5 numbers: ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
        if(max<a[i])
        {
            max = a[i];
        }
        if(min>a[i])
        {
            min = a[i];
        }
    }
    printf("\nMax = %d\nMin = %d",max,min);
}