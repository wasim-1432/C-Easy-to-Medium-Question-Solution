#include<stdio.h>
int main()
{
    int x,a,i;
    printf("Enter any number\n");
    scanf("%d",&a);
    for(x=a+1; ; x++)
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
            printf("Next Prime numbe=%d",x);
            break;
        }
    }
    printf("\n");
    return 0;
}