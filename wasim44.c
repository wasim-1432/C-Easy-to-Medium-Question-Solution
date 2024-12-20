#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any two umbers\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:A=%d & B=%d",a,b);
    printf("\n");
    return 0;
}