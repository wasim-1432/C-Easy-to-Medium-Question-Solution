#include<stdio.h>
int main()
{
    int n,a=0,b=1,s=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(s<=n)
    {
        printf("%d\n",s);
        a=b;
        b=s;
        s=a+b;
    }
    printf("\n");
    return 0;
}