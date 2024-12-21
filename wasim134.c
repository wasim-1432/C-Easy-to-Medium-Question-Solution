#include<stdio.h>
int main()
{
    int a,i=1,s=0;
    printf("Enter the size\n");
    scanf("%d",&a);
    while(i<=a)
    {
        s=s+i*i;
        i++;
    }
    printf("Sum of square=%d",s);
    printf("\n");
    return 0;
}