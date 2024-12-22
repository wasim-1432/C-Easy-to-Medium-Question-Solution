#include<stdio.h>
int main()
{
    int a,b,i=2,s=1;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            s=s*i;
            continue;
        }
        i++;
    }
    printf("HCF is=%d",s);
    printf("\n");
    return 0;
}