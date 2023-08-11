#include<stdio.h>
#include<conio.h>

int num,c;
int cube(int num)
{
    return (num * num * num);
}
int main()
{
    printf("Enter a number: ");
    scanf("%d",&num);
    c = cube(num);

    printf("Cube = %d",c);

    return 0;
}