#include <stdio.h>
#include <conio.h>

void main()
{
    int month, year;

    printf("Enter the Month no: ");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

        printf("No. of days are: %d",31);
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        
        printf("No. of days are: %d",30);
        break;

        case 2:

        printf("Enter the year: ");
        scanf("%d",&year);

        if(year % 4 == 0)
        {
            printf("No. of days are: %d",29);
        }else{
            printf("No. of days are: %d",28);
        }
        break;

        default:

        printf("Enter a valid month no.");
    }
}