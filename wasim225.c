#include<stdio.h>
int Calculate_Prime_Factors(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Calculate_Prime_Factors(n);
    printf("\n");
    return 0;
}
int Calculate_Prime_Factors(int n)
{
    int r,i=2;
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
            continue;
        }
        i++;
    }
}