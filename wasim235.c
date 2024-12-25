#include<stdio.h>
int Print_First_N_Prime_Number(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_First_N_Prime_Number(n);
    printf("\n");
    return 0;
}
int Print_First_N_Prime_Number(int n)
{
    int i,y;
    for(y=2;y<=n;y++)
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
            printf("%d ",y);
        }
    }
}