#include<stdio.h>
int main()
{
    int d;
    printf("Enter the day number in a week.\n");
    scanf("%d",&d);
    switch(d)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuseday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thurseday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Suterday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Sorry! Invalid input");

    }
    printf("\n");
    return 0;
}