#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the size\n");
    scanf("%d",&a);
    while(i<=a)
    {
        printf("%d\n",2*i);
        i++;
    }
    printf("\n");
    return 0;
}