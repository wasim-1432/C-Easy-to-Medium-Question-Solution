#include<stdio.h>
float Simple_Interest(int p,int r,int t);
int main()
{
    int p,r,t;
    printf("Enter the principle amount,rate and year\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple Interest is=%f",Simple_Interest(p,r,t));
    printf("\n");
    return 0;
}
float Simple_Interest(int p,int r,int t)
{
    float SI;
    SI=p*r*t/100.0;
    return SI;
}