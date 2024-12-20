#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a%3==0 && a%2==0)
    {
        printf("Yes! Divisible by 3 & 2");
    }
    else
    {
        printf("No! Divisible by 3 & 2");
    }
    printf("\n");
    return 0;
}