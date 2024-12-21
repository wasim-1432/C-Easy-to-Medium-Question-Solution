#include<stdio.h>
int main()
{
    int a,y=0;
    printf("Enter any numbers\n");
    scanf("%d",&a);
    while(a)
    {
        y=y*10+a%10;
        a=a/10;
    }
    printf("Reverse number is=%d",y);
    printf("\n");
    return 0;
}