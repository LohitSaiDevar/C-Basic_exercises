#include<stdio.h>
#include<conio.h>

void main()
{

    int pin,ch = 1;

    start:

    if(ch <= 3)
    {
        printf("Please enter your pin: ");
        scanf("%d",&pin);

        if(pin == 2651)
        {
            printf("Your phone is unlocked");
        }
        else
        {
            ch++;
            goto start;
        }
    }
    else
    {
        printf("Please try again after 30 secs");
    }

    
}