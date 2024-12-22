#include<stdio.h>
int main()
{
    int n,a=0,b=1,s=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(s<=n)
    {
        a=b;
        b=s;
        s=a+b;
        if(n==s)
        {
            break;
        }
    }
    if(n==s)
    {
        printf("Yes! Given number in the Fibonacci series");
    }
    else
    {
        printf("No! Given number is not present in Fibonacci series");
    }
    printf("\n");
    return 0;
}