#include<stdio.h>
#include<conio.h>
#define PI (3.14)

double diameter(double r);
double area(double r);
double circum(double r);
int main()
{
    float a,c,r,d;
    
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    d = diameter(r);
    a = area(r);
    c = circum(r);

    printf("Diameter = %lf\nArea = %lf\nCircumference = %lf",d,a,c);

    return 0;
}
double diameter(double r)
{
    return (r*2);
}
double area(double r)
{
    return (PI * r*r);
}
double circum(double r)
{
    return (PI*2*r);
}
