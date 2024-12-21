#include<stdio.h>
int main()
{
    int a,s=1;
    printf("Enter any number\n");
    scanf("%d",&a);
    while(a)
    {
        s=s*a;
        a--;
    }
    printf("Factorial is=%d",s);
    printf("\n");
    return 0;
}