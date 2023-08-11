#include<stdio.h>
#include<conio.h>

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    switch (n > 0)
    {
        // Num is positive
        case 1:
            printf("%d is positive.", n);
        break;

        // Num is either negative or zero
        case 0:
            switch (n < 0)
            {
                case 1: 
                    printf("%d is negative.", n);
                    break;
                case 0:
                    printf("%d is zero.", n);
                    break;
            }
        break;
    }
}