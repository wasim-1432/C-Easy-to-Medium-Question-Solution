#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a/1000==0 && a/10!=0 && a/100!=0)
    {
        printf("Three digit number");
    }
    else
    {
        printf("Not three digit number");
    }
    printf("\n");
    return 0;
}