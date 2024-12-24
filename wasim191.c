#include<stdio.h>
int main()
{
    int m;
    printf("Enter any month number\n");
    scanf("%d",&m);
    switch(m)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 Days");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 Days");
            break;
        case 2:
            printf("29 or 28 Days");
            break;
        default:
            printf("Sorry! Wrong input");
    }
    printf("\n");
    return 0;
}