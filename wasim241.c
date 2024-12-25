#include<stdio.h>
int Print_Prime_Numbers_Between_Given_Two_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    Print_Prime_Numbers_Between_Given_Two_Numbers(a,b);
    printf("\n");
    return 0;
}
int Print_Prime_Numbers_Between_Given_Two_Numbers(int a,int b)
{
    int i,y;
    for(y=a;y<=b;y++)
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