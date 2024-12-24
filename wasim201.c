#include<stdio.h>
int main()
{
    int m;
    printf("Enter the marks\n");
    scanf("%d",&m);
    switch(m)
    {
        case 90 ... 100:
            printf("Grade A");
            break;
        case 80 ... 89:
            printf("Grade B");
            break;
        case 70 ... 79:
            printf("Grade C");
            break;
        case 60 ... 69:
            printf("Grade D");
            break;
        case 50 ... 59:
            printf("Grade E");
            break;
        case 1 ... 49:
            printf("Sorry! You are failed");
            break;
        default:
            printf("Sorry! Invalid Input... Please try again");
    }
    printf("\n");
    return 0;
}