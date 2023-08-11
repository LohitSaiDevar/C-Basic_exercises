#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,fact,n;

    printf("Enter the range: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact = 0;

        for(j=1;j<=n;j++)
        {
            if(i%j == 0)
            {
                fact++;
            }
        }
        if(fact == 2)
        {
            printf("%d\n",i);
        }
    }
}