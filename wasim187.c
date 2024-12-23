#include<stdio.h>
int main()
{
    int i,j,k,t;
    for(i=1;i<=5;i++)
    {
        k=1;
        t=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && k)
            {
                printf("%d",t);
                k=0;
                j<5?t++:t--;
            }
            else
            {
                printf(" ");
                if(j==5)
                {
                    t--;
                }
                k=1;
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}