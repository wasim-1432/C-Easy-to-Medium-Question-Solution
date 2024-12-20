#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a/2*2==a)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    printf("\n");
    return 0;
}