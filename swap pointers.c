#include<stdio.h>
#include<conio.h>

int a,b,*p1,*p2,temp;

void swap()
{
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void main()
{
    p1 = &a;
    p2 = &b;

    printf("Enter a: ");
    scanf("%d",p1);

    printf("Enter b: ");
    scanf("%d",p2);

    swap();

    printf("%d %d are swapped no.s",*p1,*p2);
}