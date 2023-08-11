#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5],i,max,sec;

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
        else if(sec>max)
        {
            sec = a[i];
        }
    }
    
    printf("\nMax = %d\nSecond largest = %d",max,sec);
}