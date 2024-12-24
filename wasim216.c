#include<stdio.h>
int Calculate_Factorial(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Factorial of given number is=%d.",Calculate_Factorial(n));
    printf("\n");
    return 0;
}
int Calculate_Factorial(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}