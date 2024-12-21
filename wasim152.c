#include<stdio.h>
int main()
{
    int x,i,a,b;
    printf("Enter starting and ending point\n");
    scanf("%d%d",&a,&b);
    for(x=a;x<=b;x++)
    {
        for(i=2;i<=x;i++)
        {
            if(x%i==0)
            {
                break;
            }
        }
        if(x==i)
        {
            printf("%d\n",x);
        }
    }
    printf("\n");
    return 0;
}