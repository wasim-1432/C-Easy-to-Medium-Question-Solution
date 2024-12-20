#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("Positive number\n");
    }
    else
    {
        printf("Non Positive");
    }
    printf("\n");
    return 0;
}