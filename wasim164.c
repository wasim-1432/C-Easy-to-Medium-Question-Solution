#include<stdio.h>
int main()
{
    int n,x,count=0,y,r,i,sum=0,p;
    printf("Enter any number\n");
    scanf("%d",&n);
    int t=n;
    while(t)
    {
        count++;
        t=t/10;
    }
    for(y=n;y!=0;y=y/10)
    {
        r=y%10;
        p=1;
        for(i=1;i<=count;i++)
        {
            p=p*r;
        }
        sum=sum+p;   
    }
    if(sum==n)
    {
        printf("Yes! Armstron number");
    }
    else
    {
        printf("No! Armstong number");
    }
    printf("\n");
    return 0;
}