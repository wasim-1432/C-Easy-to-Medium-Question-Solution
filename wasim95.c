#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
    {
        printf("Yes! Divisible by 7 or 3");
    }
    else
    {
        printf("No! Divisible by 7 or 3");
    }
    printf("\n");
    return 0;
}