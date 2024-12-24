#include<stdio.h>
int Calculate_Number_Of_Arrangements(int n,int r);
int main()
{
    int n,r;
    printf("Enter the value of n and r\n");
    scanf("%d%d",&n,&r);
    printf("Arrangement is=%d",Calculate_Number_Of_Arrangements(n,r));
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
int Calculate_Number_Of_Arrangements(int n,int r)
{
    int p;
    p=fact(n)/fact(n-r);
    return p;
}