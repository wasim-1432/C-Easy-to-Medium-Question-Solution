#include<stdio.h>
int main()
{
    int a,count=0;
    printf("Enter any number\n");
    scanf("%d",&a);
    while(a)
    {
        count++;
        a=a/10;
    }
    printf("Digit=%d",count);
    printf("\n");
    return 0;
}