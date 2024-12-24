#include<stdio.h>
int Check_Even_or_Odd(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(Check_Even_or_Odd(a))
    {
        printf("Even numebr");
    }
    else
    {
        printf("Odd number");
    }
    printf("\n");
    return 0;
}
int Check_Even_or_Odd(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}