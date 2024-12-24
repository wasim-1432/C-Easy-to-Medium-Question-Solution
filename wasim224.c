#include<stdio.h>
int Check_Present_Digit_In_A_Given_Number(int n,int d);
int main()
{
    int n,d;
    printf("Enter any number and digit\n");
    scanf("%d%d",&n,&d);
    if(Check_Present_Digit_In_A_Given_Number(n,d))
    {
        printf("Yes! Present given digit in a given number");
    }
    else
    {
        printf("No! Present given digit in a given number");
    }
    printf("\n");
    return 0;
}
int Check_Present_Digit_In_A_Given_Number(int n,int d)
{
    int y,r;
    for(y=n;y!=0;y=y/10)
    {
        r=y%10;
        if(r==d)
        {
            return 1;
        }
    }
    return 0;
}