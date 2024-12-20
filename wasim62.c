#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter any three digit number\n");
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    d=a/10%10;
    printf("Rotate right side=%d%d%d",b,c,d);
    printf("\n");
    return 0;
}