#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    printf("Without last digit=%d",a/10);
    printf("\n");
    return 0;
}