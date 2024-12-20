#include<stdio.h>
int main()
{
    int p,r,t;
    printf("Enter the Principle amount,rate and time(in year)\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple Interest is=%f",(p*r*r)/100.0);
    printf("\n");
    return 0;
}