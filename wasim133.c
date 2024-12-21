#include<stdio.h>
int main()
{
    int a,i=1,s=0;
    printf("Enter the size\n");
    scanf("%d",&a);
    while(i<=a)
    {
        s=s+(2*i-1);
        i++;
    }
    printf("Sum of Even number=%d",s);
    printf("\n");
    return 0;
}