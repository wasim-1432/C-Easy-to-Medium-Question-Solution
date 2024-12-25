#include<stdio.h>
int Find_Next_Prime_Number(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Next Prime number is=%d",Find_Next_Prime_Number(n));
    printf("\n");
    return 0;
}
int Find_Next_Prime_Number(int n)
{
    int i,y;
    for(y=n+1; ;y++)
    {
        for(i=2;i<=y;i++)
        {
            if(y%i==0)
            {
                break;
            }
        }
        if(y==i)
        {
            return y;
            break;
        }
    }
}