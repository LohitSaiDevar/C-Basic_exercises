#include<stdio.h>
#include<conio.h>

int a,b,maxnum,minnum;
int max(int a,int b);
int min(int a,int b);

int main()
{
    printf("Enter a: ");
    scanf("%d",&a);
    printf("\n");

    printf("Enter b: ");
    scanf("%d",&b);
    printf("\n");

    maxnum = max(a,b);
    minnum = min(a,b);

    printf("Maximum = %d\nMinimum = %d",maxnum,minnum);
}
int max(int a,int b)
{
    return (a>b) ? a:b;
}
int min(int a,int b)
{
    return (a<b) ? a:b;
}