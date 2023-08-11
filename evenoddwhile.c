#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 1,n;

    printf("Enter any number: ");
    scanf("%d",&n);

    printf("All even numbers from 1 to %d are: \n", n);
    while(i <= n)
    {
        if(i % 2 == 0)
        {
            printf("%d\n",i);
            i+=1;
        }
        i++;
        
    }
    
    printf("All odd numbers from 1 to %d are: \n", n);
    
    i = 1;
    while(i <= n)
    {
        printf("%d\n",i);
        i+=2;
    }
}