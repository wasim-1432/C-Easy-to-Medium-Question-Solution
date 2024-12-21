#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the size\n");
    scanf("%d",&a);
    while(i<=a)
    {
        printf("%d\n",i);
        i++;
    }
    printf("\n");
    return 0;
}