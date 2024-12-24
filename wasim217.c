#include<stdio.h>
int Calculate_Combination(int n,int r);
int main()
{
    int n,r;
    printf("Enter the value of n and r\n");
    scanf("%d%d",&n,&r);
    printf("Combination is=%d",Calculate_Combination(n,r));
    printf("\n");
    return 0;
}
int fact(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}
int Calculate_Combination(int n,int r)
{
    int p;
    p=fact(n)/fact(n-r)/fact(r);
    return p;
}
