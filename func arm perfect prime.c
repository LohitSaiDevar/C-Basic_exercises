#include<stdio.h>
#include<conio.h>
#include<math.h>

int arm(int n)
{
    int r,sum=0,n1;
    n1 = n;

    r = n1 % 10;
    while(n1!=0)
    {
        sum = sum + (r*r*r);
        n1=(n1/10);
    }
    return (sum == n);
}
int perfect(int n)
{
    int i,sum1=0;
    
    for(i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            sum1 = sum1 + i;
        }
        
    }
    return (sum1 == n);
}
int prime(int n)
{
    int i;

    for(i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return (1);
}
void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(arm(n))
    {
        printf("%d is armstrong number\n",n);
    }
    else
    {
        printf("%d is not armstrong number\n",n);
    }

    if(perfect(n))
    {
        printf("%d is a perfect number\n",n);
    }
    else
    {
        printf("%d is not a perfect number\n",n);
    }

    if(prime(n))
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
}