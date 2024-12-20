#include<stdio.h>
int main()
{
    int a;
    printf("Enter any three digit numbers\n");
    scanf("%d",&a);
    printf("Addition of given digit=%d",a%10+a/10%10+a/100);
    printf("\n");
    return 0;
}